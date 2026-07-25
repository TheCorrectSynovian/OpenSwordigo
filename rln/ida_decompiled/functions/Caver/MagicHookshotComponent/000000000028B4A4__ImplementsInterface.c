/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028B4A4
 * Mangled: _ZN5Caver22MagicHookshotComponent19ImplementsInterfaceEl
 * Demangled: Caver::MagicHookshotComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *   0x000000000028B51C  Caver::MagicHookshotComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000028B4A4 string=0x000000000028B4A8 "}@"
 *   insn=0x000000000028B4AC string=0x000000000028B4B0 ")5D"
 *   insn=0x000000000028B4B0 string=0x000000000028B4B4 "?"
 *   insn=0x000000000028B4B0 string=0x00000000002821FC " #"
 *   insn=0x000000000028B4B8 string=0x000000000028B4BC "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicHookshotComponent::ImplementsInterface(
        Caver::MagicHookshotComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::SpellComponent *this))(Caver::SpellComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::MagicHookshotComponent::Interface)
       | (unsigned int)(a2 == Caver::SpellComponent::Interface);
}

