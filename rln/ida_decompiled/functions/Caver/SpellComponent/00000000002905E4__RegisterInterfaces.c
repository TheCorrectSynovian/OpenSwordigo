/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002905E4
 * Mangled: _ZN5Caver14SpellComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SpellComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002905F0 string=0x00000000002905F4 "B4D"
 *   insn=0x00000000002905F4 string=0x00000000002821FC " #"
 *   insn=0x0000000000290600 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000290610 string=0x0000000000290614 "/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpellComponent::RegisterInterfaces(Caver::SpellComponent *this, Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SpellComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

