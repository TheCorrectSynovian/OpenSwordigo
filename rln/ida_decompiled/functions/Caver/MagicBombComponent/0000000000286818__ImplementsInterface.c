/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000286818
 * Mangled: _ZN5Caver18MagicBombComponent19ImplementsInterfaceEl
 * Demangled: Caver::MagicBombComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *   0x0000000000286890  Caver::MagicBombComponent::className(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000286818 string=0x000000000028681C "EB"
 *   insn=0x000000000028681C string=0x0000000000286820 "\t#"
 *   insn=0x0000000000286820 string=0x0000000000286824 ")5D"
 *   insn=0x0000000000286824 string=0x0000000000286828 "?"
 *   insn=0x0000000000286824 string=0x00000000002821FC " #"
 *   insn=0x000000000028682C string=0x0000000000286830 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBombComponent::ImplementsInterface(
        Caver::MagicBombComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::SpellComponent *this))(Caver::SpellComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::MagicBombComponent::Interface)
       | (unsigned int)(a2 == Caver::SpellComponent::Interface);
}

