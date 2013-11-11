/***************************************************************************\
|*                                                                           *|
|*      Copyright NVIDIA Corporation.  All rights reserved.                  *|
|*                                                                           *|
|*   NOTICE TO USER:                                                         *|
|*                                                                           *|
|*   This source code is subject to NVIDIA ownership rights under U.S.       *|
|*   and international Copyright laws.  Users and possessors of this         *|
|*   source code are hereby granted a nonexclusive, royalty-free             *|
|*   license to use this code in individual and commercial software.         *|
|*                                                                           *|
|*   NVIDIA MAKES NO REPRESENTATION ABOUT THE SUITABILITY OF THIS SOURCE     *|
|*   CODE FOR ANY PURPOSE. IT IS PROVIDED "AS IS" WITHOUT EXPRESS OR         *|
|*   IMPLIED WARRANTY OF ANY KIND. NVIDIA DISCLAIMS ALL WARRANTIES WITH      *|
|*   REGARD TO THIS SOURCE CODE, INCLUDING ALL IMPLIED WARRANTIES OF         *|
|*   MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR          *|
|*   PURPOSE. IN NO EVENT SHALL NVIDIA BE LIABLE FOR ANY SPECIAL,            *|
|*   INDIRECT, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES          *|
|*   WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN      *|
|*   AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING     *|
|*   OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOURCE      *|
|*   CODE.                                                                   *|
|*                                                                           *|
|*   U.S. Government End Users. This source code is a "commercial item"      *|
|*   as that term is defined at 48 C.F.R. 2.101 (OCT 1995), consisting       *|
|*   of "commercial computer  software" and "commercial computer software    *|
|*   documentation" as such terms are used in 48 C.F.R. 12.212 (SEPT 1995)   *|
|*   and is provided to the U.S. Government only as a commercial end item.   *|
|*   Consistent with 48 C.F.R.12.212 and 48 C.F.R. 227.7202-1 through        *|
|*   227.7202-4 (JUNE 1995), all U.S. Government End Users acquire the       *|
|*   source code with only those rights set forth herein.                    *|
|*                                                                           *|
|*   Any use of this source code in individual and commercial software must  *|
|*   include, in the user documentation and internal comments to the code,   *|
|*   the above Disclaimer and U.S. Government End Users Notice.              *|
|*                                                                           *|
|*                                                                           *|
\***************************************************************************/

#ifndef _NVAPI_DRIVER_SETTINGS_H_
#define _NVAPI_DRIVER_SETTINGS_H_

#include "nvapi.h"
#include <wchar.h>

#define OGL_AA_LINE_GAMMA_STRING                   L"Antialiasing - Line gamma"
#define OGL_DEEP_COLOR_SCANOUT_STRING              L"Deep color for 3D applications"
#define OGL_DEFAULT_SWAP_INTERVAL_STRING           L"Controls the number of vblank signals from the display to wait before rendering a frame (SwapInterval) on OpenGL. In order to force VSYNC ON or OFF, use VSYNCMODE."
#define OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_STRING L"Controls if we evaluate the current scan line for a (un)synced flip with negative intervals. A value in the range of 0 - 100%"
#define OGL_DEFAULT_SWAP_INTERVAL_SIGN_STRING      L"Controls if the number of SwapIntervals set is treated as negative or positive values on OpenGL."
#define OGL_EVENT_LOG_SEVERITY_THRESHOLD_STRING    L"Event Log Severity Threshold. This controls which events are logged."
#define OGL_EXTENSION_STRING_VERSION_STRING        L"Extension String version"
#define OGL_FORCE_BLIT_STRING                      L"Buffer-flipping mode"
#define OGL_FORCE_STEREO_STRING                    L"Force Stereo shuttering"
#define OGL_IMPLICIT_GPU_AFFINITY_STRING           L"Preferred OpenGL GPU"
#define OGL_MAX_FRAMES_ALLOWED_STRING              L"Maximum frames allowed"
#define OGL_MULTIMON_STRING                        L"Multi-display/mixed-GPU acceleration"
#define OGL_OVERLAY_PIXEL_TYPE_STRING              L"Exported Overlay pixel types"
#define OGL_OVERLAY_SUPPORT_STRING                 L"Enable overlay"
#define OGL_QUALITY_ENHANCEMENTS_STRING            L"High level control of the rendering quality on OpenGL"
#define OGL_SINGLE_BACKDEPTH_BUFFER_STRING         L"Unified back/depth buffer"
#define OGL_THREAD_CONTROL_STRING                  L"Threaded optimization"
#define OGL_TRIPLE_BUFFER_STRING                   L"Triple buffering"
#define OGL_VIDEO_EDITING_MODE_STRING              L"controls video-editing mode for OpenGL"
#define AA_BEHAVIOR_FLAGS_STRING                   L"Antialiasing - Behavior Flags"
#define AA_MODE_ALPHATOCOVERAGE_STRING             L"Antialiasing - Transparency Multisampling"
#define AA_MODE_GAMMACORRECTION_STRING             L"Antialiasing - Gamma correction"
#define AA_MODE_METHOD_STRING                      L"Antialiasing - Setting"
#define AA_MODE_REPLAY_STRING                      L"Antialiasing - Transparency Supersampling"
#define AA_MODE_SELECTOR_STRING                    L"Antialiasing - Mode"
#define AA_MODE_SELECTOR_SLIAA_STRING              L"Antialiasing - SLI AA"
#define ANISO_MODE_LEVEL_STRING                    L"Anisotropic filtering setting"
#define ANISO_MODE_SELECTOR_STRING                 L"Anisotropic filtering mode"
#define APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_STRING L"Application Profile Notification Popup Timeout"
#define APPLICATION_STEAM_ID_STRING                L"This ID is used to identify which applications are installed"
#define CPL_HIDDEN_PROFILE_STRING                  L"Do not display this profile in the Control Panel"
#define CUDA_EXCLUDED_GPUS_STRING                  L"List of Universal GPU ids"
#define D3DOGL_GPU_MAX_POWER_STRING                L"Maximum Allowed GPU Power"
#define EXPORT_PERF_COUNTERS_STRING                L"Export Performance Counters"
#define FXAA_ALLOW_STRING                          L"NVIDIA Predefined FXAA Usage"
#define FXAA_ENABLE_STRING                         L"Toggle FXAA on or off"
#define FXAA_INDICATOR_ENABLE_STRING               L"Toggle FXAA Indicator on or off"
#define MCSFRSHOWSPLIT_STRING                      L"Show the SLI on-screen indicator"
#define OPTIMUS_DEBUG_STRING                       L"Debug bits for optimus"
#define OPTIMUS_MAXAA_STRING                       L"Maximum AA samples allowed for a given application"
#define PHYSXINDICATOR_STRING                      L"Display the PhysX indicator"
#define PREFERRED_PSTATE_STRING                    L"Power management mode"
#define PS_FRAMERATE_LIMITER_STRING                L"Frame Rate Limiter"
#define SHIM_IGPU_TRANSCODING_STRING               L"iGPU transcoding"
#define SHIM_MAXRES_STRING                         L"Maximum resolution allowed for a given application"
#define SHIM_MCCOMPAT_STRING                       L"Optimus flags for enabled applications"
#define SHIM_RENDERING_MODE_STRING                 L"Enable application for Optimus"
#define SHIM_RENDERING_OPTIONS_STRING              L"Shim Rendering Mode Options per application for Optimus"
#define SLI_GPU_COUNT_STRING                       L"Number of GPUs to use on SLI rendering mode"
#define SLI_PREDEFINED_GPU_COUNT_STRING            L"NVIDIA predefined number of GPUs to use on SLI rendering mode"
#define SLI_PREDEFINED_GPU_COUNT_DX10_STRING       L"NVIDIA predefined number of GPUs to use on SLI rendering mode on DirectX 10"
#define SLI_PREDEFINED_MODE_STRING                 L"NVIDIA predefined SLI mode"
#define SLI_PREDEFINED_MODE_DX10_STRING            L"NVIDIA predefined SLI mode on DirectX 10"
#define SLI_RENDERING_MODE_STRING                  L"SLI rendering mode"
#define VSYNCSMOOTHAFR_STRING                      L"Flag to control smooth AFR behavior"
#define VSYNC_BEHAVIOR_FLAGS_STRING                L"Vsync - Behavior Flags"
#define WKS_API_STEREO_EYES_EXCHANGE_STRING        L"Stereo - Swap eyes"
#define WKS_API_STEREO_MODE_STRING                 L"Stereo - Display mode"
#define WKS_FEATURE_SUPPORT_CONTROL_STRING         L""
#define WKS_STEREO_DONGLE_SUPPORT_STRING           L"Stereo - Dongle Support"
#define WKS_STEREO_SUPPORT_STRING                  L"Stereo - Enable"
#define AO_MODE_STRING                             L"Ambient Occlusion"
#define AO_MODE_ACTIVE_STRING                      L"NVIDIA Predefined Ambient Occlusion Usage"
#define AUTO_LODBIASADJUST_STRING                  L"Texture filtering - Driver Controlled LOD Bias"
#define ICAFE_LOGO_CONFIG_STRING                   L"ICafe Settings"
#define LODBIASADJUST_STRING                       L"Texture filtering - LOD Bias"
#define PRERENDERLIMIT_STRING                      L"Maximum pre-rendered frames"
#define PS_DYNAMIC_TILING_STRING                   L"Dynamic tiling"
#define PS_TEXFILTER_ANISO_OPTS2_STRING            L"Texture filtering - Anisotropic sample optimization"
#define PS_TEXFILTER_BILINEAR_IN_ANISO_STRING      L"Texture filtering - Anisotropic filter optimization"
#define PS_TEXFILTER_DISABLE_TRILIN_SLOPE_STRING   L"Texture filtering - Trilinear optimization"
#define PS_TEXFILTER_NO_NEG_LODBIAS_STRING         L"Texture filtering - Negative LOD bias"
#define QUALITY_ENHANCEMENTS_STRING                L"Texture filtering - Quality"
#define REFRESH_RATE_OVERRIDE_STRING               L"Preferred refresh rate"
#define SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_STRING L"PowerThrottle"
#define SET_VAB_DATA_STRING                        L"VAB Default Data"
#define VSYNCMODE_STRING                           L"Vertical Sync"
#define VSYNCTEARCONTROL_STRING                    L"Vertical Sync Tear Control"

