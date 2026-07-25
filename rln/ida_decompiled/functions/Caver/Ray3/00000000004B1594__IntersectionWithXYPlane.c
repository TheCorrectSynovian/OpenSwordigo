/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1594
 * Mangled: _ZNK5Caver4Ray323IntersectionWithXYPlaneEf
 * Demangled: Caver::Ray3::IntersectionWithXYPlane(float)
 *
 * Callers: 1
 *   0x00000000001F7D10  Caver::Ray3::IntersectionWithXYPlane(float)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004B15A8 string=0x00000000004B15AC "c"
 *   insn=0x00000000004B15B0 string=0x00000000004B15B4 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Ray3::IntersectionWithXYPlane@<S0>(Caver::Ray3 *this@<X0>, float a2@<S0>, float32x2_t *a3@<X8>)
{
  float v3; // s1
  float v4; // s2
  float v5; // s0
  float32x2_t v6; // d3
  float result; // s0

  v3 = *((float *)this + 2);
  v4 = *((float *)this + 5);
  v5 = (float)(a2 - v3) / v4;
  v6.n64_u64[0] = vmul_n_f32(*(float32x2_t *)((char *)this + 12), v5).n64_u64[0];
  result = (float)(v5 * v4) + v3;
  a3->n64_u64[0] = vadd_f32(v6, *(float32x2_t *)this).n64_u64[0];
  a3[1].n64_f32[0] = result;
  return result;
}

