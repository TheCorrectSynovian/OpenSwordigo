/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027448C
 * Mangled: _ZN5Caver19HeroEntityComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::HeroEntityComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *   0x000000000026E668  std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000274498 string=0x000000000027449C "B"
 *   insn=0x00000000002744A8 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002744AC string=0x00000000002744B0 "B0F"
 *   insn=0x00000000002744B0 string=0x000000000026168C " $"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEntityComponent::RegisterInterfaces(
        Caver::HeroEntityComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::HeroEntityComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::EntityComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

