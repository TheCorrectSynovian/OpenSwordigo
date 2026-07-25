/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E28C
 * Mangled: _ZN5Caver19BackgroundComponent19ImplementsInterfaceEl
 * Demangled: Caver::BackgroundComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000021E330  Caver::BackgroundComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000021E28C string=0x000000000021E290 "mA"
 *   insn=0x000000000021E290 string=0x000000000021E294 "?"
 *   insn=0x000000000021E290 string=0x000000000021E330 " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::BackgroundComponent::ImplementsInterface(
        Caver::BackgroundComponent *this,
        __int64 (__fastcall *a2)(Caver::BackgroundComponent *__hidden this))
{
  return a2 == Caver::BackgroundComponent::Interface;
}

