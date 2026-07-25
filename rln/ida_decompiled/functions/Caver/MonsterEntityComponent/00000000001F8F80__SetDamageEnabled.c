/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8F80
 * Mangled: ._ZN5Caver22MonsterEntityComponent16SetDamageEnabledEb
 * Demangled: Caver::MonsterEntityComponent::SetDamageEnabled(bool)
 *
 * Callers: 1
 *   0x00000000002962EC  Caver::ChargingMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000027BF04  Caver::MonsterEntityComponent::SetDamageEnabled(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8F84 string=0x000000000027BF04 ""
 *   insn=0x00000000001F8F88 string=0x00000000001F8F8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterEntityComponent::SetDamageEnabled(Caver::MonsterEntityComponent *this, bool a2)
{
  return _ZN5Caver22MonsterEntityComponent16SetDamageEnabledEb(this, a2);
}