enum ESetting {
    OGL_AA_LINE_GAMMA_ID                          = 0x2089BF6C,
    OGL_DEEP_COLOR_SCANOUT_ID                     = 0x2097C2F6,
    OGL_DEFAULT_SWAP_INTERVAL_ID                  = 0x206A6582,
    OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_ID       = 0x206C4581,
    OGL_DEFAULT_SWAP_INTERVAL_SIGN_ID             = 0x20655CFA,
    OGL_EVENT_LOG_SEVERITY_THRESHOLD_ID           = 0x209DF23E,
    OGL_EXTENSION_STRING_VERSION_ID               = 0x20FF7493,
    OGL_FORCE_BLIT_ID                             = 0x201F619F,
    OGL_FORCE_STEREO_ID                           = 0x204D9A0C,
    OGL_IMPLICIT_GPU_AFFINITY_ID                  = 0x20D0F3E6,
    OGL_MAX_FRAMES_ALLOWED_ID                     = 0x208E55E3,
    OGL_MULTIMON_ID                               = 0x200AEBFC,
    OGL_OVERLAY_PIXEL_TYPE_ID                     = 0x209AE66F,
    OGL_OVERLAY_SUPPORT_ID                        = 0x206C28C4,
    OGL_QUALITY_ENHANCEMENTS_ID                   = 0x20797D6C,
    OGL_SINGLE_BACKDEPTH_BUFFER_ID                = 0x20A29055,
    OGL_THREAD_CONTROL_ID                         = 0x20C1221E,
    OGL_TRIPLE_BUFFER_ID                          = 0x20FDD1F9,
    OGL_VIDEO_EDITING_MODE_ID                     = 0x20EE02B4,
    AA_BEHAVIOR_FLAGS_ID                          = 0x10ECDB82,
    AA_MODE_ALPHATOCOVERAGE_ID                    = 0x10FC2D9C,
    AA_MODE_GAMMACORRECTION_ID                    = 0x107D639D,
    AA_MODE_METHOD_ID                             = 0x10D773D2,
    AA_MODE_REPLAY_ID                             = 0x10D48A85,
    AA_MODE_SELECTOR_ID                           = 0x107EFC5B,
    AA_MODE_SELECTOR_SLIAA_ID                     = 0x107AFC5B,
    ANISO_MODE_LEVEL_ID                           = 0x101E61A9,
    ANISO_MODE_SELECTOR_ID                        = 0x10D2BB16,
    APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_ID   = 0x104554B6,
    APPLICATION_STEAM_ID_ID                       = 0x107CDDBC,
    CPL_HIDDEN_PROFILE_ID                         = 0x106D5CFF,
    CUDA_EXCLUDED_GPUS_ID                         = 0x10354FF8,
    D3DOGL_GPU_MAX_POWER_ID                       = 0x10D1EF29,
    EXPORT_PERF_COUNTERS_ID                       = 0x108F0841,
    FXAA_ALLOW_ID                                 = 0x1034CB89,
    FXAA_ENABLE_ID                                = 0x1074C972,
    FXAA_INDICATOR_ENABLE_ID                      = 0x1068FB9C,
    MCSFRSHOWSPLIT_ID                             = 0x10287051,
    OPTIMUS_DEBUG_ID                              = 0x10F9DC03,
    OPTIMUS_MAXAA_ID                              = 0x10F9DC83,
    PHYSXINDICATOR_ID                             = 0x1094F16F,
    PREFERRED_PSTATE_ID                           = 0x1057EB71,
    PS_FRAMERATE_LIMITER_ID                       = 0x10834FEE,
    SHIM_IGPU_TRANSCODING_ID                      = 0x10F9DC85,
    SHIM_MAXRES_ID                                = 0x10F9DC82,
    SHIM_MCCOMPAT_ID                              = 0x10F9DC80,
    SHIM_RENDERING_MODE_ID                        = 0x10F9DC81,
    SHIM_RENDERING_OPTIONS_ID                     = 0x10F9DC84,
    SLI_GPU_COUNT_ID                              = 0x1033DCD1,
    SLI_PREDEFINED_GPU_COUNT_ID                   = 0x1033DCD2,
    SLI_PREDEFINED_GPU_COUNT_DX10_ID              = 0x1033DCD3,
    SLI_PREDEFINED_MODE_ID                        = 0x1033CEC1,
    SLI_PREDEFINED_MODE_DX10_ID                   = 0x1033CEC2,
    SLI_RENDERING_MODE_ID                         = 0x1033CED1,
    VSYNCSMOOTHAFR_ID                             = 0x101AE763,
    VSYNC_BEHAVIOR_FLAGS_ID                       = 0x10FDEC23,
    WKS_API_STEREO_EYES_EXCHANGE_ID               = 0x11AE435C,
    WKS_API_STEREO_MODE_ID                        = 0x11E91A61,
    WKS_FEATURE_SUPPORT_CONTROL_ID                = 0x11D9DC84,
    WKS_STEREO_DONGLE_SUPPORT_ID                  = 0x112493BD,
    WKS_STEREO_SUPPORT_ID                         = 0x11AA9E99,
    AO_MODE_ID                                    = 0x00667329,
    AO_MODE_ACTIVE_ID                             = 0x00664339,
    AUTO_LODBIASADJUST_ID                         = 0x00638E8F,
    ICAFE_LOGO_CONFIG_ID                          = 0x00DB1337,
    LODBIASADJUST_ID                              = 0x00738E8F,
    PRERENDERLIMIT_ID                             = 0x007BA09E,
    PS_DYNAMIC_TILING_ID                          = 0x00E5C6C0,
    PS_TEXFILTER_ANISO_OPTS2_ID                   = 0x00E73211,
    PS_TEXFILTER_BILINEAR_IN_ANISO_ID             = 0x0084CD70,
    PS_TEXFILTER_DISABLE_TRILIN_SLOPE_ID          = 0x002ECAF2,
    PS_TEXFILTER_NO_NEG_LODBIAS_ID                = 0x0019BB68,
    QUALITY_ENHANCEMENTS_ID                       = 0x00CE2691,
    REFRESH_RATE_OVERRIDE_ID                      = 0x0064B541,
    SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_ID     = 0x00AE785C,
    SET_VAB_DATA_ID                               = 0x00AB8687,
    VSYNCMODE_ID                                  = 0x00A879CF,
    VSYNCTEARCONTROL_ID                           = 0x005A375C,
    TOTAL_DWORD_SETTING_NUM = 74,
    TOTAL_WSTRING_SETTING_NUM = 4,
    TOTAL_SETTING_NUM = 78,
    INVALID_SETTING_ID = 0xFFFFFFFF,

