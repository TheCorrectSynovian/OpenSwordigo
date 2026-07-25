/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215510
 * Mangled: _ZNK5Caver23CollisionShapeComponent9localAABBEv
 * Demangled: Caver::CollisionShapeComponent::localAABB(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000215510 string=0x0000000000215514 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::CollisionShapeComponent::localAABB@<Q0>(
        Caver::CollisionShapeComponent *this@<X0>,
        long double *a2@<X8>)
{
  long double result; // q0

  result = *(long double *)((char *)this + 344);
  *a2 = result;
  return result;
}

