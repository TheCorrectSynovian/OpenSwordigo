/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282140
 * Mangled: _ZN5Caver23DimensionSpellComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::DimensionSpellComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002821F0  Caver::DimensionSpellComponent::Interface(void)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x000000000028214C string=0x0000000000282150 "BXF"
 *   insn=0x000000000028215C string=0x0000000000282160 ""#"
 *   insn=0x000000000028215C string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000282160 string=0x0000000000282164 "B4D"
 *   insn=0x0000000000282164 string=0x00000000002821FC " #"
 *   insn=0x0000000000282180 string=0x0000000000282184 "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DimensionSpellComponent::RegisterInterfaces(
        Caver::DimensionSpellComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::DimensionSpellComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SpellComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

