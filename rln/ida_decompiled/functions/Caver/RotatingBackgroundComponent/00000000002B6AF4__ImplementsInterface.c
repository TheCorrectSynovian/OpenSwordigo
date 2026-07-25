/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B6AF4
 * Mangled: _ZN5Caver27RotatingBackgroundComponent19ImplementsInterfaceEl
 * Demangled: Caver::RotatingBackgroundComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000021E330  Caver::BackgroundComponent::Interface(void)
 *   0x00000000002B6B6C  Caver::RotatingBackgroundComponent::className(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002B6AF4 string=0x00000000002B6AF8 ""
 *   insn=0x00000000002B6AF8 string=0x00000000002B6AFC "i!"
 *   insn=0x00000000002B6AFC string=0x00000000002B6B00 ")mA"
 *   insn=0x00000000002B6B00 string=0x00000000002B6B04 "?"
 *   insn=0x00000000002B6B00 string=0x000000000021E330 " &"
 *   insn=0x00000000002B6B08 string=0x00000000002B6B0C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RotatingBackgroundComponent::ImplementsInterface(
        Caver::RotatingBackgroundComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::BackgroundComponent *this))(Caver::BackgroundComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::RotatingBackgroundComponent::Interface)
       | (unsigned int)(a2 == Caver::BackgroundComponent::Interface);
}

