/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002905D0
 * Mangled: _ZN5Caver14SpellComponent19ImplementsInterfaceEl
 * Demangled: Caver::SpellComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002905D0 string=0x00000000002905D4 "5D"
 *   insn=0x00000000002905D4 string=0x00000000002905D8 "?"
 *   insn=0x00000000002905D4 string=0x00000000002821FC " #"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::SpellComponent::ImplementsInterface(
        Caver::SpellComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::SpellComponent *this))(Caver::SpellComponent *__hidden this))
{
  return a2 == Caver::SpellComponent::Interface;
}

