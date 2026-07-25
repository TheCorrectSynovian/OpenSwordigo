/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ABBA0
 * Mangled: _ZNK5Caver13BezierSegment16EvaluatePositionEf
 * Demangled: Caver::BezierSegment::EvaluatePosition(float)
 *
 * Callers: 1
 *   0x00000000001F7510  Caver::BezierSegment::EvaluatePosition(float)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000004ABBB4 string=0x00000000004ABBB8 "A8 "
 *   insn=0x00000000004ABBC8 string=0x00000000004ABBCC "B!"
 *   insn=0x00000000004ABBCC string=0x00000000004ABBD0 "&!"
 *   insn=0x00000000004ABBD0 string=0x00000000004ABBD4 """"
 *   insn=0x00000000004ABBD4 string=0x00000000004ABBD8 "&&"
 *   insn=0x00000000004ABBD8 string=0x00000000004ABBDC "  "
 *   insn=0x00000000004ABBE8 string=0x00000000004ABBEC " "
 *   insn=0x00000000004ABBF0 string=0x00000000004ABBF4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::BezierSegment::EvaluatePosition@<D0>(
        float32x2_t *this@<X0>,
        float a2@<S0>,
        float32x2_t *a3@<X8>)
{
  float v3; // s0
  float32x2_t result; // d0

  v3 = fminf(fmaxf(a2, 0.0), 1.0);
  result.n64_u64[0] = vadd_f32(
                        vadd_f32(
                          vadd_f32(
                            vmul_n_f32(
                              (float32x2_t)this->n64_u64[0],
                              (float)(1.0 - v3) * (float)((float)(1.0 - v3) * (float)(1.0 - v3))),
                            vmul_n_f32(this[1], (float)(1.0 - v3) * (float)((float)(v3 * 3.0) * (float)(1.0 - v3)))),
                          vmul_n_f32(this[2], (float)(1.0 - v3) * (float)(v3 * (float)(v3 * 3.0)))),
                        vmul_n_f32(this[3], v3 * (float)(v3 * v3))).n64_u64[0];
  a3->n64_u64[0] = result.n64_u64[0];
  return result;
}

