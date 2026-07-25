/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513500
 * Mangled: _Z32PVRTMatrixQuaternionToAxisAngleFRK15PVRTQUATERNIONfR12PVRTVECTOR3fRf
 * Demangled: PVRTMatrixQuaternionToAxisAngleF(PVRTQUATERNIONf const&,PVRTVECTOR3f &,float &)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA060  .acos
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 14
 *   insn=0x0000000000513518 string=0x000000000051351C "\t"
 *   insn=0x000000000051352C string=0x0000000000513530 "(9!"
 *   insn=0x0000000000513534 string=0x00000000001FA060 "0'"
 *   insn=0x000000000051353C string=0x0000000000513540 "!(!"
 *   insn=0x0000000000513548 string=0x000000000051354C "g"
 *   insn=0x000000000051354C string=0x0000000000513558 "("
 *   insn=0x0000000000513554 string=0x00000000001FD530 "0'"
 *   insn=0x0000000000513558 string=0x0000000000597350 "o"
 *   insn=0x0000000000513568 string=0x000000000051356C "@ !"
 *   insn=0x000000000051356C string=0x0000000000513570 " M "
 *   insn=0x0000000000513574 string=0x0000000000513578 "a"
 *   insn=0x0000000000513578 string=0x000000000051357C "a"
 *   insn=0x0000000000513580 string=0x0000000000513584 " "
 *   insn=0x0000000000513584 string=0x0000000000513588 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTMatrixQuaternionToAxisAngleF(float32x2_t *a1, float32x2_t *a2, float *a3)
{
  float v4; // s0
  float v7; // s8
  float v8; // s1
  int32x2_t v9; // d0
  float result; // s0

  v4 = a1[1].n64_f32[1];
  v7 = 1.0 - (float)(v4 * v4);
  v9.n64_f64[0] = acos(v4);
  v8 = v9.n64_f64[0];
  v9.n64_f32[0] = sqrtf(v7);
  *a3 = v8 + v8;
  if ( fabsf(v9.n64_f32[0]) < 0.0005 )
    v9.n64_f32[0] = 1.0;
  a2->n64_u64[0] = vdiv_f32((float32x2_t)a1->n64_u64[0], vdup_lane_s32(v9, 0)).n64_u64[0];
  result = a1[1].n64_f32[0] / v9.n64_f32[0];
  a2[1].n64_f32[0] = result;
  return result;
}

