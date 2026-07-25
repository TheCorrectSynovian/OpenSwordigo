/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000286840
 * Mangled: _ZN5Caver18MagicBombComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::MagicBombComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *   0x0000000000286890  Caver::MagicBombComponent::className(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000028684C string=0x0000000000286850 "BDB"
 *   insn=0x000000000028685C string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000286860 string=0x0000000000286864 "B4D"
 *   insn=0x0000000000286864 string=0x00000000002821FC " #"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBombComponent::RegisterInterfaces(
        Caver::MagicBombComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MagicBombComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SpellComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

