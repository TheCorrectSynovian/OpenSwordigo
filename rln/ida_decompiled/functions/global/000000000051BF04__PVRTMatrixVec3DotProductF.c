/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051BF04
 * Mangled: _Z25PVRTMatrixVec3DotProductFRK12PVRTVECTOR3fS1_
 * Demangled: PVRTMatrixVec3DotProductF(PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Callers: 1
 *   0x00000000001FEF90  PVRTMatrixVec3DotProductF(PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000051BF04 string=0x000000000051BF08 "!"
 *   insn=0x000000000051BF0C string=0x000000000051BF10 "#@@"
 *   insn=0x000000000051BF14 string=0x000000000051BF18 "A"
 *   insn=0x000000000051BF1C string=0x000000000051BF20 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTMatrixVec3DotProductF(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // d1

  v2 = vmul_f32(*(float32x2_t *)(a1 + 4), *(float32x2_t *)(a2 + 4)).n64_u64[0];
  return (float)((float)(*(float *)a1 * *(float *)a2) + *(float *)&v2) + *((float *)&v2 + 1);
}

