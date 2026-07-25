/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B50EC
 * Mangled: _ZNK5Caver27ElevatorControllerComponent9localAABBEv
 * Demangled: Caver::ElevatorControllerComponent::localAABB(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::ElevatorControllerComponent::localAABB@<Q0>(
        Caver::ElevatorControllerComponent *this@<X0>,
        long double *a2@<X8>)
{
  long double result; // q0

  result = *(long double *)((char *)this + 136);
  *a2 = result;
  return result;
}

