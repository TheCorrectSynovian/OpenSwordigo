/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003152B0
 * Mangled: _ZN5Caver5Proto27ElevatorControllerComponent10SharedCtorEv
 * Demangled: Caver::Proto::ElevatorControllerComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::ElevatorControllerComponent::SharedCtor(
        Caver::Proto::ElevatorControllerComponent *this)
{
  long double result; // q0

  result = *(long double *)&xmmword_58B480;
  *(_OWORD *)((char *)this + 8) = xmmword_58B480;
  return result;
}

