/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ABB20
 * Mangled: _ZNK5Caver13BezierSegment18ApproximatedLengthEv
 * Demangled: Caver::BezierSegment::ApproximatedLength(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 14
 *   insn=0x00000000004ABB30 string=0x00000000004ABB34 "`"
 *   insn=0x00000000004ABB34 string=0x00000000004ABB38 "b"
 *   insn=0x00000000004ABB40 string=0x00000000004ABB44 "\t"
 *   insn=0x00000000004ABB44 string=0x00000000004ABB48 " "
 *   insn=0x00000000004ABB50 string=0x00000000004ABB54 ""
 *   insn=0x00000000004ABB58 string=0x00000000004ABB5C "g"
 *   insn=0x00000000004ABB5C string=0x00000000004ABB60 "tF"
 *   insn=0x00000000004ABB5C string=0x00000000004ABB68 "`"
 *   insn=0x00000000004ABB60 string=0x00000000004ABB64 ""
 *   insn=0x00000000004ABB60 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004ABB74 string=0x00000000004ABB78 " "
 *   insn=0x00000000004ABB7C string=0x00000000004ABB80 "g"
 *   insn=0x00000000004ABB80 string=0x00000000004ABB84 " "
 *   insn=0x00000000004ABB84 string=0x00000000004ABB88 "jF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::BezierSegment::ApproximatedLength(float32x2_t *this)
{
  float32x2_t v1; // d9
  float32x2_t v2; // d0
  float v3; // s8
  float32x2_t v4; // d0

  v1.n64_u64[0] = vmul_f32(vadd_f32(this[1], this[2]), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v2.n64_u64[0] = vsub_f32(v1, (float32x2_t)this->n64_u64[0]).n64_u64[0];
  v3 = sqrtf(vaddv_f32(vmul_f32(v2, v2)));
  v4.n64_u64[0] = vsub_f32(this[3], v1).n64_u64[0];
  return v3 + sqrtf(vaddv_f32(vmul_f32(v4, v4)));
}