    _NvAPI_Initialize=0x150E828,
    _NvAPI_Unload=0x0D22BDD7E,
    _NvAPI_GetErrorMessage=0x6C2D048C,
    _NvAPI_GetInterfaceVersionString=0x1053FA5,
    _NvAPI_GetDisplayDriverVersion=0x0F951A4D1,
    _NvAPI_SYS_GetDriverAndBranchVersion=0x2926AAAD,
    _NvAPI_EnumNvidiaDisplayHandle=0x9ABDD40D,
    _NvAPI_EnumNvidiaUnAttachedDisplayHandle=0x20DE9260,
    _NvAPI_EnumPhysicalGPUs=0x0E5AC921F,
    _NvAPI_EnumLogicalGPUs=0x48B3EA59,
    _NvAPI_GetPhysicalGPUsFromDisplay=0x34EF9506,
    _NvAPI_GetPhysicalGPUFromUnAttachedDisplay=0x5018ED61,
    _NvAPI_CreateDisplayFromUnAttachedDisplay=0x63F9799E,
    _NvAPI_GetLogicalGPUFromDisplay=0x0EE1370CF,
    _NvAPI_GetLogicalGPUFromPhysicalGPU=0x0ADD604D1,
    _NvAPI_GetPhysicalGPUsFromLogicalGPU=0x0AEA3FA32,
    _NvAPI_GetAssociatedNvidiaDisplayHandle=0x35C29134,
    _NvAPI_DISP_GetAssociatedUnAttachedNvidiaDisplayHandle=0x0A70503B2,
    _NvAPI_GetAssociatedNvidiaDisplayName=0x22A78B05,
    _NvAPI_GetUnAttachedAssociatedDisplayName=0x4888D790,
    _NvAPI_EnableHWCursor=0x2863148D,
    _NvAPI_DisableHWCursor=0x0AB163097,
    _NvAPI_GetVBlankCounter=0x67B5DB55,
    _NvAPI_SetRefreshRateOverride=0x3092AC32,
    _NvAPI_GetAssociatedDisplayOutputId=0x0D995937E,
    _NvAPI_GetDisplayPortInfo=0x0C64FF367,
    _NvAPI_SetDisplayPort=0x0FA13E65A,
    _NvAPI_GetHDMISupportInfo=0x6AE16EC3,
    _NvAPI_DISP_EnumHDMIStereoModes=0x0D2CCF5D6,
    _NvAPI_GetInfoFrame=0x9734F1D,
    _NvAPI_SetInfoFrame=0x69C6F365,
    _NvAPI_SetInfoFrameState=0x67EFD887,
    _NvAPI_GetInfoFrameState=0x41511594,
    _NvAPI_Disp_InfoFrameControl=0x6067AF3F,
    _NvAPI_Disp_ColorControl=0x92F9D80D,
    _NvAPI_DISP_GetVirtualModeData=0x3230D69A,
    _NvAPI_DISP_OverrideDisplayModeList=0x291BFF2,
    _NvAPI_GetDisplayDriverMemoryInfo=0x774AA982,
    _NvAPI_GetDriverMemoryInfo=0x2DC95125,
    _NvAPI_GetDVCInfo=0x4085DE45,
    _NvAPI_SetDVCLevel=0x172409B4,
    _NvAPI_GetDVCInfoEx=0x0E45002D,
    _NvAPI_SetDVCLevelEx=0x4A82C2B1,
    _NvAPI_GetHUEInfo=0x95B64341,
    _NvAPI_SetHUEAngle=0x0F5A0F22C,
    _NvAPI_GetImageSharpeningInfo=0x9FB063DF,
    _NvAPI_SetImageSharpeningLevel=0x3FC9A59C,
    _NvAPI_D3D_GetCurrentSLIState=0x4B708B54,
    _NvAPI_D3D9_RegisterResource=0x0A064BDFC,
    _NvAPI_D3D9_UnregisterResource=0x0BB2B17AA,
    _NvAPI_D3D9_AliasSurfaceAsTexture=0x0E5CEAE41,
    _NvAPI_D3D9_StretchRectEx=0x22DE03AA,
    _NvAPI_D3D9_ClearRT=0x332D3942,
    _NvAPI_D3D_CreateQuery=0x5D19BCA4,
    _NvAPI_D3D_DestroyQuery=0x0C8FF7258,
    _NvAPI_D3D_Query_Begin=0x0E5A9AAE0,
    _NvAPI_D3D_Query_End=0x2AC084FA,
    _NvAPI_D3D_Query_GetData=0x0F8B53C69,
    _NvAPI_D3D_Query_GetDataSize=0x0F2A54796,
    _NvAPI_D3D_Query_GetType=0x4ACEEAF7,
    _NvAPI_D3D_RegisterApp=0x0D44D3C4E,
    _NvAPI_D3D9_CreatePathContextNV=0x0A342F682,
    _NvAPI_D3D9_DestroyPathContextNV=0x667C2929,
    _NvAPI_D3D9_CreatePathNV=0x71329DF3,
    _NvAPI_D3D9_DeletePathNV=0x73E0019A,
    _NvAPI_D3D9_PathVerticesNV=0x0C23DF926,
    _NvAPI_D3D9_PathParameterfNV=0x0F7FF00C1,
    _NvAPI_D3D9_PathParameteriNV=0x0FC31236C,
    _NvAPI_D3D9_PathMatrixNV=0x0D2F6C499,
    _NvAPI_D3D9_PathDepthNV=0x0FCB16330,
    _NvAPI_D3D9_PathClearDepthNV=0x157E45C4,
    _NvAPI_D3D9_PathEnableDepthTestNV=0x0E99BA7F3,
    _NvAPI_D3D9_PathEnableColorWriteNV=0x3E2804A2,
    _NvAPI_D3D9_DrawPathNV=0x13199B3D,
    _NvAPI_D3D9_GetSurfaceHandle=0x0F2DD3F2,
    _NvAPI_D3D9_GetOverlaySurfaceHandles=0x6800F5FC,
    _NvAPI_D3D9_GetTextureHandle=0x0C7985ED5,
    _NvAPI_D3D9_GpuSyncGetHandleSize=0x80C9FD3B,
    _NvAPI_D3D9_GpuSyncInit=0x6D6FDAD4,
    _NvAPI_D3D9_GpuSyncEnd=0x754033F0,
    _NvAPI_D3D9_GpuSyncMapTexBuffer=0x0CDE4A28A,
    _NvAPI_D3D9_GpuSyncMapSurfaceBuffer=0x2AB714AB,
    _NvAPI_D3D9_GpuSyncMapVertexBuffer=0x0DBC803EC,
    _NvAPI_D3D9_GpuSyncMapIndexBuffer=0x12EE68F2,
    _NvAPI_D3D9_SetPitchSurfaceCreation=0x18CDF365,
    _NvAPI_D3D9_GpuSyncAcquire=0x0D00B8317,
    _NvAPI_D3D9_GpuSyncRelease=0x3D7A86BB,
    _NvAPI_D3D9_GetCurrentRenderTargetHandle=0x22CAD61,
    _NvAPI_D3D9_GetCurrentZBufferHandle=0x0B380F218,
    _NvAPI_D3D9_GetIndexBufferHandle=0x0FC5A155B,
    _NvAPI_D3D9_GetVertexBufferHandle=0x72B19155,
    _NvAPI_D3D9_CreateTexture=0x0D5E13573,
    _NvAPI_D3D9_AliasPrimaryAsTexture=0x13C7112E,
    _NvAPI_D3D9_PresentSurfaceToDesktop=0x0F7029C5,
    _NvAPI_D3D9_CreateVideoBegin=0x84C9D553,
    _NvAPI_D3D9_CreateVideoEnd=0x0B476BF61,
    _NvAPI_D3D9_CreateVideo=0x89FFD9A3,
    _NvAPI_D3D9_FreeVideo=0x3111BED1,
    _NvAPI_D3D9_PresentVideo=0x5CF7F862,
    _NvAPI_D3D9_VideoSetStereoInfo=0x0B852F4DB,
    _NvAPI_D3D9_SetGamutData=0x2BBDA32E,
    _NvAPI_D3D9_SetSurfaceCreationLayout=0x5609B86A,
    _NvAPI_D3D9_GetVideoCapabilities=0x3D596B93,
    _NvAPI_D3D9_QueryVideoInfo=0x1E6634B3,
    _NvAPI_D3D9_AliasPrimaryFromDevice=0x7C20C5BE,
    _NvAPI_D3D9_SetResourceHint=0x905F5C27,
    _NvAPI_D3D9_Lock=0x6317345C,
    _NvAPI_D3D9_Unlock=0x0C182027E,
    _NvAPI_D3D9_GetVideoState=0x0A4527BF8,
    _NvAPI_D3D9_SetVideoState=0x0BD4BC56F,
    _NvAPI_D3D9_EnumVideoFeatures=0x1DB7C52C,
    _NvAPI_D3D9_GetSLIInfo=0x694BFF4D,
    _NvAPI_D3D9_SetSLIMode=0x0BFDC062C,
    _NvAPI_D3D9_QueryAAOverrideMode=0x0DDF5643C,
    _NvAPI_D3D9_VideoSurfaceEncryptionControl=0x9D2509EF,
    _NvAPI_D3D9_DMA=0x962B8AF6,
    _NvAPI_D3D9_EnableStereo=0x492A6954,
    _NvAPI_D3D9_StretchRect=0x0AEAECD41,
    _NvAPI_D3D9_CreateRenderTarget=0x0B3827C8,
    _NvAPI_D3D9_NVFBC_GetStatus=0x0BD3EB475,
    _NvAPI_D3D9_IFR_SetUpTargetBufferToSys=0x55255D05,
    _NvAPI_D3D9_GPUBasedCPUSleep=0x0D504DDA7,
    _NvAPI_D3D9_IFR_TransferRenderTarget=0x0AB7C2DC,
    _NvAPI_D3D9_IFR_SetUpTargetBufferToNV12BLVideoSurface=0x0CFC92C15,
    _NvAPI_D3D9_IFR_TransferRenderTargetToNV12BLVideoSurface=0x5FE72F64,
    _NvAPI_D3D10_AliasPrimaryAsTexture=0x8AAC133D,
    _NvAPI_D3D10_SetPrimaryFlipChainCallbacks=0x73EB9329,
    _NvAPI_D3D10_ProcessCallbacks=0x0AE9C2019,
    _NvAPI_D3D10_GetRenderedCursorAsBitmap=0x0CAC3CE5D,
    _NvAPI_D3D10_BeginShareResource=0x35233210,
    _NvAPI_D3D10_BeginShareResourceEx=0x0EF303A9D,
    _NvAPI_D3D10_EndShareResource=0x0E9C5853,
    _NvAPI_D3D10_SetDepthBoundsTest=0x4EADF5D2,
    _NvAPI_D3D10_CreateDevice=0x2DE11D61,
    _NvAPI_D3D10_CreateDeviceAndSwapChain=0x5B803DAF,
    _NvAPI_D3D11_CreateDevice=0x6A16D3A0,
    _NvAPI_D3D11_CreateDeviceAndSwapChain=0x0BB939EE5,
    _NvAPI_D3D11_BeginShareResource=0x121BDC6,
    _NvAPI_D3D11_EndShareResource=0x8FFB8E26,
    _NvAPI_D3D11_SetDepthBoundsTest=0x7AAF7A04,
    _NvAPI_GPU_GetShaderPipeCount=0x63E2F56F,
    _NvAPI_GPU_GetShaderSubPipeCount=0x0BE17923,
    _NvAPI_GPU_GetPartitionCount=0x86F05D7A,
    _NvAPI_GPU_GetMemPartitionMask=0x329D77CD,
    _NvAPI_GPU_GetTPCMask=0x4A35DF54,
    _NvAPI_GPU_GetSMMask=0x0EB7AF173,
    _NvAPI_GPU_GetTotalTPCCount=0x4E2F76A8,
    _NvAPI_GPU_GetTotalSMCount=0x0AE5FBCFE,
    _NvAPI_GPU_GetTotalSPCount=0x0B6D62591,
    _NvAPI_GPU_GetGpuCoreCount=0x0C7026A87,
    _NvAPI_GPU_GetAllOutputs=0x7D554F8E,
    _NvAPI_GPU_GetConnectedOutputs=0x1730BFC9,
    _NvAPI_GPU_GetConnectedSLIOutputs=0x680DE09,
    _NvAPI_GPU_GetConnectedDisplayIds=0x78DBA2,
    _NvAPI_GPU_GetAllDisplayIds=0x785210A2,
    _NvAPI_GPU_GetConnectedOutputsWithLidState=0x0CF8CAF39,
    _NvAPI_GPU_GetConnectedSLIOutputsWithLidState=0x96043CC7,
    _NvAPI_GPU_GetSystemType=0x0BAAABFCC,
    _NvAPI_GPU_GetActiveOutputs=0x0E3E89B6F,
    _NvAPI_GPU_GetEDID=0x37D32E69,
    _NvAPI_GPU_SetEDID=0x0E83D6456,
    _NvAPI_GPU_GetOutputType=0x40A505E4,
    _NvAPI_GPU_GetDeviceDisplayMode=0x0D2277E3A,
    _NvAPI_GPU_GetFlatPanelInfo=0x36CFF969,
    _NvAPI_GPU_ValidateOutputCombination=0x34C9C2D4,
    _NvAPI_GPU_GetConnectorInfo=0x4ECA2C10,
    _NvAPI_GPU_GetFullName=0x0CEEE8E9F,
    _NvAPI_GPU_GetPCIIdentifiers=0x2DDFB66E,
    _NvAPI_GPU_GetGPUType=0x0C33BAEB1,
    _NvAPI_GPU_GetBusType=0x1BB18724,
    _NvAPI_GPU_GetBusId=0x1BE0B8E5,
    _NvAPI_GPU_GetBusSlotId=0x2A0A350F,
    _NvAPI_GPU_GetIRQ=0x0E4715417,
    _NvAPI_GPU_GetVbiosRevision=0x0ACC3DA0A,
    _NvAPI_GPU_GetVbiosOEMRevision=0x2D43FB31,
    _NvAPI_GPU_GetVbiosVersionString=0x0A561FD7D,
    _NvAPI_GPU_GetAGPAperture=0x6E042794,
    _NvAPI_GPU_GetCurrentAGPRate=0x0C74925A0,
    _NvAPI_GPU_GetCurrentPCIEDownstreamWidth=0x0D048C3B1,
    _NvAPI_GPU_GetPhysicalFrameBufferSize=0x46FBEB03,
    _NvAPI_GPU_GetVirtualFrameBufferSize=0x5A04B644,
    _NvAPI_GPU_GetQuadroStatus=0x0E332FA47,
    _NvAPI_GPU_GetBoardInfo=0x22D54523,
    _NvAPI_GPU_GetRamType=0x57F7CAAC,
    _NvAPI_GPU_GetFBWidthAndLocation=0x11104158,
    _NvAPI_GPU_GetAllClockFrequencies=0x0DCB616C3,
    _NvAPI_GPU_GetPerfClocks=0x1EA54A3B,
    _NvAPI_GPU_SetPerfClocks=0x7BCF4AC,
    _NvAPI_GPU_GetCoolerSettings=0x0DA141340,
    _NvAPI_GPU_SetCoolerLevels=0x891FA0AE,
    _NvAPI_GPU_RestoreCoolerSettings=0x8F6ED0FB,
    _NvAPI_GPU_GetCoolerPolicyTable=0x518A32C,
    _NvAPI_GPU_SetCoolerPolicyTable=0x987947CD,
    _NvAPI_GPU_RestoreCoolerPolicyTable=0x0D8C4FE63,
    _NvAPI_GPU_GetPstatesInfo=0x0BA94C56E,
    _NvAPI_GPU_GetPstatesInfoEx=0x843C0256,
    _NvAPI_GPU_SetPstatesInfo=0x0CDF27911,
    _NvAPI_GPU_GetPstates20=0x6FF81213,
    _NvAPI_GPU_SetPstates20=0x0F4DAE6B,
    _NvAPI_GPU_GetCurrentPstate=0x927DA4F6,
    _NvAPI_GPU_GetPstateClientLimits=0x88C82104,
    _NvAPI_GPU_SetPstateClientLimits=0x0FDFC7D49,
    _NvAPI_GPU_EnableOverclockedPstates=0x0B23B70EE,
    _NvAPI_GPU_EnableDynamicPstates=0x0FA579A0F,
    _NvAPI_GPU_GetDynamicPstatesInfoEx=0x60DED2ED,
    _NvAPI_GPU_GetVoltages=0x7D656244,
    _NvAPI_GPU_GetThermalSettings=0x0E3640A56,
    _NvAPI_GPU_SetDitherControl=0x0DF0DFCDD,
    _NvAPI_GPU_GetDitherControl=0x932AC8FB,
    _NvAPI_GPU_GetColorSpaceConversion=0x8159E87A,
    _NvAPI_GPU_SetColorSpaceConversion=0x0FCABD23A,
    _NvAPI_GetTVOutputInfo=0x30C805D5,
    _NvAPI_GetTVEncoderControls=0x5757474A,
    _NvAPI_SetTVEncoderControls=0x0CA36A3AB,
    _NvAPI_GetTVOutputBorderColor=0x6DFD1C8C,
    _NvAPI_SetTVOutputBorderColor=0x0AED02700,
    _NvAPI_GetDisplayPosition=0x6BB1EE5D,
    _NvAPI_SetDisplayPosition=0x57D9060F,
    _NvAPI_GetValidGpuTopologies=0x5DFAB48A,
    _NvAPI_GetInvalidGpuTopologies=0x15658BE6,
    _NvAPI_SetGpuTopologies=0x25201F3D,
    _NvAPI_GPU_GetPerGpuTopologyStatus=0x0A81F8992,
    _NvAPI_SYS_GetChipSetTopologyStatus=0x8A50F126,
    _NvAPI_GPU_Get_DisplayPort_DongleInfo=0x76A70E8D,
    _NvAPI_I2CRead=0x2FDE12C5,
    _NvAPI_I2CWrite=0x0E812EB07,
    _NvAPI_I2CWriteEx=0x283AC65A,
    _NvAPI_I2CReadEx=0x4D7B0709,
    _NvAPI_GPU_GetPowerMizerInfo=0x76BFA16B,
    _NvAPI_GPU_SetPowerMizerInfo=0x50016C78,
    _NvAPI_GPU_GetVoltageDomainsStatus=0x0C16C7E2C,
    _NvAPI_GPU_ClientPowerTopologyGetInfo=0x0A4DFD3F2,
    _NvAPI_GPU_ClientPowerTopologyGetStatus=0x0EDCF624E,
    _NvAPI_GPU_ClientPowerPoliciesGetInfo=0x34206D86,
    _NvAPI_GPU_ClientPowerPoliciesGetStatus=0x70916171,
    _NvAPI_GPU_ClientPowerPoliciesSetStatus=0x0AD95F5ED,
    _NvAPI_GPU_WorkstationFeatureSetup=0x6C1F3FE4,
    _NvAPI_SYS_GetChipSetInfo=0x53DABBCA,
    _NvAPI_SYS_GetLidAndDockInfo=0x0CDA14D8A,
    _NvAPI_OGL_ExpertModeSet=0x3805EF7A,
    _NvAPI_OGL_ExpertModeGet=0x22ED9516,
    _NvAPI_OGL_ExpertModeDefaultsSet=0x0B47A657E,
    _NvAPI_OGL_ExpertModeDefaultsGet=0x0AE921F12,
    _NvAPI_SetDisplaySettings=0x0E04F3D86,
    _NvAPI_GetDisplaySettings=0x0DC27D5D4,
    _NvAPI_GetTiming=0x0AFC4833E,
    _NvAPI_DISP_GetMonitorCapabilities=0x3B05C7E1,
    _NvAPI_EnumCustomDisplay=0x42892957,
    _NvAPI_TryCustomDisplay=0x0BF6C1762,
    _NvAPI_RevertCustomDisplayTrial=0x854BA405,
    _NvAPI_DeleteCustomDisplay=0x0E7CB998D,
    _NvAPI_SaveCustomDisplay=0x0A9062C78,
    _NvAPI_QueryUnderscanCap=0x61D7B624,
    _NvAPI_EnumUnderscanConfig=0x4144111A,
    _NvAPI_DeleteUnderscanConfig=0x0F98854C8,
    _NvAPI_SetUnderscanConfig=0x3EFADA1D,
    _NvAPI_GetDisplayFeatureConfig=0x8E985CCD,
    _NvAPI_SetDisplayFeatureConfig=0x0F36A668D,
    _NvAPI_GetDisplayFeatureConfigDefaults=0x0F5F4D01,
    _NvAPI_SetView=0x957D7B6,
    _NvAPI_GetView=0x0D6B99D89,
    _NvAPI_SetViewEx=0x6B89E68,
    _NvAPI_GetViewEx=0x0DBBC0AF4,
    _NvAPI_GetSupportedViews=0x66FB7FC0,
    _NvAPI_GetHDCPLinkParameters=0x0B3BB0772,
    _NvAPI_Disp_DpAuxChannelControl=0x8EB56969,
    _NvAPI_SetHybridMode=0x0FB22D656,
    _NvAPI_GetHybridMode=0x0E23B68C1,
    _NvAPI_Coproc_GetCoprocStatus=0x1EFC3957,
    _NvAPI_Coproc_SetCoprocInfoFlagsEx=0x0F4C863AC,
    _NvAPI_Coproc_GetCoprocInfoFlagsEx=0x69A9874D,
    _NvAPI_Coproc_NotifyCoprocPowerState=0x0CADCB956,
    _NvAPI_Coproc_GetApplicationCoprocInfo=0x79232685,
    _NvAPI_GetVideoState=0x1C5659CD,
    _NvAPI_SetVideoState=0x54FE75A,
    _NvAPI_SetFrameRateNotify=0x18919887,
    _NvAPI_SetPVExtName=0x4FEEB498,
    _NvAPI_GetPVExtName=0x2F5B08E0,
    _NvAPI_SetPVExtProfile=0x8354A8F4,
    _NvAPI_GetPVExtProfile=0x1B1B9A16,
    _NvAPI_VideoSetStereoInfo=0x97063269,
    _NvAPI_VideoGetStereoInfo=0x8E1F8CFE,
    _NvAPI_Mosaic_GetSupportedTopoInfo=0x0FDB63C81,
    _NvAPI_Mosaic_GetTopoGroup=0x0CB89381D,
    _NvAPI_Mosaic_GetOverlapLimits=0x989685F0,
    _NvAPI_Mosaic_SetCurrentTopo=0x9B542831,
    _NvAPI_Mosaic_GetCurrentTopo=0x0EC32944E,
    _NvAPI_Mosaic_EnableCurrentTopo=0x5F1AA66C,
    _NvAPI_Mosaic_SetGridTopology=0x3F113C77,
    _NvAPI_Mosaic_GetMosaicCapabilities=0x0DA97071E,
    _NvAPI_Mosaic_GetDisplayCapabilities=0x0D58026B9,
    _NvAPI_Mosaic_EnumGridTopologies=0x0A3C55220,
    _NvAPI_Mosaic_GetDisplayViewportsByResolution=0x0DC6DC8D3,
    _NvAPI_Mosaic_GetMosaicViewports=0x7EBA036,
    _NvAPI_Mosaic_SetDisplayGrids=0x4D959A89,
    _NvAPI_Mosaic_ValidateDisplayGridsWithSLI=0x1ECFD263,
    _NvAPI_Mosaic_ValidateDisplayGrids=0x0CF43903D,
    _NvAPI_Mosaic_EnumDisplayModes=0x78DB97D7,
    _NvAPI_Mosaic_ChooseGpuTopologies=0x0B033B140,
    _NvAPI_Mosaic_EnumDisplayGrids=0x0DF2887AF,
    _NvAPI_GetSupportedMosaicTopologies=0x410B5C25,
    _NvAPI_GetCurrentMosaicTopology=0x0F60852BD,
    _NvAPI_SetCurrentMosaicTopology=0x0D54B8989,
    _NvAPI_EnableCurrentMosaicTopology=0x74073CC9,
    _NvAPI_QueryNonMigratableApps=0x0BB9EF1C3,
    _NvAPI_GPU_QueryActiveApps=0x65B1C5F5,
    _NvAPI_Hybrid_QueryUnblockedNonMigratableApps=0x5F35BCB5,
    _NvAPI_Hybrid_QueryBlockedMigratableApps=0x0F4C2F8CC,
    _NvAPI_Hybrid_SetAppMigrationState=0x0FA0B9A59,
    _NvAPI_Hybrid_IsAppMigrationStateChangeable=0x584CB0B6,
    _NvAPI_GPU_GPIOQueryLegalPins=0x0FAB69565,
    _NvAPI_GPU_GPIOReadFromPin=0x0F5E10439,
    _NvAPI_GPU_GPIOWriteToPin=0x0F3B11E68,
    _NvAPI_GPU_GetHDCPSupportStatus=0x0F089EEF5,
    _NvAPI_SetTopologyFocusDisplayAndView=0x0A8064F9,
    _NvAPI_Stereo_CreateConfigurationProfileRegistryKey=0x0BE7692EC,
    _NvAPI_Stereo_DeleteConfigurationProfileRegistryKey=0x0F117B834,
    _NvAPI_Stereo_SetConfigurationProfileValue=0x24409F48,
    _NvAPI_Stereo_DeleteConfigurationProfileValue=0x49BCEECF,
    _NvAPI_Stereo_Enable=0x239C4545,
    _NvAPI_Stereo_Disable=0x2EC50C2B,
    _NvAPI_Stereo_IsEnabled=0x348FF8E1,
    _NvAPI_Stereo_GetStereoCaps=0x0DFC063B7,
    _NvAPI_Stereo_GetStereoSupport=0x296C434D,
    _NvAPI_Stereo_CreateHandleFromIUnknown=0x0AC7E37F4,
    _NvAPI_Stereo_DestroyHandle=0x3A153134,
    _NvAPI_Stereo_Activate=0x0F6A1AD68,
    _NvAPI_Stereo_Deactivate=0x2D68DE96,
    _NvAPI_Stereo_IsActivated=0x1FB0BC30,
    _NvAPI_Stereo_GetSeparation=0x451F2134,
    _NvAPI_Stereo_SetSeparation=0x5C069FA3,
    _NvAPI_Stereo_DecreaseSeparation=0x0DA044458,
    _NvAPI_Stereo_IncreaseSeparation=0x0C9A8ECEC,
    _NvAPI_Stereo_GetConvergence=0x4AB00934,
    _NvAPI_Stereo_SetConvergence=0x3DD6B54B,
    _NvAPI_Stereo_DecreaseConvergence=0x4C87E317,
    _NvAPI_Stereo_IncreaseConvergence=0x0A17DAABE,
    _NvAPI_Stereo_GetFrustumAdjustMode=0x0E6839B43,
    _NvAPI_Stereo_SetFrustumAdjustMode=0x7BE27FA2,
    _NvAPI_Stereo_CaptureJpegImage=0x932CB140,
    _NvAPI_Stereo_CapturePngImage=0x8B7E99B5,
    _NvAPI_Stereo_ReverseStereoBlitControl=0x3CD58F89,
    _NvAPI_Stereo_SetNotificationMessage=0x6B9B409E,
    _NvAPI_Stereo_SetActiveEye=0x96EEA9F8,
    _NvAPI_Stereo_SetDriverMode=0x5E8F0BEC,
    _NvAPI_Stereo_GetEyeSeparation=0x0CE653127,
    _NvAPI_Stereo_IsWindowedModeSupported=0x40C8ED5E,
    _NvAPI_Stereo_AppHandShake=0x8C610BDA,
    _NvAPI_Stereo_HandShake_Trigger_Activation=0x0B30CD1A7,
    _NvAPI_Stereo_HandShake_Message_Control=0x315E0EF0,
    _NvAPI_Stereo_SetSurfaceCreationMode=0x0F5DCFCBA,
    _NvAPI_Stereo_GetSurfaceCreationMode=0x36F1C736,
    _NvAPI_Stereo_Debug_WasLastDrawStereoized=0x0ED4416C5,
    _NvAPI_Stereo_ForceToScreenDepth=0x2D495758,
    _NvAPI_Stereo_SetVertexShaderConstantF=0x416C07B3,
    _NvAPI_Stereo_SetVertexShaderConstantB=0x5268716F,
    _NvAPI_Stereo_SetVertexShaderConstantI=0x7923BA0E,
    _NvAPI_Stereo_GetVertexShaderConstantF=0x622FDC87,
    _NvAPI_Stereo_GetVertexShaderConstantB=0x712BAA5B,
    _NvAPI_Stereo_GetVertexShaderConstantI=0x5A60613A,
    _NvAPI_Stereo_SetPixelShaderConstantF=0x0A9657F32,
    _NvAPI_Stereo_SetPixelShaderConstantB=0x0BA6109EE,
    _NvAPI_Stereo_SetPixelShaderConstantI=0x912AC28F,
    _NvAPI_Stereo_GetPixelShaderConstantF=0x0D4974572,
    _NvAPI_Stereo_GetPixelShaderConstantB=0x0C79333AE,
    _NvAPI_Stereo_GetPixelShaderConstantI=0x0ECD8F8CF,
    _NvAPI_Stereo_SetDefaultProfile=0x44F0ECD1,
    _NvAPI_Stereo_GetDefaultProfile=0x624E21C2,
    _NvAPI_Stereo_Is3DCursorSupported=0x0D7C9EC09,
    _NvAPI_Stereo_GetCursorSeparation=0x72162B35,
    _NvAPI_Stereo_SetCursorSeparation=0x0FBC08FC1,
    _NvAPI_VIO_GetCapabilities=0x1DC91303,
    _NvAPI_VIO_Open=0x44EE4841,
    _NvAPI_VIO_Close=0x0D01BD237,
    _NvAPI_VIO_Status=0x0E6CE4F1,
    _NvAPI_VIO_SyncFormatDetect=0x118D48A3,
    _NvAPI_VIO_GetConfig=0x0D34A789B,
    _NvAPI_VIO_SetConfig=0x0E4EEC07,
    _NvAPI_VIO_SetCSC=0x0A1EC8D74,
    _NvAPI_VIO_GetCSC=0x7B0D72A3,
    _NvAPI_VIO_SetGamma=0x964BF452,
    _NvAPI_VIO_GetGamma=0x51D53D06,
    _NvAPI_VIO_SetSyncDelay=0x2697A8D1,
    _NvAPI_VIO_GetSyncDelay=0x462214A9,
    _NvAPI_VIO_GetPCIInfo=0x0B981D935,
    _NvAPI_VIO_IsRunning=0x96BD040E,
    _NvAPI_VIO_Start=0x0CDE8E1A3,
    _NvAPI_VIO_Stop=0x6BA2A5D6,
    _NvAPI_VIO_IsFrameLockModeCompatible=0x7BF0A94D,
    _NvAPI_VIO_EnumDevices=0x0FD7C5557,
    _NvAPI_VIO_QueryTopology=0x869534E2,
    _NvAPI_VIO_EnumSignalFormats=0x0EAD72FE4,
    _NvAPI_VIO_EnumDataFormats=0x221FA8E8,
    _NvAPI_GPU_GetTachReading=0x5F608315,
    _NvAPI_3D_GetProperty=0x8061A4B1,
    _NvAPI_3D_SetProperty=0x0C9175E8D,
    _NvAPI_3D_GetPropertyRange=0x0B85DE27C,
    _NvAPI_GPS_GetPowerSteeringStatus=0x540EE82E,
    _NvAPI_GPS_SetPowerSteeringStatus=0x9723D3A2,
    _NvAPI_GPS_SetVPStateCap=0x68888EB4,
    _NvAPI_GPS_GetVPStateCap=0x71913023,
    _NvAPI_GPS_GetThermalLimit=0x583113ED,
    _NvAPI_GPS_SetThermalLimit=0x0C07E210F,
    _NvAPI_GPS_GetPerfSensors=0x271C1109,
    _NvAPI_SYS_GetDisplayIdFromGpuAndOutputId=0x8F2BAB4,
    _NvAPI_SYS_GetGpuAndOutputIdFromDisplayId=0x112BA1A5,
    _NvAPI_DISP_GetDisplayIdByDisplayName=0x0AE457190,
    _NvAPI_DISP_GetGDIPrimaryDisplayId=0x1E9D8A31,
    _NvAPI_DISP_GetDisplayConfig=0x11ABCCF8,
    _NvAPI_DISP_SetDisplayConfig=0x5D8CF8DE,
    _NvAPI_GPU_GetPixelClockRange=0x66AF10B7,
    _NvAPI_GPU_SetPixelClockRange=0x5AC7F8E5,
    _NvAPI_GPU_GetECCStatusInfo=0x0CA1DDAF3,
    _NvAPI_GPU_GetECCErrorInfo=0x0C71F85A6,
    _NvAPI_GPU_ResetECCErrorInfo=0x0C02EEC20,
    _NvAPI_GPU_GetECCConfigurationInfo=0x77A796F3,
    _NvAPI_GPU_SetECCConfiguration=0x1CF639D9,
    _NvAPI_D3D1x_CreateSwapChain=0x1BC21B66,
    _NvAPI_D3D9_CreateSwapChain=0x1A131E09,
    _NvAPI_D3D_SetFPSIndicatorState=0x0A776E8DB,
    _NvAPI_D3D9_Present=0x5650BEB,
    _NvAPI_D3D9_QueryFrameCount=0x9083E53A,
    _NvAPI_D3D9_ResetFrameCount=0x0FA6A0675,
    _NvAPI_D3D9_QueryMaxSwapGroup=0x5995410D,
    _NvAPI_D3D9_QuerySwapGroup=0x0EBA4D232,
    _NvAPI_D3D9_JoinSwapGroup=0x7D44BB54,
    _NvAPI_D3D9_BindSwapBarrier=0x9C39C246,
    _NvAPI_D3D1x_Present=0x3B845A1,
    _NvAPI_D3D1x_QueryFrameCount=0x9152E055,
    _NvAPI_D3D1x_ResetFrameCount=0x0FBBB031A,
    _NvAPI_D3D1x_QueryMaxSwapGroup=0x9BB9D68F,
    _NvAPI_D3D1x_QuerySwapGroup=0x407F67AA,
    _NvAPI_D3D1x_JoinSwapGroup=0x14610CD7,
    _NvAPI_D3D1x_BindSwapBarrier=0x9DE8C729,
    _NvAPI_SYS_VenturaGetState=0x0CB7C208D,
    _NvAPI_SYS_VenturaSetState=0x0CE2E9D9,
    _NvAPI_SYS_VenturaGetCoolingBudget=0x0C9D86E33,
    _NvAPI_SYS_VenturaSetCoolingBudget=0x85FF5A15,
    _NvAPI_SYS_VenturaGetPowerReading=0x63685979,
    _NvAPI_DISP_GetDisplayBlankingState=0x63E5D8DB,
    _NvAPI_DISP_SetDisplayBlankingState=0x1E17E29B,
    _NvAPI_DRS_CreateSession=0x694D52E,
    _NvAPI_DRS_DestroySession=0x0DAD9CFF8,
    _NvAPI_DRS_LoadSettings=0x375DBD6B,
    _NvAPI_DRS_SaveSettings=0x0FCBC7E14,
    _NvAPI_DRS_LoadSettingsFromFile=0x0D3EDE889,
    _NvAPI_DRS_SaveSettingsToFile=0x2BE25DF8,
    _NvAPI_DRS_CreateProfile=0x0CC176068,
    _NvAPI_DRS_DeleteProfile=0x17093206,
    _NvAPI_DRS_SetCurrentGlobalProfile=0x1C89C5DF,
    _NvAPI_DRS_GetCurrentGlobalProfile=0x617BFF9F,
    _NvAPI_DRS_GetProfileInfo=0x61CD6FD6,
    _NvAPI_DRS_SetProfileInfo=0x16ABD3A9,
    _NvAPI_DRS_FindProfileByName=0x7E4A9A0B,
    _NvAPI_DRS_EnumProfiles=0x0BC371EE0,
    _NvAPI_DRS_GetNumProfiles=0x1DAE4FBC,
    _NvAPI_DRS_CreateApplication=0x4347A9DE,
    _NvAPI_DRS_DeleteApplicationEx=0x0C5EA85A1,
    _NvAPI_DRS_DeleteApplication=0x2C694BC6,
    _NvAPI_DRS_GetApplicationInfo=0x0ED1F8C69,
    _NvAPI_DRS_EnumApplications=0x7FA2173A,
    _NvAPI_DRS_FindApplicationByName=0x0EEE566B2,
    _NvAPI_DRS_SetSetting=0x577DD202,
    _NvAPI_DRS_GetSetting=0x73BF8338,
    _NvAPI_DRS_EnumSettings=0x0AE3039DA,
    _NvAPI_DRS_EnumAvailableSettingIds=0x0F020614A,
    _NvAPI_DRS_EnumAvailableSettingValues=0x2EC39F90,
    _NvAPI_DRS_GetSettingIdFromName=0x0CB7309CD,
    _NvAPI_DRS_GetSettingNameFromId=0x0D61CBE6E,
    _NvAPI_DRS_DeleteProfileSetting=0x0E4A26362,
    _NvAPI_DRS_RestoreAllDefaults=0x5927B094,
    _NvAPI_DRS_RestoreProfileDefault=0x0FA5F6134,
    _NvAPI_DRS_RestoreProfileDefaultSetting=0x53F0381E,
    _NvAPI_DRS_GetBaseProfile=0x0DA8466A0,
    _NvAPI_Event_RegisterCallback=0x0E6DBEA69,
    _NvAPI_Event_UnregisterCallback=0x0DE1F9B45,
    _NvAPI_GPU_GetCurrentThermalLevel=0x0D2488B79,
    _NvAPI_GPU_GetCurrentFanSpeedLevel=0x0BD71F0C9,
    _NvAPI_GPU_SetScanoutIntensity=0x0A57457A4,
    _NvAPI_GPU_SetScanoutWarping=0x0B34BAB4F,
    _NvAPI_GPU_GetScanoutConfiguration=0x6A9F5B63,
    _NvAPI_DISP_SetHCloneTopology=0x61041C24,
    _NvAPI_DISP_GetHCloneTopology=0x47BAD137,
    _NvAPI_DISP_ValidateHCloneTopology=0x5F4C2664,
    _NvAPI_GPU_GetPerfDecreaseInfo=0x7F7F4600,
    _NvAPI_GPU_QueryIlluminationSupport=0x0A629DA31,
    _NvAPI_GPU_GetIllumination=0x9A1B9365,
    _NvAPI_GPU_SetIllumination=0x254A187,
    _NvAPI_D3D1x_IFR_SetUpTargetBufferToSys=0x473F7828,
    _NvAPI_D3D1x_IFR_TransferRenderTarget=0x9FBAE4EB,
};                                                                               
                                                                                 
