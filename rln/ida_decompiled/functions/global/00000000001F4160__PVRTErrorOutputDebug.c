/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4160
 * Mangled: ._Z20PVRTErrorOutputDebugPKcz
 * Demangled: PVRTErrorOutputDebug(char const*,...)
 *
 * Callers: 3
 *   0x0000000000503314  CPVRTModelPOD::ReadFromFile(char const*,char *,ulong,char *,ulong)
 *   0x000000000050623C  CPVRTModelPOD::CreateSkinIdxWeight(char *,char *,int,int const*,float const*)
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *
 * Callees: 1
 *   0x000000000051AC30  PVRTErrorOutputDebug(char const*,...)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4168 string=0x00000000001F416C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall PVRTErrorOutputDebug(const char *a1)
{
  return _Z20PVRTErrorOutputDebugPKcz(a1);
}

