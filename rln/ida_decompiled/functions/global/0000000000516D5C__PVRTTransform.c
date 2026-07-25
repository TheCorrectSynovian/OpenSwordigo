/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000516D5C
 * Mangled: _Z13PVRTTransformP12PVRTVECTOR4fPKS_PK11PVRTMATRIXf
 * Demangled: PVRTTransform(PVRTVECTOR4f *,PVRTVECTOR4f const*,PVRTMATRIXf const*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 26
 *   insn=0x0000000000516D5C string=0x0000000000516D60 "A"
 *   insn=0x0000000000516D60 string=0x0000000000516D64 """
 *   insn=0x0000000000516D64 string=0x0000000000516D68 "D @"
 *   insn=0x0000000000516D68 string=0x0000000000516D6C "&"
 *   insn=0x0000000000516D6C string=0x0000000000516D70 "E0@"
 *   insn=0x0000000000516D74 string=0x0000000000516D78 "!#"
 *   insn=0x0000000000516D90 string=0x0000000000516D94 "@"
 *   insn=0x0000000000516D94 string=0x0000000000516D98 "!"
 *   insn=0x0000000000516D98 string=0x0000000000516D9C "B"
 *   insn=0x0000000000516D9C string=0x0000000000516DA0 "D$@"
 *   insn=0x0000000000516DA0 string=0x0000000000516DA4 "E4@"
 *   insn=0x0000000000516DA8 string=0x0000000000516DAC "b""
 *   insn=0x0000000000516DC4 string=0x0000000000516DC8 "@@"
 *   insn=0x0000000000516DC8 string=0x0000000000516DCC "C"
 *   insn=0x0000000000516DCC string=0x0000000000516DD0 "$"
 *   insn=0x0000000000516DD0 string=0x0000000000516DD4 "B(@"
 *   insn=0x0000000000516DD4 string=0x0000000000516DD8 "E8@"
 *   insn=0x0000000000516DD8 string=0x0000000000516DDC "  "
 *   insn=0x0000000000516DDC string=0x0000000000516DE0 "c$"
 *   insn=0x0000000000516DF8 string=0x0000000000516DFC "@"
 *   insn=0x0000000000516DFC string=0x0000000000516E00 "B"
 *   insn=0x0000000000516E00 string=0x0000000000516E04 "C,@"
 *   insn=0x0000000000516E04 string=0x0000000000516E08 "%@"
 *   insn=0x0000000000516E08 string=0x0000000000516E0C "  "
 *   insn=0x0000000000516E10 string=0x0000000000516E14 "B<@"
 *   insn=0x0000000000516E14 string=0x0000000000516E18 "c%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTTransform(float *a1, float *a2, float *a3)
{
  float v3; // s3
  float v4; // s6
  float v5; // s7
  float v6; // s1
  float v7; // s4
  float result; // s0

  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  *a1 = (float)((float)((float)(*a3 * *a2) + (float)(a3[4] * v3)) + (float)(a3[8] * v4)) + (float)(a3[12] * v5);
  v6 = *a2;
  a1[1] = (float)((float)((float)(a3[1] * *a2) + (float)(v3 * a3[5])) + (float)(v4 * a3[9])) + (float)(v5 * a3[13]);
  v7 = a2[1];
  a1[2] = (float)((float)((float)(v6 * a3[2]) + (float)(a3[6] * v7)) + (float)(v4 * a3[10])) + (float)(v5 * a3[14]);
  result = (float)((float)((float)(v6 * a3[3]) + (float)(v7 * a3[7])) + (float)(a3[11] * a2[2])) + (float)(v5 * a3[15]);
  a1[3] = result;
  return result;
}