enum EValues_OGL_AA_LINE_GAMMA {                                                 
    OGL_AA_LINE_GAMMA_DISABLED                           = 0x10,                 
    OGL_AA_LINE_GAMMA_ENABLED                            = 0x23,                 
    OGL_AA_LINE_GAMMA_MIN                                = 1,                    
    OGL_AA_LINE_GAMMA_MAX                                = 100,
    OGL_AA_LINE_GAMMA_NUM_VALUES = 4,
    OGL_AA_LINE_GAMMA_DEFAULT = OGL_AA_LINE_GAMMA_DISABLED
};

enum EValues_OGL_DEEP_COLOR_SCANOUT {
    OGL_DEEP_COLOR_SCANOUT_DISABLE                       = 0,
    OGL_DEEP_COLOR_SCANOUT_ENABLE                        = 1,
    OGL_DEEP_COLOR_SCANOUT_NUM_VALUES = 2,
    OGL_DEEP_COLOR_SCANOUT_DEFAULT = OGL_DEEP_COLOR_SCANOUT_ENABLE
};

enum EValues_OGL_DEFAULT_SWAP_INTERVAL {
    OGL_DEFAULT_SWAP_INTERVAL_TEAR                       = 0,
    OGL_DEFAULT_SWAP_INTERVAL_VSYNC_ONE                  = 1,
    OGL_DEFAULT_SWAP_INTERVAL_VSYNC                      = 1,
    OGL_DEFAULT_SWAP_INTERVAL_VALUE_MASK                 = 0x0000FFFF,
    OGL_DEFAULT_SWAP_INTERVAL_FORCE_MASK                 = 0xF0000000,
    OGL_DEFAULT_SWAP_INTERVAL_FORCE_OFF                  = 0xF0000000,
    OGL_DEFAULT_SWAP_INTERVAL_FORCE_ON                   = 0x10000000,
    OGL_DEFAULT_SWAP_INTERVAL_APP_CONTROLLED             = 0x00000000,
    OGL_DEFAULT_SWAP_INTERVAL_DISABLE                    = 0xffffffff,
    OGL_DEFAULT_SWAP_INTERVAL_NUM_VALUES = 9,
    OGL_DEFAULT_SWAP_INTERVAL_DEFAULT = OGL_DEFAULT_SWAP_INTERVAL_VSYNC_ONE
};

