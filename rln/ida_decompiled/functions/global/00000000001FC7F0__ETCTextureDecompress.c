/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC7F0
 * Mangled: ._Z20ETCTextureDecompressPKvRKiS2_S0_S2_
 * Demangled: ETCTextureDecompress(void const*,int const&,int const&,void const*,int const&)
 *
 * Callers: 1
 *   0x000000000051A914  PVRTDecompressETC(void const*,uint const&,uint const&,void *,int const&)
 *
 * Callees: 1
 *   0x000000000051A34C  ETCTextureDecompress(void const*,int const&,int const&,void const*,int const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC7F8 string=0x00000000001FC7FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall ETCTextureDecompress(const void *a1, const int *a2, const int *a3, const void *a4, const int *a5)
{
  return _Z20ETCTextureDecompressPKvRKiS2_S0_S2_(a1, a2, a3, a4, a5);
}

