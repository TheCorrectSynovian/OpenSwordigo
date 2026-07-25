/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032BB5C
 * Mangled: _ZN5Caver5Proto19WeaponGlowComponent10SharedCtorEv
 * Demangled: Caver::Proto::WeaponGlowComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::WeaponGlowComponent::SharedCtor(Caver::Proto::WeaponGlowComponent *this)
{
  long double result; // q0

  *(_OWORD *)&result = 0u;
  *(_OWORD *)((char *)this + 24) = 0u;
  *(_OWORD *)((char *)this + 8) = 0u;
  return result;
}

