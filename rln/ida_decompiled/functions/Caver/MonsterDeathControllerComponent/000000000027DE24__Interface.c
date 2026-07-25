/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027DE24
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent9InterfaceEv
 * Demangled: Caver::MonsterDeathControllerComponent::Interface(void)
 *
 * Callers: 4
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000027DE24  Caver::MonsterDeathControllerComponent::Interface(void)
 *   0x000000000029B6B8  Caver::MonsterDeathControllerComponent::ImplementsInterface(long)
 *   0x000000000029B6CC  Caver::MonsterDeathControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000027DE28 string=0x000000000027DE24 "@#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::MonsterDeathControllerComponent::Interface(
        Caver::MonsterDeathControllerComponent *this))(Caver::MonsterDeathControllerComponent *__hidden this)
{
  return Caver::MonsterDeathControllerComponent::Interface;
}