enum EValues_OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL {
    OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_ZERO_SCANLINES  = 0,
    OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_ONE_FULL_FRAME_OF_SCANLINES = 100,
    OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_NUM_VALUES = 2,
    OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_DEFAULT = 0
};

enum EValues_OGL_DEFAULT_SWAP_INTERVAL_SIGN {
    OGL_DEFAULT_SWAP_INTERVAL_SIGN_POSITIVE              = 0,
    OGL_DEFAULT_SWAP_INTERVAL_SIGN_NEGATIVE              = 1,
    OGL_DEFAULT_SWAP_INTERVAL_SIGN_NUM_VALUES = 2,
    OGL_DEFAULT_SWAP_INTERVAL_SIGN_DEFAULT = OGL_DEFAULT_SWAP_INTERVAL_SIGN_POSITIVE
};

enum EValues_OGL_EVENT_LOG_SEVERITY_THRESHOLD {
    OGL_EVENT_LOG_SEVERITY_THRESHOLD_DISABLE             = 0,
    OGL_EVENT_LOG_SEVERITY_THRESHOLD_CRITICAL            = 1,
    OGL_EVENT_LOG_SEVERITY_THRESHOLD_WARNING             = 2,
    OGL_EVENT_LOG_SEVERITY_THRESHOLD_INFORMATION         = 3,
    OGL_EVENT_LOG_SEVERITY_THRESHOLD_ALL                 = 4,
    OGL_EVENT_LOG_SEVERITY_THRESHOLD_NUM_VALUES = 5,
    OGL_EVENT_LOG_SEVERITY_THRESHOLD_DEFAULT = OGL_EVENT_LOG_SEVERITY_THRESHOLD_CRITICAL
};

enum EValues_OGL_FORCE_BLIT {
    OGL_FORCE_BLIT_ON                                    = 1,
    OGL_FORCE_BLIT_OFF                                   = 0,
    OGL_FORCE_BLIT_NUM_VALUES = 2,
    OGL_FORCE_BLIT_DEFAULT = OGL_FORCE_BLIT_OFF
};

enum EValues_OGL_FORCE_STEREO {
    OGL_FORCE_STEREO_OFF                                 = 0,
    OGL_FORCE_STEREO_ON                                  = 1,
    OGL_FORCE_STEREO_NUM_VALUES = 2,
    OGL_FORCE_STEREO_DEFAULT = OGL_FORCE_STEREO_OFF
};

#define    OGL_IMPLICIT_GPU_AFFINITY_ENV_VAR                    L"OGL_DEFAULT_RENDERING_GPU"
#define    OGL_IMPLICIT_GPU_AFFINITY_AUTOSELECT                 L"autoselect"
#define    OGL_IMPLICIT_GPU_AFFINITY_NUM_VALUES 1
#define    OGL_IMPLICIT_GPU_AFFINITY_DEFAULT OGL_IMPLICIT_GPU_AFFINITY_AUTOSELECT

enum EValues_OGL_MULTIMON {
    OGL_MULTIMON_SINGLE_MONITOR                          = 0,
    OGL_MULTIMON_COMPATIBILITY_LCD                       = 1,
    OGL_MULTIMON_COMPATIBILITY_GCD                       = 2,
    OGL_MULTIMON_PERFORMANCE_LCD                         = 3,
    OGL_MULTIMON_PERFORMANCE_GCD                         = 4,
    OGL_MULTIMON_EXTENDED_SINGLE_MONITOR                 = 5,
    OGL_MULTIMON_PERFORMANCE_QUADRO                      = 6,
    OGL_MULTIMON_MULTIMON_BUFFER                         = 7,
    OGL_MULTIMON_NUM_VALUES = 8,
    OGL_MULTIMON_DEFAULT = OGL_MULTIMON_PERFORMANCE_LCD
};

enum EValues_OGL_OVERLAY_PIXEL_TYPE {
    OGL_OVERLAY_PIXEL_TYPE_NONE                          = 0x0,
    OGL_OVERLAY_PIXEL_TYPE_CI                            = 0x1,
    OGL_OVERLAY_PIXEL_TYPE_RGBA                          = 0x2,
    OGL_OVERLAY_PIXEL_TYPE_CI_AND_RGBA                   = 0x3,
    OGL_OVERLAY_PIXEL_TYPE_NUM_VALUES = 4,
    OGL_OVERLAY_PIXEL_TYPE_DEFAULT = OGL_OVERLAY_PIXEL_TYPE_CI
};

enum EValues_OGL_OVERLAY_SUPPORT {
    OGL_OVERLAY_SUPPORT_OFF                              = 0,
    OGL_OVERLAY_SUPPORT_ON                               = 1,
    OGL_OVERLAY_SUPPORT_FORCE_SW                         = 2,
    OGL_OVERLAY_SUPPORT_NUM_VALUES = 3,
    OGL_OVERLAY_SUPPORT_DEFAULT = OGL_OVERLAY_SUPPORT_OFF
};

enum EValues_OGL_QUALITY_ENHANCEMENTS {
    OGL_QUALITY_ENHANCEMENTS_HQUAL                       = -10,
    OGL_QUALITY_ENHANCEMENTS_QUAL                        = 0,
    OGL_QUALITY_ENHANCEMENTS_PERF                        = 10,
    OGL_QUALITY_ENHANCEMENTS_HPERF                       = 20,
    OGL_QUALITY_ENHANCEMENTS_NUM_VALUES = 4,
    OGL_QUALITY_ENHANCEMENTS_DEFAULT = OGL_QUALITY_ENHANCEMENTS_QUAL
};

enum EValues_OGL_SINGLE_BACKDEPTH_BUFFER {
    OGL_SINGLE_BACKDEPTH_BUFFER_DISABLE                  = 0x0,
    OGL_SINGLE_BACKDEPTH_BUFFER_ENABLE                   = 0x1,
    OGL_SINGLE_BACKDEPTH_BUFFER_USE_HW_DEFAULT           = 0xffffffff,
    OGL_SINGLE_BACKDEPTH_BUFFER_NUM_VALUES = 3,
    OGL_SINGLE_BACKDEPTH_BUFFER_DEFAULT = OGL_SINGLE_BACKDEPTH_BUFFER_DISABLE
};

enum EValues_OGL_THREAD_CONTROL {
    OGL_THREAD_CONTROL_ENABLE                            = 0x00000001,
    OGL_THREAD_CONTROL_DISABLE                           = 0x00000002,
    OGL_THREAD_CONTROL_DUMP_STATS                        = 0x00000004,
    OGL_THREAD_CONTROL_IGNORE_GET_ERROR                  = 0x00000008,
    OGL_THREAD_CONTROL_NUM_VALUES = 4,
    OGL_THREAD_CONTROL_DEFAULT = 0
};

enum EValues_OGL_TRIPLE_BUFFER {
    OGL_TRIPLE_BUFFER_DISABLED                           = 0x00000000,
    OGL_TRIPLE_BUFFER_ENABLED                            = 0x00000001,
    OGL_TRIPLE_BUFFER_NUM_VALUES = 2,
    OGL_TRIPLE_BUFFER_DEFAULT = OGL_TRIPLE_BUFFER_DISABLED
};

enum EValues_OGL_VIDEO_EDITING_MODE {
    OGL_VIDEO_EDITING_MODE_DISABLE                       = 0x00000000,
    OGL_VIDEO_EDITING_MODE_ENABLE                        = 0x00000001,
    OGL_VIDEO_EDITING_MODE_NUM_VALUES = 2,
    OGL_VIDEO_EDITING_MODE_DEFAULT = OGL_VIDEO_EDITING_MODE_DISABLE
};

enum EValues_AA_BEHAVIOR_FLAGS {
    AA_BEHAVIOR_FLAGS_NONE                               = 0x00000000,
    AA_BEHAVIOR_FLAGS_TREAT_OVERRIDE_AS_APP_CONTROLLED   = 0x00000001,
    AA_BEHAVIOR_FLAGS_TREAT_OVERRIDE_AS_ENHANCE          = 0x00000002,
    AA_BEHAVIOR_FLAGS_DISABLE_OVERRIDE                   = 0x00000003,
    AA_BEHAVIOR_FLAGS_TREAT_ENHANCE_AS_APP_CONTROLLED    = 0x00000004,
    AA_BEHAVIOR_FLAGS_TREAT_ENHANCE_AS_OVERRIDE          = 0x00000008,
    AA_BEHAVIOR_FLAGS_DISABLE_ENHANCE                    = 0x0000000c,
    AA_BEHAVIOR_FLAGS_MAP_VCAA_TO_MULTISAMPLING          = 0x00010000,
    AA_BEHAVIOR_FLAGS_SLI_DISABLE_TRANSPARENCY_SUPERSAMPLING = 0x00020000,
    AA_BEHAVIOR_FLAGS_DISABLE_CPLAA                      = 0x00040000,
    AA_BEHAVIOR_FLAGS_SKIP_RT_DIM_CHECK_FOR_ENHANCE      = 0x00080000,
    AA_BEHAVIOR_FLAGS_DISABLE_SLIAA                      = 0x00100000,
    AA_BEHAVIOR_FLAGS_DEFAULT                            = 0x00000000,
    AA_BEHAVIOR_FLAGS_AA_RT_BPP_DIV_4                    = 0xf0000000,
    AA_BEHAVIOR_FLAGS_AA_RT_BPP_DIV_4_SHIFT              = 28,
    AA_BEHAVIOR_FLAGS_NON_AA_RT_BPP_DIV_4                = 0x0f000000,
    AA_BEHAVIOR_FLAGS_NON_AA_RT_BPP_DIV_4_SHIFT          = 24,
    AA_BEHAVIOR_FLAGS_MASK                               = 0xff1f000f,
    AA_BEHAVIOR_FLAGS_NUM_VALUES = 18,
};

