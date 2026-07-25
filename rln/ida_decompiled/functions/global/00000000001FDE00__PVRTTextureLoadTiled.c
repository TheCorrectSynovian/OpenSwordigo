/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDE00
 * Mangled: ._Z20PVRTTextureLoadTiledPhjjPKhjjjb
 * Demangled: PVRTTextureLoadTiled(uchar *,uint,uint,uchar const*,uint,uint,uint,bool)
 *
 * Callers: 1
 *   0x00000000005186A8  PVRTTextureTile(PVR_Texture_Header **,PVR_Texture_Header const*,int)
 *
 * Callees: 1
 *   0x000000000051BF60  PVRTTextureLoadTiled(uchar *,uint,uint,uchar const*,uint,uint,uint,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDE08 string=0x00000000001FDE0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall PVRTTextureLoadTiled(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int8 *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        bool a8)
{
  return _Z20PVRTTextureLoadTiledPhjjPKhjjjb(a1, a2, a3, a4, a5, a6, a7, a8);
}

