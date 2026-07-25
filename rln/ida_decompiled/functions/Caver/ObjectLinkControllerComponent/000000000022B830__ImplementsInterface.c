/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B830
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::ObjectLinkControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000022B880  Caver::ObjectLinkControllerComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000022B830 string=0x000000000022B834 ""
 *   insn=0x000000000022B834 string=0x000000000022B838 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ObjectLinkControllerComponent::ImplementsInterface(
        Caver::ObjectLinkControllerComponent *this,
        _QWORD (*a2)(Caver::ObjectLinkControllerComponent *__hidden this))
{
  return a2 == Caver::ObjectLinkControllerComponent::Interface;
}

