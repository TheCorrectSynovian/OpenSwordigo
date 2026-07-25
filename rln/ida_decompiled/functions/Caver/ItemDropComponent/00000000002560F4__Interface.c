/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002560F4
 * Mangled: _ZN5Caver17ItemDropComponent9InterfaceEv
 * Demangled: Caver::ItemDropComponent::Interface(void)
 *
 * Callers: 11
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x00000000002560F4  Caver::ItemDropComponent::Interface(void)
 *   0x0000000000279D28  sub_279D28
 *   0x0000000000279D94  sub_279D94
 *   0x0000000000279E68  sub_279E68
 *   0x0000000000279EBC  sub_279EBC
 *   0x0000000000279F40  sub_279F40
 *   0x000000000027A41C  Caver::ItemDropComponent::ImplementsInterface(long)
 *   0x000000000027A430  Caver::ItemDropComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::ItemDropComponent::Interface(
        Caver::ItemDropComponent *this))(Caver::ItemDropComponent *__hidden this)
{
  return Caver::ItemDropComponent::Interface;
}

