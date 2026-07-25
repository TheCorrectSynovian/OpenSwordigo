/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CC38
 * Mangled: _ZNK5Caver15SpriteComponent9localAABBEv
 * Demangled: Caver::SpriteComponent::localAABB(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::SpriteComponent::localAABB@<Q0>(Caver::SpriteComponent *this@<X0>, long double *a2@<X8>)
{
  long double result; // q0

  result = *(long double *)((char *)this + 136);
  *a2 = result;
  return result;
}

