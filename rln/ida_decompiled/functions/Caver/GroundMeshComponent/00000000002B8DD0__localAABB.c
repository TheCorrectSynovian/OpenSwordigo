/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8DD0
 * Mangled: _ZNK5Caver19GroundMeshComponent9localAABBEv
 * Demangled: Caver::GroundMeshComponent::localAABB(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::GroundMeshComponent::localAABB@<Q0>(
        Caver::GroundMeshComponent *this@<X0>,
        long double *a2@<X8>)
{
  long double result; // q0

  result = *((long double *)this + 10);
  *a2 = result;
  return result;
}

