/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003197C4
 * Mangled: _ZN5Caver5Proto25EntityControllerComponent10SharedCtorEv
 * Demangled: Caver::Proto::EntityControllerComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::EntityControllerComponent::SharedCtor(Caver::Proto::EntityControllerComponent *this)
{
  double result; // d0

  *(_QWORD *)&result = 1;
  *(_OWORD *)((char *)this + 24) = 0u;
  *(_OWORD *)((char *)this + 8) = 0u;
  *((_QWORD *)this + 5) = 1;
  return result;
}

