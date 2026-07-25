/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003328C8
 * Mangled: _ZN5Caver5Proto18MagicBoltComponent10SharedCtorEv
 * Demangled: Caver::Proto::MagicBoltComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::MagicBoltComponent::SharedCtor(Caver::Proto::MagicBoltComponent *this)
{
  long double result; // q0

  *(_OWORD *)&result = 0u;
  *(_OWORD *)((char *)this + 24) = 0u;
  *(_OWORD *)((char *)this + 8) = 0u;
  return result;
}

