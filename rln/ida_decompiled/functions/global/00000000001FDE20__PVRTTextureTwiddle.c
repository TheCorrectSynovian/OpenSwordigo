/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDE20
 * Mangled: ._Z18PVRTTextureTwiddleRjjj
 * Demangled: PVRTTextureTwiddle(uint &,uint,uint)
 *
 * Callers: 1
 *   0x000000000051BF60  PVRTTextureLoadTiled(uchar *,uint,uint,uchar const*,uint,uint,uint,bool)
 *
 * Callees: 1
 *   0x000000000051C264  PVRTTextureTwiddle(uint &,uint,uint)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDE24 string=0x000000000051C264 "L"
 *   insn=0x00000000001FDE28 string=0x00000000001FDE2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall PVRTTextureTwiddle(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  return _Z18PVRTTextureTwiddleRjjj(a1, a2, a3);
}

