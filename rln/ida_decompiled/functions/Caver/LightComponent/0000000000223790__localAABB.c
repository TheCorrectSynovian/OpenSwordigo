/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000223790
 * Mangled: _ZNK5Caver14LightComponent9localAABBEv
 * Demangled: Caver::LightComponent::localAABB(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000223794 string=0x0000000000223798 "\n"
 *   insn=0x0000000000223798 string=0x000000000022379C "!qO"
 *   insn=0x000000000022379C string=0x00000000002237A0 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::LightComponent::localAABB@<S0>(Caver::LightComponent *this@<X0>, float *a2@<X8>)
{
  float v2; // s0
  float v3; // s1
  float result; // s0

  v2 = fmaxf(*((float *)this + 39) + -200.0, 50.0);
  v3 = -v2;
  result = v2 + v2;
  *a2 = v3;
  a2[1] = v3;
  a2[2] = result;
  a2[3] = result;
  return result;
}

