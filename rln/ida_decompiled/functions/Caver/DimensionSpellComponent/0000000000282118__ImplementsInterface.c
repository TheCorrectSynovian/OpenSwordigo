/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282118
 * Mangled: _ZN5Caver23DimensionSpellComponent19ImplementsInterfaceEl
 * Demangled: Caver::DimensionSpellComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002821F0  Caver::DimensionSpellComponent::Interface(void)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000282118 string=0x000000000028211C "YF"
 *   insn=0x000000000028211C string=0x0000000000282120 ")#"
 *   insn=0x0000000000282120 string=0x0000000000282124 ")5D"
 *   insn=0x0000000000282124 string=0x0000000000282128 "?"
 *   insn=0x0000000000282124 string=0x00000000002821FC " #"
 *   insn=0x000000000028212C string=0x0000000000282130 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DimensionSpellComponent::ImplementsInterface(
        Caver::DimensionSpellComponent *this,
        __int64 (__fastcall *a2)(Caver::SpellComponent *__hidden this))
{
  return (a2 == Caver::DimensionSpellComponent::Interface) | (unsigned int)(a2 == Caver::SpellComponent::Interface);
}

