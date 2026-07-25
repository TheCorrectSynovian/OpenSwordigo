/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ABC08
 * Mangled: _ZNK5Caver13BezierSegment15EvaluateTangentEf
 * Demangled: Caver::BezierSegment::EvaluateTangent(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *
 * Referenced strings: 27
 *   insn=0x00000000004ABC08 string=0x00000000004ABC0C "!"
 *   insn=0x00000000004ABC0C string=0x00000000004ABC10 "i"
 *   insn=0x00000000004ABC10 string=0x00000000004ABC14 "%"
 *   insn=0x00000000004ABC10 string=0x00000000005972E0 "X"
 *   insn=0x00000000004ABC24 string=0x00000000004ABC28 "A8 "
 *   insn=0x00000000004ABC30 string=0x00000000004ABC34 ""
 *   insn=0x00000000004ABC38 string=0x00000000004ABC3C "##"
 *   insn=0x00000000004ABC40 string=0x00000000004ABC44 "$&"
 *   insn=0x00000000004ABC44 string=0x00000000004ABC48 "%'"
 *   insn=0x00000000004ABC4C string=0x00000000004ABC50 "c"
 *   insn=0x00000000004ABC58 string=0x00000000004ABC5C "Bc"
 *   insn=0x00000000004ABC60 string=0x00000000004ABC64 "!$"
 *   insn=0x00000000004ABC68 string=0x00000000004ABC6C "!8 "
 *   insn=0x00000000004ABC6C string=0x00000000004ABC70 "B@b"
 *   insn=0x00000000004ABC78 string=0x00000000004ABC7C "b"
 *   insn=0x00000000004ABC80 string=0x00000000004ABC84 "A"
 *   insn=0x00000000004ABC8C string=0x00000000004ABC90 " "
 *   insn=0x00000000004ABC90 string=0x00000000004ABC94 ")"
 *   insn=0x00000000004ABC9C string=0x00000000004ABCA0 """
 *   insn=0x00000000004ABCA0 string=0x00000000004ABCA4 "A"
 *   insn=0x00000000004ABCA4 string=0x00000000004ABCA8 ")"
 *   insn=0x00000000004ABCAC string=0x00000000004ABCB0 ")<"
 *   insn=0x00000000004ABCB4 string=0x00000000004ABCB8 "i"
 *   insn=0x00000000004ABCB8 string=0x00000000004ABCBC " yA"
 *   insn=0x00000000004ABCB8 string=0x00000000005972F0 "o"
 *   insn=0x00000000004ABCCC string=0x00000000004ABCD0 "P4"
 *   insn=0x00000000004ABCD0 string=0x00000000001F8E10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t *__usercall Caver::BezierSegment::EvaluateTangent@<X0>(
        float32x2_t *this@<X0>,
        float a2@<S0>,
        Caver::Vector2 *a3@<X8>)
{
  float v3; // s0
  float v4; // s2
  float32x2_t v5; // d0
  unsigned __int64 v6; // d1

  v3 = fminf(fmaxf(a2, 0.00001), 0.99999);
  v4 = (1.0 - v3) * (float)((float)(1.0 - v3) * -3.0);
  v5.n64_u64[0] = vadd_f32(
                    vadd_f32(
                      vadd_f32(
                        vmul_n_f32((float32x2_t)this->n64_u64[0], v4),
                        vmul_n_f32(
                          this[1],
                          (float)((float)(1.0 - v3) * (float)((float)(1.0 - v3) * 3.0))
                        - (float)(v3 * (float)((float)(1.0 - v3) * 6.0)))),
                      vmul_n_f32(
                        this[2],
                        (float)(v3 * (float)((float)(1.0 - v3) * 6.0)) - (float)(v3 * (float)(v3 * 3.0)))),
                    vmul_n_f32(this[3], v3 * (float)(v3 * 3.0))).n64_u64[0];
  v6 = vcge_f32(vdup_n_s32(0x38D1B717u), vabs_f32(v5)).n64_u64[0];
  if ( (v6 & 1) != 0 && (v6 & 0x100000000LL) != 0 )
  {
    *(_QWORD *)a3 = 981668463;
  }
  else
  {
    *(float32x2_t *)a3 = v5;
    return (float32x2_t *)Caver::Vector2::Normalize(a3);
  }
  return this;
}

