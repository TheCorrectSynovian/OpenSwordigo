/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA620
 * Mangled: ._ZN5Caver15HealthComponent6UpdateEf
 * Demangled: Caver::HealthComponent::Update(float)
 *
 * Callers: 1
 *   0x0000000000270F8C  Caver::HealthComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000270F8C  Caver::HealthComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA628 string=0x00000000001FA62C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HealthComponent::Update(Caver::HealthComponent *this, float a2)
{
  return _ZN5Caver15HealthComponent6UpdateEf(this, a2);
}

