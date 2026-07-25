/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C0758
 * Mangled: _ZNK5Caver22GroundPolygonComponent9localAABBEv
 * Demangled: Caver::GroundPolygonComponent::localAABB(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::GroundPolygonComponent::localAABB@<Q0>(
        Caver::GroundPolygonComponent *this@<X0>,
        long double *a2@<X8>)
{
  long double result; // q0

  result = *(long double *)((char *)this + 152);
  *a2 = result;
  return result;
}

