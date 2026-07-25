/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000274464
 * Mangled: _ZN5Caver19HeroEntityComponent19ImplementsInterfaceEl
 * Demangled: Caver::HeroEntityComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *   0x000000000026E668  std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *
 * Referenced strings: 5
 *   insn=0x0000000000274464 string=0x0000000000274468 ""
 *   insn=0x000000000027446C string=0x0000000000274470 ")1F"
 *   insn=0x0000000000274470 string=0x0000000000274474 "?"
 *   insn=0x0000000000274470 string=0x000000000026168C " $"
 *   insn=0x0000000000274478 string=0x000000000027447C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEntityComponent::ImplementsInterface(
        Caver::HeroEntityComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::EntityComponent *this))(Caver::EntityComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::HeroEntityComponent::Interface)
       | (unsigned int)(a2 == Caver::EntityComponent::Interface);
}

