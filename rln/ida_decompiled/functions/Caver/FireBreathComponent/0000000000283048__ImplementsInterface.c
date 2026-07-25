/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283048
 * Mangled: _ZN5Caver19FireBreathComponent19ImplementsInterfaceEl
 * Demangled: Caver::FireBreathComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *   0x00000000002831F0  Caver::FireBreathComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000283048 string=0x000000000028304C "\tD"
 *   insn=0x000000000028304C string=0x0000000000283050 "\t#"
 *   insn=0x0000000000283050 string=0x0000000000283054 ")5D"
 *   insn=0x0000000000283054 string=0x0000000000283058 "?"
 *   insn=0x0000000000283054 string=0x00000000002821FC " #"
 *   insn=0x000000000028305C string=0x0000000000283060 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FireBreathComponent::ImplementsInterface(
        Caver::FireBreathComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::SpellComponent *this))(Caver::SpellComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::FireBreathComponent::Interface)
       | (unsigned int)(a2 == Caver::SpellComponent::Interface);
}

