/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3DE0
 * Mangled: ._Z26PVRTTextureLoadFromPointerPKvPjS0_bjS0_PiS2_
 * Demangled: PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *
 * Callers: 1
 *   0x000000000051906C  PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile &,uint *,void const*,bool,uint,int *,int *)
 *
 * Callees: 1
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3DE8 string=0x00000000001F3DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall PVRTTextureLoadFromPointer(
        const void *a1,
        unsigned int *a2,
        const void *a3,
        bool a4,
        unsigned int a5,
        const void *a6,
        int *a7,
        int *a8)
{
  return _Z26PVRTTextureLoadFromPointerPKvPjS0_bjS0_PiS2_(a1, a2, a3, a4, a5, a6, a7, a8);
}

