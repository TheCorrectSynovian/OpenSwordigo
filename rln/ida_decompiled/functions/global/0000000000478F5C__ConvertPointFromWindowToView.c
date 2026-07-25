/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000478F5C
 * Mangled: _Z28ConvertPointFromWindowToViewRKN5Caver7Vector2E
 * Demangled: ConvertPointFromWindowToView(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000478F60 string=0x0000000000478F64 ")"
 *   insn=0x0000000000478F68 string=0x0000000000478F6C "AIF"
 *   insn=0x0000000000478F6C string=0x0000000000478F70 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall ConvertPointFromWindowToView@<D0>(float32x2_t *a1@<X0>, float32x2_t *a2@<X8>)
{
  const float *v2; // x9
  float32x2_t v3; // d2
  float32x2_t result; // d0

  v2 = (const float *)&dword_6E9CA8;
  v3.n64_u64[0] = vld1_dup_f32(v2).n64_u64[0];
  result.n64_u64[0] = vdiv_f32(vsub_f32((float32x2_t)a1->n64_u64[0], (float32x2_t)qword_6E9C90), v3).n64_u64[0];
  a2->n64_u64[0] = result.n64_u64[0];
  return result;
}

