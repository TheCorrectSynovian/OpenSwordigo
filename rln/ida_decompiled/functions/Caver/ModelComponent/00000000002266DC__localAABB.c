/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002266DC
 * Mangled: _ZNK5Caver14ModelComponent9localAABBEv
 * Demangled: Caver::ModelComponent::localAABB(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002266DC string=0x00000000002266E0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::ModelComponent::localAABB@<Q0>(Caver::ModelComponent *this@<X0>, long double *a2@<X8>)
{
  long double result; // q0

  result = *(long double *)((char *)this + 284);
  *a2 = result;
  return result;
}

