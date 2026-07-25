/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AFEF0
 * Mangled: _ZNK5Caver12OrientedRect28IntersectsOrientedRectOnAxisERKS0_RKNS_7Vector2EPfS6_
 * Demangled: Caver::OrientedRect::IntersectsOrientedRectOnAxis(Caver::OrientedRect const&,Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000001FCFA0  Caver::OrientedRect::IntersectsOrientedRectOnAxis(Caver::OrientedRect const&,Caver::Vector2 const&,float *,float *)
 *
 * Callees: 0
 *
 * Referenced strings: 33
 *   insn=0x00000000004AFEF0 string=0x00000000004AFEF4 "B"
 *   insn=0x00000000004AFEFC string=0x00000000004AFF00 "0D@-2LA-4TB-"
 *   insn=0x00000000004AFF00 string=0x00000000004AFF04 "2LA-4TB-"
 *   insn=0x00000000004AFF04 string=0x00000000004AFF08 "4TB-"
 *   insn=0x00000000004AFF0C string=0x00000000004AFF10 "D$"
 *   insn=0x00000000004AFF10 string=0x00000000004AFF14 "F&"
 *   insn=0x00000000004AFF14 string=0x00000000004AFF18 "P0"
 *   insn=0x00000000004AFF18 string=0x00000000004AFF1C "R2"
 *   insn=0x00000000004AFF1C string=0x00000000004AFF20 "B4"
 *   insn=0x00000000004AFF20 string=0x00000000004AFF24 "!#"
 *   insn=0x00000000004AFF24 string=0x00000000004AFF28 "e%"
 *   insn=0x00000000004AFF28 string=0x00000000004AFF2C "g'"
 *   insn=0x00000000004AFF2C string=0x00000000004AFF30 "q1"
 *   insn=0x00000000004AFF30 string=0x00000000004AFF34 "s3"
 *   insn=0x00000000004AFF34 string=0x00000000004AFF38 "c5"
 *   insn=0x00000000004AFF40 string=0x00000000004AFF44 "B(#"
 *   insn=0x00000000004AFF50 string=0x00000000004AFF54 "F*3"
 *   insn=0x00000000004AFF54 string=0x00000000004AFF58 "c$"
 *   insn=0x00000000004AFF5C string=0x00000000004AFF60 "%"
 *   insn=0x00000000004AFF64 string=0x00000000005837A4 "o"
 *   insn=0x00000000004AFF68 string=0x00000000004AFF6C "B"
 *   insn=0x00000000004AFF7C string=0x00000000004AFF80 "d($"
 *   insn=0x00000000004AFF8C string=0x00000000004AFF90 "#8%"
 *   insn=0x00000000004AFF90 string=0x00000000004AFF94 "F(&"
 *   insn=0x00000000004AFF94 string=0x00000000004AFF98 "` &"
 *   insn=0x00000000004AFFA4 string=0x0000000000583734 "o"
 *   insn=0x00000000004AFFAC string=0x00000000004AFFB0 "!(%"
 *   insn=0x00000000004AFFB4 string=0x00000000004AFFB8 "  $"
 *   insn=0x00000000004AFFBC string=0x00000000004AFFC0 "c"
 *   insn=0x00000000004AFFC0 string=0x00000000004AFFC4 " 8 "
 *   insn=0x00000000004AFFC0 string=0x00000000004AFFCC "d"
 *   insn=0x00000000004AFFC4 string=0x00000000004AFFC8 "`"
 *   insn=0x00000000004AFFCC string=0x00000000004AFFD0 "`8""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OrientedRect::IntersectsOrientedRectOnAxis(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5)
{
  float v5; // s3
  float v6; // s0
  float v7; // s4
  float v8; // s1
  float v9; // s5
  float v10; // s2
  float v11; // s3
  __int64 result; // x0
  float v13; // s0
  float v14; // s1

  v5 = a3[1];
  v6 = (float)(*a1 * *a3) + (float)(a1[1] * v5);
  v7 = (float)(a1[6] * fabsf((float)(*a3 * a1[2]) + (float)(v5 * a1[3])))
     + (float)(a1[7] * fabsf((float)(*a3 * a1[4]) + (float)(v5 * a1[5])));
  v8 = (float)(*a3 * *a2) + (float)(v5 * a2[1]);
  v9 = (float)(a2[6] * fabsf((float)(*a3 * a2[2]) + (float)(v5 * a2[3])))
     + (float)(a2[7] * fabsf((float)(*a3 * a2[4]) + (float)(v5 * a2[5])));
  v10 = v6 + v7;
  v11 = v8 - v9;
  result = 0;
  if ( (float)(v8 - v9) <= (float)((float)(v6 + v7) + -0.001) )
  {
    v13 = v6 - v7;
    v14 = v8 + v9;
    if ( v14 >= (float)(v13 + 0.001) )
    {
      if ( a4 )
        *a4 = v14 - v13;
      if ( a5 )
        *a5 = v11 - v10;
      return 1;
    }
  }
  return result;
}

