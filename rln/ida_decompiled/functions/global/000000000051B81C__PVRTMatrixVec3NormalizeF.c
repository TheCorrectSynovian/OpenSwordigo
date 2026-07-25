/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051B81C
 * Mangled: _Z24PVRTMatrixVec3NormalizeFR12PVRTVECTOR3fRKS_
 * Demangled: PVRTMatrixVec3NormalizeF(PVRTVECTOR3f &,PVRTVECTOR3f const&)
 *
 * Callers: 1
 *   0x00000000001F3540  PVRTMatrixVec3NormalizeF(PVRTVECTOR3f &,PVRTVECTOR3f const&)
 *
 * Callees: 1
 *   0x00000000001FA690  .sqrt
 *
 * Referenced strings: 13
 *   insn=0x000000000051B828 string=0x000000000051B82C "`"
 *   insn=0x000000000051B82C string=0x000000000051B830 "b\n@"
 *   insn=0x000000000051B838 string=0x000000000051B83C "!!"
 *   insn=0x000000000051B840 string=0x000000000051B844 "A""
 *   insn=0x000000000051B84C string=0x000000000051B850 " "
 *   insn=0x000000000051B854 string=0x000000000051B858 "g"
 *   insn=0x000000000051B858 string=0x000000000051B85C " "
 *   insn=0x000000000051B858 string=0x000000000051B864 "a"
 *   insn=0x000000000051B860 string=0x00000000001FA690 "0'"
 *   insn=0x000000000051B868 string=0x000000000051B86C "@"
 *   insn=0x000000000051B870 string=0x000000000051B874 "!"
 *   insn=0x000000000051B878 string=0x000000000051B87C "a\n@"
 *   insn=0x000000000051B87C string=0x000000000051B880 "  "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTMatrixVec3NormalizeF(float32x2_t *a1, float32x2_t *a2)
{
  float v2; // s0
  float result; // s0

  v2 = 1.0
     / sqrt((float)((float)((float)(a2->n64_f32[0] * a2->n64_f32[0]) + (float)(a2->n64_f32[1] * a2->n64_f32[1]))
                  + (float)(a2[1].n64_f32[0] * a2[1].n64_f32[0])));
  a1->n64_u64[0] = vmul_n_f32((float32x2_t)a2->n64_u64[0], v2).n64_u64[0];
  result = a2[1].n64_f32[0] * v2;
  a1[1].n64_f32[0] = result;
  return result;
}

