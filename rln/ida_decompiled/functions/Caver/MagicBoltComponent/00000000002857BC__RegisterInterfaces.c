/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002857BC
 * Mangled: _ZN5Caver18MagicBoltComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::MagicBoltComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000274E18  std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002857C8 string=0x00000000002857CC "B"
 *   insn=0x00000000002857D4 string=0x00000000002857D8 "2"
 *   insn=0x00000000002857D8 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002857DC string=0x00000000002857E0 "B4D"
 *   insn=0x00000000002857E0 string=0x00000000002821FC " #"
 *   insn=0x00000000002857E8 string=0x00000000002857EC "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBoltComponent::RegisterInterfaces(
        Caver::MagicBoltComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MagicBoltComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SpellComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

