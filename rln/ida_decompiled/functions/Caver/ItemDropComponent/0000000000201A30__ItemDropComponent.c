/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201A30
 * Mangled: ._ZN5Caver17ItemDropComponentC2Ev
 * Demangled: Caver::ItemDropComponent::ItemDropComponent(void)
 *
 * Callers: 4
 *   0x00000000002506B8  Caver::ItemDropComponent::Create(void)
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x0000000000275948  Caver::ItemDropComponent::ItemDropComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201A38 string=0x0000000000201A3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemDropComponent::ItemDropComponent(Caver::ItemDropComponent *this)
{
  return _ZN5Caver17ItemDropComponentC2Ev(this);
}

