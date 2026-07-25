/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305168
 * Mangled: _ZN5Caver5Proto33ModelTransformControllerComponent10SharedCtorEv
 * Demangled: Caver::Proto::ModelTransformControllerComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::ModelTransformControllerComponent::SharedCtor(
        Caver::Proto::ModelTransformControllerComponent *this)
{
  long double result; // q0

  *(_OWORD *)&result = 0u;
  *((_DWORD *)this + 10) = 0;
  *(_OWORD *)((char *)this + 24) = 0u;
  *(_OWORD *)((char *)this + 8) = 0u;
  return result;
}

