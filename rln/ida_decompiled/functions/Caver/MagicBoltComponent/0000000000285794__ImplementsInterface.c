/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285794
 * Mangled: _ZN5Caver18MagicBoltComponent19ImplementsInterfaceEl
 * Demangled: Caver::MagicBoltComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000274E18  std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000285794 string=0x0000000000285798 ""
 *   insn=0x0000000000285798 string=0x000000000028579C "\t#"
 *   insn=0x000000000028579C string=0x00000000002857A0 ")5D"
 *   insn=0x00000000002857A0 string=0x00000000002857A4 "?"
 *   insn=0x00000000002857A0 string=0x00000000002821FC " #"
 *   insn=0x00000000002857A8 string=0x00000000002857AC "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBoltComponent::ImplementsInterface(
        Caver::MagicBoltComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::SpellComponent *this))(Caver::SpellComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::MagicBoltComponent::Interface)
       | (unsigned int)(a2 == Caver::SpellComponent::Interface);
}