enum EValues_AA_MODE_ALPHATOCOVERAGE {
    AA_MODE_ALPHATOCOVERAGE_MODE_MASK                    = 0x00000004,
    AA_MODE_ALPHATOCOVERAGE_MODE_OFF                     = 0x00000000,
    AA_MODE_ALPHATOCOVERAGE_MODE_ON                      = 0x00000004,
    AA_MODE_ALPHATOCOVERAGE_MODE_MAX                     = 0x00000004,
    AA_MODE_ALPHATOCOVERAGE_NUM_VALUES = 4,
    AA_MODE_ALPHATOCOVERAGE_DEFAULT = 0x00000000
};

enum EValues_AA_MODE_GAMMACORRECTION {
    AA_MODE_GAMMACORRECTION_MASK                         = 0x00000003,
    AA_MODE_GAMMACORRECTION_OFF                          = 0x00000000,
    AA_MODE_GAMMACORRECTION_ON_IF_FOS                    = 0x00000001,
    AA_MODE_GAMMACORRECTION_ON_ALWAYS                    = 0x00000002,
    AA_MODE_GAMMACORRECTION_MAX                          = 0x00000002,
    AA_MODE_GAMMACORRECTION_DEFAULT                      = 0x00000000,
    AA_MODE_GAMMACORRECTION_DEFAULT_TESLA                = 0x00000002,
    AA_MODE_GAMMACORRECTION_DEFAULT_FERMI                = 0x00000002,
    AA_MODE_GAMMACORRECTION_NUM_VALUES = 8,
};

enum EValues_AA_MODE_METHOD {
    AA_MODE_METHOD_NONE                                  = 0x0,
    AA_MODE_METHOD_SUPERSAMPLE_2X_H                      = 0x1,
    AA_MODE_METHOD_SUPERSAMPLE_2X_V                      = 0x2,
    AA_MODE_METHOD_SUPERSAMPLE_1_5X1_5                   = 0x2,
    AA_MODE_METHOD_FREE_0x03                             = 0x3,
    AA_MODE_METHOD_FREE_0x04                             = 0x4,
    AA_MODE_METHOD_SUPERSAMPLE_4X                        = 0x5,
    AA_MODE_METHOD_SUPERSAMPLE_4X_BIAS                   = 0x6,
    AA_MODE_METHOD_SUPERSAMPLE_4X_GAUSSIAN               = 0x7,
    AA_MODE_METHOD_FREE_0x08                             = 0x8,
    AA_MODE_METHOD_FREE_0x09                             = 0x9,
    AA_MODE_METHOD_SUPERSAMPLE_9X                        = 0xA,
    AA_MODE_METHOD_SUPERSAMPLE_9X_BIAS                   = 0xB,
    AA_MODE_METHOD_SUPERSAMPLE_16X                       = 0xC,
    AA_MODE_METHOD_SUPERSAMPLE_16X_BIAS                  = 0xD,
    AA_MODE_METHOD_MULTISAMPLE_2X_DIAGONAL               = 0xE,
    AA_MODE_METHOD_MULTISAMPLE_2X_QUINCUNX               = 0xF,
    AA_MODE_METHOD_MULTISAMPLE_4X                        = 0x10,
    AA_MODE_METHOD_FREE_0x11                             = 0x11,
    AA_MODE_METHOD_MULTISAMPLE_4X_GAUSSIAN               = 0x12,
    AA_MODE_METHOD_MIXEDSAMPLE_4X_SKEWED_4TAP            = 0x13,
    AA_MODE_METHOD_FREE_0x14                             = 0x14,
    AA_MODE_METHOD_FREE_0x15                             = 0x15,
    AA_MODE_METHOD_MIXEDSAMPLE_6X                        = 0x16,
    AA_MODE_METHOD_MIXEDSAMPLE_6X_SKEWED_6TAP            = 0x17,
    AA_MODE_METHOD_MIXEDSAMPLE_8X                        = 0x18,
    AA_MODE_METHOD_MIXEDSAMPLE_8X_SKEWED_8TAP            = 0x19,
    AA_MODE_METHOD_MIXEDSAMPLE_16X                       = 0x1a,
    AA_MODE_METHOD_MULTISAMPLE_4X_GAMMA                  = 0x1b,
    AA_MODE_METHOD_MULTISAMPLE_16X                       = 0x1c,
    AA_MODE_METHOD_VCAA_32X_8v24                         = 0x1d,
    AA_MODE_METHOD_CORRUPTION_CHECK                      = 0x1e,
    AA_MODE_METHOD_6X_CT                                 = 0x1f,
    AA_MODE_METHOD_MULTISAMPLE_2X_DIAGONAL_GAMMA         = 0x20,
    AA_MODE_METHOD_SUPERSAMPLE_4X_GAMMA                  = 0x21,
    AA_MODE_METHOD_MULTISAMPLE_4X_FOSGAMMA               = 0x22,
    AA_MODE_METHOD_MULTISAMPLE_2X_DIAGONAL_FOSGAMMA      = 0x23,
    AA_MODE_METHOD_SUPERSAMPLE_4X_FOSGAMMA               = 0x24,
    AA_MODE_METHOD_MULTISAMPLE_8X                        = 0x25,
    AA_MODE_METHOD_VCAA_8X_4v4                           = 0x26,
    AA_MODE_METHOD_VCAA_16X_4v12                         = 0x27,
    AA_MODE_METHOD_VCAA_16X_8v8                          = 0x28,
    AA_MODE_METHOD_MIXEDSAMPLE_32X                       = 0x29,
    AA_MODE_METHOD_SUPERVCAA_64X_4v12                    = 0x2a,
    AA_MODE_METHOD_SUPERVCAA_64X_8v8                     = 0x2b,
    AA_MODE_METHOD_MIXEDSAMPLE_64X                       = 0x2c,
    AA_MODE_METHOD_MIXEDSAMPLE_128X                      = 0x2d,
    AA_MODE_METHOD_COUNT                                 = 0x2e,
    AA_MODE_METHOD_METHOD_MASK                           = 0x0000ffff,
    AA_MODE_METHOD_METHOD_MAX                            = 0xf1c57815,
    AA_MODE_METHOD_NUM_VALUES = 50,
    AA_MODE_METHOD_DEFAULT = AA_MODE_METHOD_NONE
};

enum EValues_AA_MODE_REPLAY {
    AA_MODE_REPLAY_SAMPLES_MASK                          = 0x00000070,
    AA_MODE_REPLAY_SAMPLES_ONE                           = 0x00000000,
    AA_MODE_REPLAY_SAMPLES_TWO                           = 0x00000010,
    AA_MODE_REPLAY_SAMPLES_FOUR                          = 0x00000020,
    AA_MODE_REPLAY_SAMPLES_EIGHT                         = 0x00000030,
    AA_MODE_REPLAY_SAMPLES_MAX                           = 0x00000030,
    AA_MODE_REPLAY_MODE_MASK                             = 0x0000000f,
    AA_MODE_REPLAY_MODE_OFF                              = 0x00000000,
    AA_MODE_REPLAY_MODE_ALPHA_TEST                       = 0x00000001,
    AA_MODE_REPLAY_MODE_PIXEL_KILL                       = 0x00000002,
    AA_MODE_REPLAY_MODE_DYN_BRANCH                       = 0x00000004,
    AA_MODE_REPLAY_MODE_OPTIMAL                          = 0x00000004,
    AA_MODE_REPLAY_MODE_ALL                              = 0x00000008,
    AA_MODE_REPLAY_MODE_MAX                              = 0x0000000f,
    AA_MODE_REPLAY_TRANSPARENCY                          = 0x00000023,
    AA_MODE_REPLAY_DISALLOW_TRAA                         = 0x00000100,
    AA_MODE_REPLAY_TRANSPARENCY_DEFAULT                  = 0x00000000,
    AA_MODE_REPLAY_TRANSPARENCY_DEFAULT_TESLA            = 0x00000000,
    AA_MODE_REPLAY_TRANSPARENCY_DEFAULT_FERMI            = 0x00000000,
    AA_MODE_REPLAY_NUM_VALUES = 19,
    AA_MODE_REPLAY_DEFAULT = 0x00000000
};

enum EValues_AA_MODE_SELECTOR {
    AA_MODE_SELECTOR_MASK                                = 0x00000003,
    AA_MODE_SELECTOR_APP_CONTROL                         = 0x00000000,
    AA_MODE_SELECTOR_OVERRIDE                            = 0x00000001,
    AA_MODE_SELECTOR_ENHANCE                             = 0x00000002,
    AA_MODE_SELECTOR_MAX                                 = 0x00000002,
    AA_MODE_SELECTOR_NUM_VALUES = 5,
    AA_MODE_SELECTOR_DEFAULT = AA_MODE_SELECTOR_APP_CONTROL
};

enum EValues_AA_MODE_SELECTOR_SLIAA {
    AA_MODE_SELECTOR_SLIAA_DISABLED                      = 0,
    AA_MODE_SELECTOR_SLIAA_ENABLED                       = 1,
    AA_MODE_SELECTOR_SLIAA_NUM_VALUES = 2,
    AA_MODE_SELECTOR_SLIAA_DEFAULT = AA_MODE_SELECTOR_SLIAA_DISABLED
};

enum EValues_ANISO_MODE_LEVEL {
    ANISO_MODE_LEVEL_MASK                                = 0x0000ffff,
    ANISO_MODE_LEVEL_NONE_POINT                          = 0x00000000,
    ANISO_MODE_LEVEL_NONE_LINEAR                         = 0x00000001,
    ANISO_MODE_LEVEL_MAX                                 = 0x00000010,
    ANISO_MODE_LEVEL_DEFAULT                             = 0x00000001,
    ANISO_MODE_LEVEL_NUM_VALUES = 5,
};

enum EValues_ANISO_MODE_SELECTOR {
    ANISO_MODE_SELECTOR_MASK                             = 0x0000000f,
    ANISO_MODE_SELECTOR_APP                              = 0x00000000,
    ANISO_MODE_SELECTOR_USER                             = 0x00000001,
    ANISO_MODE_SELECTOR_COND                             = 0x00000002,
    ANISO_MODE_SELECTOR_MAX                              = 0x00000002,
    ANISO_MODE_SELECTOR_DEFAULT                          = 0x00000000,
    ANISO_MODE_SELECTOR_NUM_VALUES = 6,
};

enum EValues_APPLICATION_PROFILE_NOTIFICATION_TIMEOUT {
    APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_DISABLED    = 0,
    APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_NINE_SECONDS = 9,
    APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_FIFTEEN_SECONDS = 15,
    APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_THIRTY_SECONDS = 30,
    APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_ONE_MINUTE  = 60,
    APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_TWO_MINUTES = 120,
    APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_NUM_VALUES = 6,
    APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_DEFAULT = APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_DISABLED
};

enum EValues_CPL_HIDDEN_PROFILE {
    CPL_HIDDEN_PROFILE_DISABLED                          = 0,
    CPL_HIDDEN_PROFILE_ENABLED                           = 1,
    CPL_HIDDEN_PROFILE_NUM_VALUES = 2,
    CPL_HIDDEN_PROFILE_DEFAULT = CPL_HIDDEN_PROFILE_DISABLED
};

#define    CUDA_EXCLUDED_GPUS_NONE                              L"none"
#define    CUDA_EXCLUDED_GPUS_NUM_VALUES 1
#define    CUDA_EXCLUDED_GPUS_DEFAULT CUDA_EXCLUDED_GPUS_NONE

#define    D3DOGL_GPU_MAX_POWER_DEFAULTPOWER                    L"0"
#define    D3DOGL_GPU_MAX_POWER_NUM_VALUES 1
#define    D3DOGL_GPU_MAX_POWER_DEFAULT D3DOGL_GPU_MAX_POWER_DEFAULTPOWER

enum EValues_EXPORT_PERF_COUNTERS {
    EXPORT_PERF_COUNTERS_OFF                             = 0x00000000,
    EXPORT_PERF_COUNTERS_ON                              = 0x00000001,
    EXPORT_PERF_COUNTERS_NUM_VALUES = 2,
    EXPORT_PERF_COUNTERS_DEFAULT = EXPORT_PERF_COUNTERS_OFF
};

enum EValues_FXAA_ALLOW {
    FXAA_ALLOW_DISALLOWED                                = 0,
    FXAA_ALLOW_ALLOWED                                   = 1,
    FXAA_ALLOW_NUM_VALUES = 2,
    FXAA_ALLOW_DEFAULT = FXAA_ALLOW_ALLOWED
};

enum EValues_FXAA_ENABLE {
    FXAA_ENABLE_OFF                                      = 0,
    FXAA_ENABLE_ON                                       = 1,
    FXAA_ENABLE_NUM_VALUES = 2,
    FXAA_ENABLE_DEFAULT = FXAA_ENABLE_OFF
};

