/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDB40
 * Mangled: ._Z17PVRTTextureCreatejjjjjb
 * Demangled: PVRTTextureCreate(uint,uint,uint,uint,uint,bool)
 *
 * Callers: 1
 *   0x00000000005186A8  PVRTTextureTile(PVR_Texture_Header **,PVR_Texture_Header const*,int)
 *
 * Callees: 1
 *   0x000000000051C3CC  PVRTTextureCreate(uint,uint,uint,uint,uint,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDB48 string=0x00000000001FDB4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall PVRTTextureCreate(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        bool a6)
{
  return _Z17PVRTTextureCreatejjjjjb(a1, a2, a3, a4, a5, a6);
}

