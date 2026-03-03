/**
 * Xbox 360 Kernel Import Stubs
 * These are stub implementations for Xbox 360 kernel imports that are referenced
 * by the recompiled code but won't actually be called at runtime (the Rex runtime
 * handles these through its own implementations).
 */

#include <rex/ppc.h>

namespace rex {
namespace kernel {

// Network DLL imports
extern "C" void __imp__NetDll_XNetRegisterKey(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__NetDll_XNetUnregisterKey(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__NetDll_XNetUnregisterInAddr(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__NetDll_XNetConnect(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__NetDll_XNetGetConnectStatus(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__NetDll_XNetQosLookup(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__NetDll_XNetGetBroadcastVersionStatus(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__NetDll_XNetGetSystemLinkPort(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__NetDll_getsockname(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__NetDll_getpeername(PPCContext& ctx, uint8_t* base) {}

// Xbox Live / Logon imports
extern "C" void __imp__XNetLogonGetTitleID(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__XamVoiceSubmitPacket(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__XamUserCreateStatsEnumerator(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__XamShowFriendsUI(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__XamShowGamerCardUIForXUID(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__XamShowMessageComposeUI(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__XamShowGameInviteUI(PPCContext& ctx, uint8_t* base) {}

// I/O Manager imports
extern "C" void __imp__IoDismountVolume(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__IoDismountVolumeByFileHandle(PPCContext& ctx, uint8_t* base) {}
extern "C" void __imp__IoInvalidDeviceRequest(PPCContext& ctx, uint8_t* base) {}

// Object Manager imports
extern "C" void __imp__ObReferenceObject(PPCContext& ctx, uint8_t* base) {}

}  // namespace kernel
}  // namespace rex