enum EValues_FXAA_INDICATOR_ENABLE {
    FXAA_INDICATOR_ENABLE_OFF                            = 0,
    FXAA_INDICATOR_ENABLE_ON                             = 1,
    FXAA_INDICATOR_ENABLE_NUM_VALUES = 2,
    FXAA_INDICATOR_ENABLE_DEFAULT = FXAA_INDICATOR_ENABLE_OFF
};

enum EValues_MCSFRSHOWSPLIT {
    MCSFRSHOWSPLIT_DISABLED                              = 0x34534064,
    MCSFRSHOWSPLIT_ENABLED                               = 0x24545582,
    MCSFRSHOWSPLIT_NUM_VALUES = 2,
    MCSFRSHOWSPLIT_DEFAULT = MCSFRSHOWSPLIT_DISABLED
};

enum EValues_OPTIMUS_DEBUG {
    OPTIMUS_DEBUG_NULL_RENDER_TRANSPORT                  = 0x00000001,
    OPTIMUS_DEBUG_NULL_DISPLAY_TRANSPORT                 = 0x00000002,
    OPTIMUS_DEBUG_NUM_VALUES = 2,
    OPTIMUS_DEBUG_DEFAULT = 0
};

enum EValues_OPTIMUS_MAXAA {
    OPTIMUS_MAXAA_MIN                                    = 0,
    OPTIMUS_MAXAA_MAX                                    = 16,
    OPTIMUS_MAXAA_NUM_VALUES = 2,
    OPTIMUS_MAXAA_DEFAULT = 0
};

enum EValues_PHYSXINDICATOR {
    PHYSXINDICATOR_DISABLED                              = 0x34534064,
    PHYSXINDICATOR_ENABLED                               = 0x24545582,
    PHYSXINDICATOR_NUM_VALUES = 2,
    PHYSXINDICATOR_DEFAULT = PHYSXINDICATOR_DISABLED
};

enum EValues_PREFERRED_PSTATE {
    PREFERRED_PSTATE_ADAPTIVE                            = 0x00000000,
    PREFERRED_PSTATE_PREFER_MAX                          = 0x00000001,
    PREFERRED_PSTATE_DRIVER_CONTROLLED                   = 0x00000002,
    PREFERRED_PSTATE_PREFER_MIN                          = 0x00000003,
    PREFERRED_PSTATE_MIN                                 = 0x00000000,
    PREFERRED_PSTATE_MAX                                 = 0x00000003,
    PREFERRED_PSTATE_NUM_VALUES = 6,
    PREFERRED_PSTATE_DEFAULT = PREFERRED_PSTATE_ADAPTIVE
};

enum EValues_PS_FRAMERATE_LIMITER {
    PS_FRAMERATE_LIMITER_DISABLED                        = 0x00000000,
    PS_FRAMERATE_LIMITER_FPS_20                          = 0x00000014,
    PS_FRAMERATE_LIMITER_FPS_30                          = 0x0000001e,
    PS_FRAMERATE_LIMITER_FPS_40                          = 0x00000028,
    PS_FRAMERATE_LIMITER_FPSMASK                         = 0x000000ff,
    PS_FRAMERATE_LIMITER_GPS_WEB                         = 0x00080000,
    PS_FRAMERATE_LIMITER_FORCE_OPTIMUS_POLICY            = 0x00100000,
    PS_FRAMERATE_LIMITER_DISALLOWED                      = 0x00200000,
    PS_FRAMERATE_LIMITER_THRESHOLD                       = 0x00000000,
    PS_FRAMERATE_LIMITER_TEMPERATURE                     = 0x02000000,
    PS_FRAMERATE_LIMITER_POWER                           = 0x04000000,
    PS_FRAMERATE_LIMITER_MODEMASK                        = 0x0f000000,
    PS_FRAMERATE_LIMITER_ACCURATE                        = 0x10000000,
    PS_FRAMERATE_LIMITER_ALLOW_WINDOWED                  = 0x20000000,
    PS_FRAMERATE_LIMITER_FORCEON                         = 0x40000000,
    PS_FRAMERATE_LIMITER_ENABLED                         = 0x80000000,
    PS_FRAMERATE_LIMITER_MASK                            = 0xff3800ff,
    PS_FRAMERATE_LIMITER_NUM_VALUES = 17,
    PS_FRAMERATE_LIMITER_DEFAULT = PS_FRAMERATE_LIMITER_DISABLED
};

enum EValues_SHIM_IGPU_TRANSCODING {
    SHIM_IGPU_TRANSCODING_DISABLE                        = 0x00000000,
    SHIM_IGPU_TRANSCODING_ENABLE                         = 0x00000001,
    SHIM_IGPU_TRANSCODING_NUM_VALUES = 2,
    SHIM_IGPU_TRANSCODING_DEFAULT = SHIM_IGPU_TRANSCODING_DISABLE
};

enum EValues_SHIM_MCCOMPAT {
    SHIM_MCCOMPAT_INTEGRATED                             = 0x00000000,
    SHIM_MCCOMPAT_ENABLE                                 = 0x00000001,
    SHIM_MCCOMPAT_USER_EDITABLE                          = 0x00000002,
    SHIM_MCCOMPAT_MASK                                   = 0x00000003,
    SHIM_MCCOMPAT_VIDEO_MASK                             = 0x00000004,
    SHIM_MCCOMPAT_VARYING_BIT                            = 0x00000008,
    SHIM_MCCOMPAT_AUTO_SELECT                            = 0x00000010,
    SHIM_MCCOMPAT_OVERRIDE_BIT                           = 0x80000000,
    SHIM_MCCOMPAT_NUM_VALUES = 8,
    SHIM_MCCOMPAT_DEFAULT = SHIM_MCCOMPAT_AUTO_SELECT
};

enum EValues_SHIM_RENDERING_MODE {
    SHIM_RENDERING_MODE_INTEGRATED                       = 0x00000000,
    SHIM_RENDERING_MODE_ENABLE                           = 0x00000001,
    SHIM_RENDERING_MODE_USER_EDITABLE                    = 0x00000002,
    SHIM_RENDERING_MODE_MASK                             = 0x00000003,
    SHIM_RENDERING_MODE_VIDEO_MASK                       = 0x00000004,
    SHIM_RENDERING_MODE_VARYING_BIT                      = 0x00000008,
    SHIM_RENDERING_MODE_AUTO_SELECT                      = 0x00000010,
    SHIM_RENDERING_MODE_OVERRIDE_BIT                     = 0x80000000,
    SHIM_RENDERING_MODE_NUM_VALUES = 8,
    SHIM_RENDERING_MODE_DEFAULT = SHIM_RENDERING_MODE_AUTO_SELECT
};

enum EValues_SHIM_RENDERING_OPTIONS {
    SHIM_RENDERING_OPTIONS_DEFAULT_RENDERING_MODE        = 0x00000000,
    SHIM_RENDERING_OPTIONS_DISABLE_ASYNC_PRESENT         = 0x00000001,
    SHIM_RENDERING_OPTIONS_EHSHELL_DETECT                = 0x00000002,
    SHIM_RENDERING_OPTIONS_FLASHPLAYER_HOST_DETECT       = 0x00000004,
    SHIM_RENDERING_OPTIONS_VIDEO_DRM_APP_DETECT          = 0x00000008,
    SHIM_RENDERING_OPTIONS_IGNORE_OVERRIDES              = 0x00000010,
    SHIM_RENDERING_OPTIONS_CHILDPROCESS_DETECT           = 0x00000020,
    SHIM_RENDERING_OPTIONS_ENABLE_DWM_ASYNC_PRESENT      = 0x00000040,
    SHIM_RENDERING_OPTIONS_PARENTPROCESS_DETECT          = 0x00000080,
    SHIM_RENDERING_OPTIONS_ALLOW_INHERITANCE             = 0x00000100,
    SHIM_RENDERING_OPTIONS_DISABLE_WRAPPERS              = 0x00000200,
    SHIM_RENDERING_OPTIONS_DISABLE_DXGI_WRAPPERS         = 0x00000400,
    SHIM_RENDERING_OPTIONS_PRUNE_UNSUPPORTED_FORMATS     = 0x00000800,
    SHIM_RENDERING_OPTIONS_ENABLE_ALPHA_FORMAT           = 0x00001000,
    SHIM_RENDERING_OPTIONS_IGPU_TRANSCODING              = 0x00002000,
    SHIM_RENDERING_OPTIONS_DISABLE_CUDA                  = 0x00004000,
    SHIM_RENDERING_OPTIONS_ALLOW_CP_CAPS_FOR_VIDEO       = 0x00008000,
    SHIM_RENDERING_OPTIONS_ENABLE_NEW_HOOKING            = 0x00010000,
    SHIM_RENDERING_OPTIONS_DISABLE_DURING_SECURE_BOOT    = 0x00020000,
    SHIM_RENDERING_OPTIONS_NUM_VALUES = 19,
    SHIM_RENDERING_OPTIONS_DEFAULT = SHIM_RENDERING_OPTIONS_DEFAULT_RENDERING_MODE
};

enum EValues_SLI_GPU_COUNT {
    SLI_GPU_COUNT_AUTOSELECT                             = 0x00000000,
    SLI_GPU_COUNT_ONE                                    = 0x00000001,
    SLI_GPU_COUNT_TWO                                    = 0x00000002,
    SLI_GPU_COUNT_THREE                                  = 0x00000003,
    SLI_GPU_COUNT_FOUR                                   = 0x00000004,
    SLI_GPU_COUNT_NUM_VALUES = 5,
    SLI_GPU_COUNT_DEFAULT = SLI_GPU_COUNT_AUTOSELECT
};

enum EValues_SLI_PREDEFINED_GPU_COUNT {
    SLI_PREDEFINED_GPU_COUNT_AUTOSELECT                  = 0x00000000,
    SLI_PREDEFINED_GPU_COUNT_ONE                         = 0x00000001,
    SLI_PREDEFINED_GPU_COUNT_TWO                         = 0x00000002,
    SLI_PREDEFINED_GPU_COUNT_THREE                       = 0x00000003,
    SLI_PREDEFINED_GPU_COUNT_FOUR                        = 0x00000004,
    SLI_PREDEFINED_GPU_COUNT_NUM_VALUES = 5,
    SLI_PREDEFINED_GPU_COUNT_DEFAULT = SLI_PREDEFINED_GPU_COUNT_AUTOSELECT
};

enum EValues_SLI_PREDEFINED_GPU_COUNT_DX10 {
    SLI_PREDEFINED_GPU_COUNT_DX10_AUTOSELECT             = 0x00000000,
    SLI_PREDEFINED_GPU_COUNT_DX10_ONE                    = 0x00000001,
    SLI_PREDEFINED_GPU_COUNT_DX10_TWO                    = 0x00000002,
    SLI_PREDEFINED_GPU_COUNT_DX10_THREE                  = 0x00000003,
    SLI_PREDEFINED_GPU_COUNT_DX10_FOUR                   = 0x00000004,
    SLI_PREDEFINED_GPU_COUNT_DX10_NUM_VALUES = 5,
    SLI_PREDEFINED_GPU_COUNT_DX10_DEFAULT = SLI_PREDEFINED_GPU_COUNT_DX10_AUTOSELECT
};

enum EValues_SLI_PREDEFINED_MODE {
    SLI_PREDEFINED_MODE_AUTOSELECT                       = 0x00000000,
    SLI_PREDEFINED_MODE_FORCE_SINGLE                     = 0x00000001,
    SLI_PREDEFINED_MODE_FORCE_AFR                        = 0x00000002,
    SLI_PREDEFINED_MODE_FORCE_AFR2                       = 0x00000003,
    SLI_PREDEFINED_MODE_FORCE_SFR                        = 0x00000004,
    SLI_PREDEFINED_MODE_FORCE_AFR_OF_SFR__FALLBACK_3AFR  = 0x00000005,
    SLI_PREDEFINED_MODE_NUM_VALUES = 6,
    SLI_PREDEFINED_MODE_DEFAULT = SLI_PREDEFINED_MODE_AUTOSELECT
};

enum EValues_SLI_PREDEFINED_MODE_DX10 {
    SLI_PREDEFINED_MODE_DX10_AUTOSELECT                  = 0x00000000,
    SLI_PREDEFINED_MODE_DX10_FORCE_SINGLE                = 0x00000001,
    SLI_PREDEFINED_MODE_DX10_FORCE_AFR                   = 0x00000002,
    SLI_PREDEFINED_MODE_DX10_FORCE_AFR2                  = 0x00000003,
    SLI_PREDEFINED_MODE_DX10_FORCE_SFR                   = 0x00000004,
    SLI_PREDEFINED_MODE_DX10_FORCE_AFR_OF_SFR__FALLBACK_3AFR = 0x00000005,
    SLI_PREDEFINED_MODE_DX10_NUM_VALUES = 6,
    SLI_PREDEFINED_MODE_DX10_DEFAULT = SLI_PREDEFINED_MODE_DX10_AUTOSELECT
};

enum EValues_SLI_RENDERING_MODE {
    SLI_RENDERING_MODE_AUTOSELECT                        = 0x00000000,
    SLI_RENDERING_MODE_FORCE_SINGLE                      = 0x00000001,
    SLI_RENDERING_MODE_FORCE_AFR                         = 0x00000002,
    SLI_RENDERING_MODE_FORCE_AFR2                        = 0x00000003,
    SLI_RENDERING_MODE_FORCE_SFR                         = 0x00000004,
    SLI_RENDERING_MODE_FORCE_AFR_OF_SFR__FALLBACK_3AFR   = 0x00000005,
    SLI_RENDERING_MODE_NUM_VALUES = 6,
    SLI_RENDERING_MODE_DEFAULT = SLI_RENDERING_MODE_AUTOSELECT
};

