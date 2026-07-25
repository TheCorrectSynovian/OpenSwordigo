/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ABA84
 * Mangled: _ZNK5Caver13BezierSegment20ControlPolygonLengthEv
 * Demangled: Caver::BezierSegment::ControlPolygonLength(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 19
 *   insn=0x00000000004ABA94 string=0x00000000004ABA98 "`"
 *   insn=0x00000000004ABA98 string=0x00000000004ABA9C " "
 *   insn=0x00000000004ABAA4 string=0x00000000004ABAA8 ""
 *   insn=0x00000000004ABAAC string=0x00000000004ABAB0 "g"
 *   insn=0x00000000004ABAB0 string=0x00000000004ABABC "`"
 *   insn=0x00000000004ABAB4 string=0x00000000004ABAB8 ""
 *   insn=0x00000000004ABAB4 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004ABABC string=0x00000000004ABAC0 " "
 *   insn=0x00000000004ABAC8 string=0x00000000004ABACC " "
 *   insn=0x00000000004ABAD0 string=0x00000000004ABAD4 "g"
 *   insn=0x00000000004ABAD4 string=0x00000000004ABAD8 " "
 *   insn=0x00000000004ABAD4 string=0x00000000004ABAE0 "a\nAm) "
 *   insn=0x00000000004ABAE0 string=0x00000000004ABAE4 ") "
 *   insn=0x00000000004ABAE4 string=0x00000000004ABAE8 "A"
 *   insn=0x00000000004ABAE8 string=0x00000000004ABAEC "!"
 *   insn=0x00000000004ABAEC string=0x00000000004ABAF0 """
 *   insn=0x00000000004ABAF0 string=0x00000000004ABAF4 "A"
 *   insn=0x00000000004ABAF4 string=0x00000000004ABAF8 "  !"
 *   insn=0x00000000004ABAFC string=0x00000000004ABB00 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::BezierSegment::ControlPolygonLength(float32x2_t *this)
{
  float32x2_t v2; // d0
  float v3; // s8
  float32x2_t v4; // d0
  float32x2_t v5; // d1

  v2.n64_u64[0] = vsub_f32(this[1], (float32x2_t)this->n64_u64[0]).n64_u64[0];
  v3 = sqrtf(vaddv_f32(vmul_f32(v2, v2)));
  v4.n64_u64[0] = vsub_f32(this[2], this[1]).n64_u64[0];
  v5.n64_u64[0] = vsub_f32(this[3], this[2]).n64_u64[0];
  return (float)(v3 + sqrtf(vaddv_f32(vmul_f32(v4, v4)))) + sqrtf(vaddv_f32(vmul_f32(v5, v5)));
}

