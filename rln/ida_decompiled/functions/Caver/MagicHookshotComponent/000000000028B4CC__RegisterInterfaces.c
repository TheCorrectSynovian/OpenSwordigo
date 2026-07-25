/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028B4CC
 * Mangled: _ZN5Caver22MagicHookshotComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::MagicHookshotComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *   0x000000000028B51C  Caver::MagicHookshotComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000028B4D8 string=0x000000000028B4DC "B|@"
 *   insn=0x000000000028B4E8 string=0x00000000001F38A0 "P'"
 *   insn=0x000000000028B4EC string=0x000000000028B4F0 "B4D"
 *   insn=0x000000000028B4F0 string=0x00000000002821FC " #"
 *   insn=0x000000000028B50C string=0x000000000028B510 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicHookshotComponent::RegisterInterfaces(
        Caver::MagicHookshotComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MagicHookshotComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SpellComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

