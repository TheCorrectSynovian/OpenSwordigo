/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9780
 * Mangled: ._ZN5Caver17ItemDropComponent7TriggerEv
 * Demangled: Caver::ItemDropComponent::Trigger(void)
 *
 * Callers: 3
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x000000000027845C  Caver::ItemDropComponent::Trigger(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9788 string=0x00000000001F978C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemDropComponent::Trigger(Caver::ItemDropComponent *this)
{
  return _ZN5Caver17ItemDropComponent7TriggerEv(this);
}

