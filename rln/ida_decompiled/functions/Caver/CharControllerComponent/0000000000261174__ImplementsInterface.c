/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261174
 * Mangled: _ZN5Caver23CharControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::CharControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000261698  Caver::CharControllerComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000261174 string=0x0000000000261178 ""
 *   insn=0x0000000000261178 string=0x000000000026117C "?"
 *   insn=0x0000000000261178 string=0x0000000000261698 " $"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharControllerComponent::ImplementsInterface(
        Caver::CharControllerComponent *this,
        __int64 (__fastcall *a2)(Caver::CharControllerComponent *__hidden this))
{
  return a2 == Caver::CharControllerComponent::Interface;
}

