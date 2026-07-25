/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B12A4
 * Mangled: _ZNK5Caver19SimpleGlowComponent9localAABBEv
 * Demangled: Caver::SimpleGlowComponent::localAABB(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::SimpleGlowComponent::localAABB@<S0>(Caver::SimpleGlowComponent *this@<X0>, float *a2@<X8>)
{
  float v2; // s0
  float v3; // s1
  float result; // s0

  v2 = *((float *)this + 45);
  v3 = -v2;
  result = v2 + v2;
  *a2 = v3;
  a2[1] = v3;
  a2[2] = result;
  a2[3] = result;
  return result;
}

