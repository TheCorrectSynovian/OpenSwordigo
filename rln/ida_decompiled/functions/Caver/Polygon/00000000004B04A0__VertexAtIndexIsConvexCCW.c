/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B04A0
 * Mangled: _ZNK5Caver7Polygon24VertexAtIndexIsConvexCCWEi
 * Demangled: Caver::Polygon::VertexAtIndexIsConvexCCW(int)
 *
 * Callers: 1
 *   0x00000000001F9E50  Caver::Polygon::VertexAtIndexIsConvexCCW(int)
 *
 * Callees: 0
 *
 * Referenced strings: 21
 *   insn=0x00000000004B04A0 string=0x00000000004B04A4 "m"
 *   insn=0x00000000004B04A4 string=0x00000000004B04A8 "("
 *   insn=0x00000000004B04A4 string=0x00000000004B04B0 ""
 *   insn=0x00000000004B04A8 string=0x00000000004B04AC ""
 *   insn=0x00000000004B04AC string=0x00000000004B04C8 "\t"
 *   insn=0x00000000004B04B4 string=0x00000000004B04B8 ""
 *   insn=0x00000000004B04B4 string=0x00000000004B04C4 ""
 *   insn=0x00000000004B04B8 string=0x00000000004B04BC ""
 *   insn=0x00000000004B04C8 string=0x00000000004B04CC "\n"
 *   insn=0x00000000004B04CC string=0x00000000004B04D0 "("
 *   insn=0x00000000004B04D0 string=0x00000000004B04D4 "+"
 *   insn=0x00000000004B04D8 string=0x00000000004B04DC "a"
 *   insn=0x00000000004B04DC string=0x00000000004B04E0 "("
 *   insn=0x00000000004B04E4 string=0x00000000004B04E8 "k"
 *   insn=0x00000000004B04E8 string=0x00000000004B04EC ""
 *   insn=0x00000000004B04E8 string=0x00000000004B04F4 "("
 *   insn=0x00000000004B04EC string=0x00000000004B04F0 ""
 *   insn=0x00000000004B04F8 string=0x00000000004B04FC "#8#"
 *   insn=0x00000000004B0508 string=0x00000000004B050C "` "
 *   insn=0x00000000004B050C string=0x00000000004B0510 "A!"
 *   insn=0x00000000004B0514 string=0x00000000004B0518 "  "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Polygon::VertexAtIndexIsConvexCCW(Caver::Polygon *this, int a2)
{
  int v2; // w8
  __int64 v3; // x9
  float *v4; // x8
  float v5; // s2
  float v6; // s3
  int v7; // w8

  if ( a2 <= 0 )
  {
    if ( *((_BYTE *)this + 33) )
      v2 = *(_DWORD *)this - 1;
    else
      v2 = -1;
  }
  else
  {
    v2 = a2 - 1;
  }
  v3 = *((_QWORD *)this + 1);
  v4 = (float *)(v3 + 8LL * v2);
  v6 = *v4;
  v5 = v4[1];
  v7 = a2 + 1;
  if ( a2 + 1 >= *(_DWORD *)this )
    v7 = *((unsigned __int8 *)this + 33) - 1;
  return (float)((float)((float)(*(float *)(v3 + 8LL * a2) - v6)
                       * (float)(*(float *)(v3 + 8LL * v7 + 4) - *(float *)(v3 + 8LL * a2 + 4)))
               - (float)((float)(*(float *)(v3 + 8LL * a2 + 4) - v5)
                       * (float)(*(float *)(v3 + 8LL * v7) - *(float *)(v3 + 8LL * a2)))) >= 0.0;
}

