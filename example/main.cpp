
#include <nvapi.h>
#include <NvApiDriverSettings.h>
#include <string>

NvDRSSessionHandle _session;
NvDRSProfileHandle _profile;
NVDRS_PROFILE _profInfo;
#define  PrintError(x) {}//x

bool DisplayProfileContents(NvDRSSessionHandle hSession, NvDRSProfileHandle hProfile)
{
  NvAPI_Status status;

  NVDRS_PROFILE profileInformation = {0};
  profileInformation.version = NVDRS_PROFILE_VER;
  status = NvAPI_DRS_GetProfileInfo(hSession, hProfile, &profileInformation);
  if(status != NVAPI_OK)
  {
    return false;
  }
  wprintf(L"Profile Name: %s\n", profileInformation.profileName);
  printf("Number of Applications associated with the Profile: %d\n", profileInformation.numOfApps);
  printf("Number of Settings associated with the Profile: %d\n", profileInformation.numOfSettings);
  printf("Is Predefined: %d\n", profileInformation.isPredefined);

  if(profileInformation.numOfApps > 0)
  {
    NVDRS_APPLICATION *appArray = new NVDRS_APPLICATION[profileInformation.numOfApps];
    NvU32 numAppsRead = profileInformation.numOfApps, i;

    appArray[0].version=NVDRS_APPLICATION_VER;
    status=NvAPI_DRS_EnumApplications(hSession,hProfile,0,&numAppsRead,appArray);
    if(status!=NVAPI_OK)
    {
      PrintError(status);
      delete[]appArray;
      return false;
    }
    for(i=0;i<numAppsRead;i++)
    {
      wprintf(L"Executable: %s\n",appArray[i].appName);
      wprintf(L"User Friendly Name: %s\n",appArray[i].userFriendlyName);
      printf("Is Predefined: %d\n",appArray[i].isPredefined);
    }
    delete[]appArray;
  }
  if(profileInformation.numOfSettings> 0)
  {
    NVDRS_SETTING*setArray=new NVDRS_SETTING[profileInformation.numOfSettings];
    NvU32 numSetRead=profileInformation.numOfSettings,i;
    setArray[0].version=NVDRS_SETTING_VER;
    status=NvAPI_DRS_EnumSettings(hSession,hProfile,0,&numSetRead,setArray);
    if(status!=NVAPI_OK) 
    {
      PrintError(status);
      return false;
    }
    for(i=0;i<numSetRead;i++)
    {
      if(setArray[i].settingLocation!=NVDRS_CURRENT_PROFILE_LOCATION)
      {
        continue;
      }
      NvAPI_DRS_GetSettingNameFromId(setArray[i].settingId, &setArray[i].settingName);
      wprintf(L"Setting Name: %s\n",setArray[i].settingName);
      printf("Setting ID: %X\n",setArray[i].settingId);
      printf("Predefined? : %d\n",setArray[i].isCurrentPredefined);
      switch(setArray[i].settingType)
      {
      case NVDRS_DWORD_TYPE:
        printf("Setting Value: %X\n",setArray[i].u32CurrentValue);
        break;
      case NVDRS_BINARY_TYPE:
        {
          unsigned int len;
          printf("Setting Binary (length=%d) :",setArray[i].binaryCurrentValue.valueLength);
          for(len=0; len<setArray[i].binaryCurrentValue.valueLength;len++)
          {
            printf(" %02x",setArray[i].binaryCurrentValue.valueData[len]);
          }
          printf("\n");
        }
        break;
      case NVDRS_WSTRING_TYPE:
        wprintf(L"Setting Value: %s\n",setArray[i].wszCurrentValue);
        break;
      }
    }
  }
  printf("\n");
  return true;
}

