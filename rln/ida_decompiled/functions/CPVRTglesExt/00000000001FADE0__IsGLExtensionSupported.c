/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FADE0
 * Mangled: ._ZN12CPVRTglesExt22IsGLExtensionSupportedEPKc
 * Demangled: CPVRTglesExt::IsGLExtensionSupported(char const*)
 *
 * Callers: 1
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *
 * Callees: 1
 *   0x000000000051C8A8  CPVRTglesExt::IsGLExtensionSupported(char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FADE8 string=0x00000000001FADEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTglesExt::IsGLExtensionSupported(CPVRTglesExt *this, const char *a2)
{
  return _ZN12CPVRTglesExt22IsGLExtensionSupportedEPKc(this, a2);
}