enum EValues_VSYNCSMOOTHAFR {
    VSYNCSMOOTHAFR_OFF                                   = 0x00000000,
    VSYNCSMOOTHAFR_ON                                    = 0x00000001,
    VSYNCSMOOTHAFR_NUM_VALUES = 2,
    VSYNCSMOOTHAFR_DEFAULT = VSYNCSMOOTHAFR_OFF
};

enum EValues_VSYNC_BEHAVIOR_FLAGS {
    VSYNC_BEHAVIOR_FLAGS_NONE                            = 0x00000000,
    VSYNC_BEHAVIOR_FLAGS_DEFAULT                         = 0x00000000,
    VSYNC_BEHAVIOR_FLAGS_IGNORE_FLIPINTERVAL_MULTIPLE    = 0x00000001,
    VSYNC_BEHAVIOR_FLAGS_NUM_VALUES = 3,
};

enum EValues_WKS_API_STEREO_EYES_EXCHANGE {
    WKS_API_STEREO_EYES_EXCHANGE_OFF                     = 0,
    WKS_API_STEREO_EYES_EXCHANGE_ON                      = 1,
    WKS_API_STEREO_EYES_EXCHANGE_NUM_VALUES = 2,
    WKS_API_STEREO_EYES_EXCHANGE_DEFAULT = WKS_API_STEREO_EYES_EXCHANGE_OFF
};

enum EValues_WKS_API_STEREO_MODE {
    WKS_API_STEREO_MODE_SHUTTER_GLASSES                  = 0,
    WKS_API_STEREO_MODE_VERTICAL_INTERLACED              = 1,
    WKS_API_STEREO_MODE_TWINVIEW                         = 2,
    WKS_API_STEREO_MODE_NV17_SHUTTER_GLASSES_AUTO        = 3,
    WKS_API_STEREO_MODE_NV17_SHUTTER_GLASSES_DAC0        = 4,
    WKS_API_STEREO_MODE_NV17_SHUTTER_GLASSES_DAC1        = 5,
    WKS_API_STEREO_MODE_COLOR_LINE                       = 6,
    WKS_API_STEREO_MODE_COLOR_INTERLEAVED                = 7,
    WKS_API_STEREO_MODE_ANAGLYPH                         = 8,
    WKS_API_STEREO_MODE_HORIZONTAL_INTERLACED            = 9,
    WKS_API_STEREO_MODE_SIDE_FIELD                       = 10,
    WKS_API_STEREO_MODE_SUB_FIELD                        = 11,
    WKS_API_STEREO_MODE_CHECKERBOARD                     = 12,
    WKS_API_STEREO_MODE_INVERSE_CHECKERBOARD             = 13,
    WKS_API_STEREO_MODE_TRIDELITY_SL                     = 14,
    WKS_API_STEREO_MODE_TRIDELITY_MV                     = 15,
    WKS_API_STEREO_MODE_SEEFRONT                         = 16,
    WKS_API_STEREO_MODE_STEREO_MIRROR                    = 17,
    WKS_API_STEREO_MODE_FRAME_SEQUENTIAL                 = 18,
    WKS_API_STEREO_MODE_AUTODETECT_PASSIVE_MODE          = 19,
    WKS_API_STEREO_MODE_AEGIS_DT_FRAME_SEQUENTIAL        = 20,
    WKS_API_STEREO_MODE_OEM_EMITTER_FRAME_SEQUENTIAL     = 21,
    WKS_API_STEREO_MODE_USE_HW_DEFAULT                   = 0xffffffff,
    WKS_API_STEREO_MODE_DEFAULT_GL                       = 3,
    WKS_API_STEREO_MODE_NUM_VALUES = 24,
    WKS_API_STEREO_MODE_DEFAULT = WKS_API_STEREO_MODE_SHUTTER_GLASSES
};

enum EValues_WKS_FEATURE_SUPPORT_CONTROL {
    WKS_FEATURE_SUPPORT_CONTROL_OFF                      = 0x00000000,
    WKS_FEATURE_SUPPORT_CONTROL_SRS_1714_WIN8_STEREO     = 0x00000001,
    WKS_FEATURE_SUPPORT_CONTROL_WIN8_STEREO_EXPORT_IF_ENABLED = 0x00000002,
    WKS_FEATURE_SUPPORT_CONTROL_NUM_VALUES = 3,
    WKS_FEATURE_SUPPORT_CONTROL_DEFAULT = WKS_FEATURE_SUPPORT_CONTROL_SRS_1714_WIN8_STEREO
};

enum EValues_WKS_STEREO_DONGLE_SUPPORT {
    WKS_STEREO_DONGLE_SUPPORT_OFF                        = 0,
    WKS_STEREO_DONGLE_SUPPORT_DAC                        = 1,
    WKS_STEREO_DONGLE_SUPPORT_DLP                        = 2,
    WKS_STEREO_DONGLE_SUPPORT_NUM_VALUES = 3,
    WKS_STEREO_DONGLE_SUPPORT_DEFAULT = WKS_STEREO_DONGLE_SUPPORT_OFF
};

enum EValues_WKS_STEREO_SUPPORT {
    WKS_STEREO_SUPPORT_OFF                               = 0,
    WKS_STEREO_SUPPORT_ON                                = 1,
    WKS_STEREO_SUPPORT_NUM_VALUES = 2,
    WKS_STEREO_SUPPORT_DEFAULT = WKS_STEREO_SUPPORT_OFF
};

enum EValues_AO_MODE {
    AO_MODE_OFF                                          = 0,
    AO_MODE_LOW                                          = 1,
    AO_MODE_MEDIUM                                       = 2,
    AO_MODE_HIGH                                         = 3,
    AO_MODE_NUM_VALUES = 4,
    AO_MODE_DEFAULT = AO_MODE_OFF
};

enum EValues_AO_MODE_ACTIVE {
    AO_MODE_ACTIVE_DISABLED                              = 0,
    AO_MODE_ACTIVE_ENABLED                               = 1,
    AO_MODE_ACTIVE_NUM_VALUES = 2,
    AO_MODE_ACTIVE_DEFAULT = AO_MODE_ACTIVE_DISABLED
};

enum EValues_AUTO_LODBIASADJUST {
    AUTO_LODBIASADJUST_OFF                               = 0x00000000,
    AUTO_LODBIASADJUST_ON                                = 0x00000001,
    AUTO_LODBIASADJUST_NUM_VALUES = 2,
    AUTO_LODBIASADJUST_DEFAULT = AUTO_LODBIASADJUST_ON
};

enum EValues_LODBIASADJUST {
    LODBIASADJUST_MIN                                    = 0xffffff80,
    LODBIASADJUST_MAX                                    = 128,
    LODBIASADJUST_NUM_VALUES = 2,
    LODBIASADJUST_DEFAULT = 0
};

enum EValues_PRERENDERLIMIT {
    PRERENDERLIMIT_MIN                                   = 0x00,
    PRERENDERLIMIT_MAX                                   = 0xff,
    PRERENDERLIMIT_APP_CONTROLLED                        = 0x00,
    PRERENDERLIMIT_NUM_VALUES = 3,
    PRERENDERLIMIT_DEFAULT = PRERENDERLIMIT_APP_CONTROLLED
};

enum EValues_PS_DYNAMIC_TILING {
    PS_DYNAMIC_TILING_OFF                                = 0x82247787,
    PS_DYNAMIC_TILING_ON                                 = 0x74288976,
    PS_DYNAMIC_TILING_NUM_VALUES = 2,
    PS_DYNAMIC_TILING_DEFAULT = PS_DYNAMIC_TILING_OFF
};

enum EValues_PS_TEXFILTER_ANISO_OPTS2 {
    PS_TEXFILTER_ANISO_OPTS2_OFF                         = 0x00000000,
    PS_TEXFILTER_ANISO_OPTS2_ON                          = 0x00000001,
    PS_TEXFILTER_ANISO_OPTS2_NUM_VALUES = 2,
    PS_TEXFILTER_ANISO_OPTS2_DEFAULT = PS_TEXFILTER_ANISO_OPTS2_OFF
};

enum EValues_PS_TEXFILTER_BILINEAR_IN_ANISO {
    PS_TEXFILTER_BILINEAR_IN_ANISO_OFF                   = 0x00000000,
    PS_TEXFILTER_BILINEAR_IN_ANISO_ON                    = 0x00000001,
    PS_TEXFILTER_BILINEAR_IN_ANISO_NUM_VALUES = 2,
    PS_TEXFILTER_BILINEAR_IN_ANISO_DEFAULT = PS_TEXFILTER_BILINEAR_IN_ANISO_OFF
};

enum EValues_PS_TEXFILTER_DISABLE_TRILIN_SLOPE {
    PS_TEXFILTER_DISABLE_TRILIN_SLOPE_OFF                = 0x00000000,
    PS_TEXFILTER_DISABLE_TRILIN_SLOPE_ON                 = 0x00000001,
    PS_TEXFILTER_DISABLE_TRILIN_SLOPE_NUM_VALUES = 2,
    PS_TEXFILTER_DISABLE_TRILIN_SLOPE_DEFAULT = PS_TEXFILTER_DISABLE_TRILIN_SLOPE_OFF
};

enum EValues_PS_TEXFILTER_NO_NEG_LODBIAS {
    PS_TEXFILTER_NO_NEG_LODBIAS_OFF                      = 0x00000000,
    PS_TEXFILTER_NO_NEG_LODBIAS_ON                       = 0x00000001,
    PS_TEXFILTER_NO_NEG_LODBIAS_NUM_VALUES = 2,
    PS_TEXFILTER_NO_NEG_LODBIAS_DEFAULT = PS_TEXFILTER_NO_NEG_LODBIAS_OFF
};

enum EValues_QUALITY_ENHANCEMENTS {
    QUALITY_ENHANCEMENTS_HIGHQUALITY                     = 0xfffffff6,
    QUALITY_ENHANCEMENTS_QUALITY                         = 0x00000000,
    QUALITY_ENHANCEMENTS_PERFORMANCE                     = 0x0000000a,
    QUALITY_ENHANCEMENTS_HIGHPERFORMANCE                 = 0x00000014,
    QUALITY_ENHANCEMENTS_NUM_VALUES = 4,
    QUALITY_ENHANCEMENTS_DEFAULT = QUALITY_ENHANCEMENTS_QUALITY
};

enum EValues_REFRESH_RATE_OVERRIDE {
    REFRESH_RATE_OVERRIDE_APPLICATION_CONTROLLED         = 0,
    REFRESH_RATE_OVERRIDE_HIGHEST_AVAILABLE              = 1,
    REFRESH_RATE_OVERRIDE_NUM_VALUES = 2,
    REFRESH_RATE_OVERRIDE_DEFAULT = REFRESH_RATE_OVERRIDE_APPLICATION_CONTROLLED
};

enum EValues_SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE {
    SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_OFF           = 0x00000000,
    SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_ON            = 0x00000001,
    SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_NUM_VALUES = 2,
    SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_DEFAULT = SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_OFF
};

enum EValues_SET_VAB_DATA {
    SET_VAB_DATA_ZERO                                    = 0x00000000,
    SET_VAB_DATA_UINT_ONE                                = 0x00000001,
    SET_VAB_DATA_FLOAT_ONE                               = 0x3f800000,
    SET_VAB_DATA_FLOAT_POS_INF                           = 0x7f800000,
    SET_VAB_DATA_FLOAT_NAN                               = 0x7fc00000,
    SET_VAB_DATA_USE_API_DEFAULTS                        = 0xffffffff,
    SET_VAB_DATA_NUM_VALUES = 6,
    SET_VAB_DATA_DEFAULT = SET_VAB_DATA_USE_API_DEFAULTS
};

enum EValues_VSYNCMODE {
    VSYNCMODE_PASSIVE                                    = 0x60925292,
    VSYNCMODE_FORCEOFF                                   = 0x08416747,
    VSYNCMODE_FORCEON                                    = 0x47814940,
    VSYNCMODE_FLIPINTERVAL2                              = 0x32610244,
    VSYNCMODE_FLIPINTERVAL3                              = 0x71271021,
    VSYNCMODE_FLIPINTERVAL4                              = 0x13245256,
    VSYNCMODE_NUM_VALUES = 6,
    VSYNCMODE_DEFAULT = VSYNCMODE_PASSIVE
};

enum EValues_VSYNCTEARCONTROL {
    VSYNCTEARCONTROL_DISABLE                             = 0x96861077,
    VSYNCTEARCONTROL_ENABLE                              = 0x99941284,
    VSYNCTEARCONTROL_NUM_VALUES = 2,
    VSYNCTEARCONTROL_DEFAULT = VSYNCTEARCONTROL_DISABLE
};



typedef struct _SettingDWORDNameString {
    NvU32 settingId;
    const wchar_t * settingNameString;
    NvU32 numSettingValues;
    NvU32 *settingValues;
    NvU32 defaultValue;
} SettingDWORDNameString;

typedef struct _SettingWSTRINGNameString {
    NvU32 settingId;
    const wchar_t * settingNameString;
    NvU32 numSettingValues;
    const wchar_t **settingValues;
    const wchar_t * defaultValue;
} SettingWSTRINGNameString;


#endif // _NVAPI_DRIVER_SETTINGS_H_

