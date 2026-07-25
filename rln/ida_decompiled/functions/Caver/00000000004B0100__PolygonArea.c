/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B0100
 * Mangled: _ZN5Caver11PolygonAreaEPKNS_7Vector2Ei
 * Demangled: Caver::PolygonArea(Caver::Vector2 const*,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000004B0100 string=0x00000000004B0104 "?"
 *   insn=0x00000000004B0104 string=0x00000000004B0108 ""
 *   insn=0x00000000004B0108 string=0x00000000004B010C ""
 *   insn=0x00000000004B0114 string=0x00000000004B0118 "\n0"
 *   insn=0x00000000004B011C string=0x00000000004B0120 "C"
 *   insn=0x00000000004B0120 string=0x00000000004B0124 ")"
 *   insn=0x00000000004B0124 string=0x00000000004B0128 "$#"
 *   insn=0x00000000004B0128 string=0x00000000004B012C "A"
 *   insn=0x00000000004B012C string=0x00000000004B0130 "J!"
 *   insn=0x00000000004B0130 string=0x00000000004B0134 """"
 *   insn=0x00000000004B013C string=0x00000000004B0140 "b"
 *   insn=0x00000000004B0148 string=0x00000000004B0150 ""
 *   insn=0x00000000004B0158 string=0x00000000004B015C "b""
 *   insn=0x00000000004B015C string=0x00000000004B0160 "!$"
 *   insn=0x00000000004B0160 string=0x00000000004B0164 "A8!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::PolygonArea(float *a1, int a2)
{
  __int64 v2; // x8
  float v3; // s1
  float v4; // s2
  __int64 v5; // x9
  float *v6; // x10
  float v7; // s0
  float v8; // s3
  float v9; // s4

  v2 = a2 - 1LL;
  if ( a2 <= 1 )
  {
    v7 = 0.0;
  }
  else
  {
    v3 = *a1;
    v4 = a1[1];
    v5 = (unsigned int)v2;
    v6 = a1 + 3;
    v7 = 0.0;
    do
    {
      v8 = *v6;
      --v5;
      v9 = v3 * *v6;
      v3 = *(v6 - 1);
      v6 += 2;
      v7 = v7 + (float)(v9 - (float)(v3 * v4));
      v4 = v8;
    }
    while ( v5 );
  }
  return (float)(v7 + (float)((float)(a1[2 * v2] * a1[1]) - (float)(*a1 * a1[2 * v2 + 1]))) * 0.5;
}