void EnumerateProfilesOnSystem()
{
  NvAPI_Status status;
  status = NvAPI_Initialize();
  if(status != NVAPI_OK)
    PrintError(status);

  NvDRSSessionHandle hSession = 0;
  status = NvAPI_DRS_CreateSession(&hSession);
  if(status != NVAPI_OK)
    PrintError(status);

  status = NvAPI_DRS_LoadSettings(hSession);
  if(status != NVAPI_OK)
    PrintError(status);

  NvDRSProfileHandle hProfile = 0;
  unsigned int index = 0;
  while((status = NvAPI_DRS_EnumProfiles(hSession, index, &hProfile)) == NVAPI_OK)
  {
    printf("Profile in position %d:\n", index);
    DisplayProfileContents(hSession, hProfile);
    index++;
  }
  if(status == NVAPI_END_ENUMERATION)
  {
    // this is expected at the end of the enumeration
  }
  else
    if(status != NVAPI_OK)
      PrintError(status);

  NvAPI_DRS_DestroySession(hSession);
  hSession = 0;
}

int main()
{
  if (NvAPI_Initialize() != NVAPI_OK)
    throw std::runtime_error("NVIDIA Api not initialized");

  if (NvAPI_DRS_CreateSession(&_session) != NVAPI_OK)
    throw std::runtime_error("can't create session");

  if (NvAPI_DRS_LoadSettings(_session) != NVAPI_OK)
    throw std::runtime_error("can't load system settings");

  if (NvAPI_DRS_GetCurrentGlobalProfile(_session, &_profile) != NVAPI_OK)
    throw std::runtime_error("can't get current global profile");

  NvPhysicalGpuHandle nvGPUHandle[NVAPI_MAX_PHYSICAL_GPUS];
  NvAPI_Status status;
  NvU32 GpuCount;
  NvU32 DeviceId;
  NvU32 SubSystemId;
  NvU32 RevisionId;
  NvU32 ExtDeviceId;
  NvU32 BusId;
  NvU32 BiosRevision;
  NvU32 BiosRevisionOEM;
  NV_BOARD_INFO BoardInfo;
  BoardInfo.version = NV_BOARD_INFO_VER;
  NvU32 ConfiguredFeatureMask;
  NvU32 ConsistentFeatureMask;
  NvU32 CoreCount;

  NvAPI_EnumPhysicalGPUs(nvGPUHandle, &GpuCount);

  NvAPI_ShortString str;
  NvAPI_GPU_GetFullName(nvGPUHandle[0], str);
  NvAPI_GPU_GetPCIIdentifiers(nvGPUHandle[0], &DeviceId, &SubSystemId, &RevisionId, &ExtDeviceId);
  NvAPI_GPU_GetBusId(nvGPUHandle[0], &BusId);
  NvAPI_GPU_GetVbiosRevision(nvGPUHandle[0], &BiosRevision);
  NvAPI_GPU_GetVbiosOEMRevision(nvGPUHandle[0], &BiosRevisionOEM);
  NvAPI_GPU_GetVbiosVersionString(nvGPUHandle[0], str);
  status = NvAPI_GPU_GetBoardInfo(nvGPUHandle[0], &BoardInfo);
  status = NvAPI_GPU_WorkstationFeatureQuery(nvGPUHandle[0], &ConfiguredFeatureMask, &ConsistentFeatureMask);
  status = NvAPI_GPU_GetGpuCoreCount(nvGPUHandle[0], &CoreCount);

  NV_CHIPSET_INFO info;
  info.version = NV_CHIPSET_INFO_VER_4;
   status =NvAPI_SYS_GetChipSetInfo(&info);
  NvAPI_GetInterfaceVersionString(str);

  unsigned int test= (unsigned int) -0x68;
  unsigned int index = 0;
  while ((status = NvAPI_DRS_EnumProfiles(_session, index, &_profile)) == NVAPI_OK)
  {
    _profInfo.version = NVDRS_PROFILE_VER;

    if (NvAPI_DRS_GetProfileInfo(_session, _profile, &_profInfo) != NVAPI_OK)
      throw std::runtime_error("can't get current global profile info");

    index++;
  }

  EnumerateProfilesOnSystem();

  NvAPI_DRS_DestroySession(_session);

  return 0;
}