/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002821FC
 * Mangled: _ZN5Caver14SpellComponent9InterfaceEv
 * Demangled: Caver::SpellComponent::Interface(void)
 *
 * Callers: 15
 *   0x0000000000282118  Caver::DimensionSpellComponent::ImplementsInterface(long)
 *   0x0000000000282140  Caver::DimensionSpellComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *   0x0000000000283048  Caver::FireBreathComponent::ImplementsInterface(long)
 *   0x0000000000283070  Caver::FireBreathComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000285794  Caver::MagicBoltComponent::ImplementsInterface(long)
 *   0x00000000002857BC  Caver::MagicBoltComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000286818  Caver::MagicBombComponent::ImplementsInterface(long)
 *   0x0000000000286840  Caver::MagicBombComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000028B4A4  Caver::MagicHookshotComponent::ImplementsInterface(long)
 *   0x000000000028B4CC  Caver::MagicHookshotComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000028E580  Caver::SkillComponent::CreateSpellObject(void)
 *   0x0000000000290364  sub_290364
 *   0x00000000002905D0  Caver::SpellComponent::ImplementsInterface(long)
 *   0x00000000002905E4  Caver::SpellComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000282200 string=0x00000000002821FC " #"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::SpellComponent::Interface(
        Caver::SpellComponent *this))(Caver::SpellComponent *__hidden this)
{
  return Caver::SpellComponent::Interface;
}

