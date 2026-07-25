/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333368
 * Mangled: _ZN5Caver5Proto23MagicExplosionComponent10SharedCtorEv
 * Demangled: Caver::Proto::MagicExplosionComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::MagicExplosionComponent::SharedCtor(Caver::Proto::MagicExplosionComponent *this)
{
  long double result; // q0

  *(_OWORD *)&result = 0u;
  *(_OWORD *)((char *)this + 24) = 0u;
  *(_OWORD *)((char *)this + 8) = 0u;
  return result;
}

