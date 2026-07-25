/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000516720
 * Mangled: _Z22PVRTTransformVec3ArrayP12PVRTVECTOR4fiPK12PVRTVECTOR3fiPK11PVRTMATRIXfi
 * Demangled: PVRTTransformVec3Array(PVRTVECTOR4f *,int,PVRTVECTOR3f const*,int,PVRTMATRIXf const*,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000516724 string=0x0000000000516728 "(|@"
 *   insn=0x0000000000516728 string=0x000000000051672C "i|@"
 *   insn=0x000000000051672C string=0x0000000000516730 "J "
 *   insn=0x0000000000516730 string=0x0000000000516734 " "
 *   insn=0x000000000051673C string=0x0000000000516740 "B"
 *   insn=0x0000000000516744 string=0x0000000000516748 "E"
 *   insn=0x0000000000516750 string=0x0000000000516754 "!#"
 *   insn=0x0000000000516764 string=0x0000000000516768 "`"
 *   insn=0x0000000000516778 string=0x000000000051677C "@ "
 *   insn=0x000000000051677C string=0x0000000000516780 "a!"
 *   insn=0x0000000000516790 string=0x0000000000516794 "`"
 *   insn=0x00000000005167A4 string=0x00000000005167A8 "@ "
 *   insn=0x00000000005167A8 string=0x00000000005167AC "a!"
 *   insn=0x00000000005167BC string=0x00000000005167C0 "`"
 *   insn=0x00000000005167CC string=0x00000000005167D0 "J"
 *   insn=0x00000000005167D0 string=0x00000000005167D4 "@ "
 *   insn=0x00000000005167D8 string=0x00000000005167DC "a!"
 *   insn=0x00000000005167EC string=0x00000000005167F0 "`( "
 *   insn=0x00000000005167F0 string=0x00000000005167F4 "`"
 *   insn=0x00000000005167F4 string=0x00000000005167F8 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTTransformVec3Array(__int64 a1, int a2, __int64 a3, int a4, float *a5, int a6)
{
  float *v6; // x10
  float *v7; // x11
  float v8; // s2
  float v9; // s3
  float v10; // s5
  float result; // s0

  if ( a6 >= 1 )
  {
    v6 = (float *)(a3 + 8);
    v7 = (float *)(a1 + 8);
    do
    {
      v8 = *(v6 - 2);
      v9 = *(v6 - 1);
      v10 = *v6;
      *(v7 - 2) = a5[12] + (float)((float)((float)(*a5 * v8) + (float)(a5[4] * v9)) + (float)(a5[8] * *v6));
      *(v7 - 1) = a5[13] + (float)((float)((float)(v8 * a5[1]) + (float)(v9 * a5[5])) + (float)(v10 * a5[9]));
      *v7 = a5[14] + (float)((float)((float)(v8 * a5[2]) + (float)(v9 * a5[6])) + (float)(v10 * a5[10]));
      --a6;
      v6 = (float *)((char *)v6 + a4);
      result = a5[15] + (float)((float)((float)(v8 * a5[3]) + (float)(v9 * a5[7])) + (float)(v10 * a5[11]));
      v7[1] = result;
      v7 = (float *)((char *)v7 + a2);
    }
    while ( a6 );
  }
  return result;
}

