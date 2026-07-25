/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C33EC
 * Mangled: _ZNK5Caver18WaterMeshComponent9localAABBEv
 * Demangled: Caver::WaterMeshComponent::localAABB(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::WaterMeshComponent::localAABB@<Q0>(
        Caver::WaterMeshComponent *this@<X0>,
        long double *a2@<X8>)
{
  long double result; // q0

  result = *(long double *)((char *)this + 136);
  *a2 = result;
  return result;
}

