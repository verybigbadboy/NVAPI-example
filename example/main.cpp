
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

  NvAPI_Status status;
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