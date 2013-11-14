
#include <nvapi.h>
#include <NvApiDriverSettings.h>
#include <string>

NvDRSSessionHandle _session;
NvDRSProfileHandle _profile;
NVDRS_PROFILE _profInfo;

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
  NvAPI_SYS_GetChipSetInfo(&info);
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

  NvAPI_DRS_DestroySession(_session);
  
  return 0;
}