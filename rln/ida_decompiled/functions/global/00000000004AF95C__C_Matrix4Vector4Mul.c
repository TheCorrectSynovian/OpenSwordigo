/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF95C
 * Mangled: _Z19C_Matrix4Vector4MulPKfS0_Pf
 * Demangled: C_Matrix4Vector4Mul(float const*,float const*,float *)
 *
 * Callers: 1
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000004AF960 string=0x00000000004AF964 """
 *   insn=0x00000000004AF968 string=0x00000000004AF96C "&"
 *   insn=0x00000000004AF974 string=0x00000000004AF978 "!#"
 *   insn=0x00000000004AF98C string=0x00000000004AF990 "@"
 *   insn=0x00000000004AF998 string=0x00000000004AF99C """
 *   insn=0x00000000004AF9A0 string=0x00000000004AF9A4 "&"
 *   insn=0x00000000004AF9AC string=0x00000000004AF9B0 "!#"
 *   insn=0x00000000004AF9C4 string=0x00000000004AF9C8 "@"
 *   insn=0x00000000004AF9D0 string=0x00000000004AF9D4 """
 *   insn=0x00000000004AF9D8 string=0x00000000004AF9DC "&"
 *   insn=0x00000000004AF9E4 string=0x00000000004AF9E8 "!#"
 *   insn=0x00000000004AF9FC string=0x00000000004AFA00 "@"
 *   insn=0x00000000004AFA04 string=0x00000000004AFA08 "!"
 *   insn=0x00000000004AFA18 string=0x00000000004AFA1C "B#"
 *   insn=0x00000000004AFA1C string=0x00000000004AFA20 "!"
 *   insn=0x00000000004AFA34 string=0x00000000004AFA38 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall C_Matrix4Vector4Mul(const float *a1, const float *a2, float *a3)
{
  float result; // s0

  *a3 = (float)((float)((float)(*a1 * *a2) + (float)(a1[4] * a2[1])) + (float)(a1[8] * a2[2])) + (float)(a1[12] * a2[3]);
  a3[1] = (float)((float)((float)(a1[1] * *a2) + (float)(a1[5] * a2[1])) + (float)(a1[9] * a2[2]))
        + (float)(a1[13] * a2[3]);
  a3[2] = (float)((float)((float)(a1[2] * *a2) + (float)(a1[6] * a2[1])) + (float)(a1[10] * a2[2]))
        + (float)(a1[14] * a2[3]);
  result = (float)((float)((float)(a1[3] * *a2) + (float)(a1[7] * a2[1])) + (float)(a1[11] * a2[2]))
         + (float)(a1[15] * a2[3]);
  a3[3] = result;
  return result;
}

