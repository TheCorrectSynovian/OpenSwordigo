/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051BED0
 * Mangled: _Z19PVRTMatrixVec3LerpFR12PVRTVECTOR3fRKS_S2_f
 * Demangled: PVRTMatrixVec3LerpF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,float)
 *
 * Callers: 1
 *   0x0000000000201470  PVRTMatrixVec3LerpF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,float)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000051BED0 string=0x000000000051BED4 "B"
 *   insn=0x000000000051BED4 string=0x000000000051BED8 "B"
 *   insn=0x000000000051BED8 string=0x000000000051BEDC "B"
 *   insn=0x000000000051BEDC string=0x000000000051BEE0 "!"
 *   insn=0x000000000051BEE4 string=0x000000000051BEE8 "!@"
 *   insn=0x000000000051BEE8 string=0x000000000051BEEC "B@"
 *   insn=0x000000000051BEEC string=0x000000000051BEF0 "B8!"
 *   insn=0x000000000051BEF0 string=0x000000000051BEF4 "@ "
 *   insn=0x000000000051BEF4 string=0x000000000051BEF8 " ( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTMatrixVec3LerpF(float32x2_t *a1, float32x2_t *a2, float32x2_t *a3, float a4)
{
  float result; // s0

  a1->n64_u64[0] = vadd_f32(
                     (float32x2_t)a2->n64_u64[0],
                     vmul_n_f32(vsub_f32((float32x2_t)a3->n64_u64[0], (float32x2_t)a2->n64_u64[0]), a4)).n64_u64[0];
  result = a2[1].n64_f32[0] + (float)((float)(a3[1].n64_f32[0] - a2[1].n64_f32[0]) * a4);
  a1[1].n64_f32[0] = result;
  return result;
}

