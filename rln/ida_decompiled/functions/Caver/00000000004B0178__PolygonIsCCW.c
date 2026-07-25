/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B0178
 * Mangled: _ZN5Caver12PolygonIsCCWEPKNS_7Vector2Ei
 * Demangled: Caver::PolygonIsCCW(Caver::Vector2 const*,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000004B0178 string=0x00000000004B017C "?"
 *   insn=0x00000000004B017C string=0x00000000004B0180 ""
 *   insn=0x00000000004B0180 string=0x00000000004B0184 "M"
 *   insn=0x00000000004B018C string=0x00000000004B0190 "\n0"
 *   insn=0x00000000004B0194 string=0x00000000004B0198 "$"
 *   insn=0x00000000004B019C string=0x00000000004B01A0 "E"
 *   insn=0x00000000004B01A0 string=0x00000000004B01A4 ")"
 *   insn=0x00000000004B01A4 string=0x00000000004B01A8 "f%"
 *   insn=0x00000000004B01A8 string=0x00000000004B01AC "C"
 *   insn=0x00000000004B01AC string=0x00000000004B01B0 "J!"
 *   insn=0x00000000004B01B8 string=0x00000000004B01BC "B($"
 *   insn=0x00000000004B01C8 string=0x00000000004B01D4 ""
 *   insn=0x00000000004B01D8 string=0x00000000004B01DC "a!"
 *   insn=0x00000000004B01E0 string=0x00000000004B01E4 " 8 "
 *   insn=0x00000000004B01E4 string=0x00000000004B01E8 "@( "
 *   insn=0x00000000004B01F0 string=0x00000000004B01F4 "  "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::PolygonIsCCW(float *a1, int a2)
{
  __int64 v2; // x8
  float v3; // s0
  float v4; // s1
  __int64 v5; // x9
  float *v6; // x10
  float v7; // s2
  float v8; // s4
  float v9; // s3
  float v10; // s5
  float v11; // s6

  v2 = a2 - 1LL;
  if ( a2 <= 1 )
  {
    v3 = *a1;
    v4 = a1[1];
    v7 = 0.0;
  }
  else
  {
    v3 = *a1;
    v4 = a1[1];
    v5 = (unsigned int)v2;
    v6 = a1 + 3;
    v7 = 0.0;
    v8 = v4;
    v9 = *a1;
    do
    {
      v10 = *v6;
      --v5;
      v11 = v9 * *v6;
      v9 = *(v6 - 1);
      v6 += 2;
      v7 = v7 + (float)(v11 - (float)(v8 * v9));
      v8 = v10;
    }
    while ( v5 );
  }
  return (float)((float)(v7 + (float)((float)(a1[2 * v2] * v4) - (float)(v3 * a1[2 * v2 + 1]))) * 0.5) > 0.0;
}

