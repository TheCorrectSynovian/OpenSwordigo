/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E414
 * Mangled: _ZN5Caver25EntityControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::EntityControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000026E414 string=0x000000000026E418 ""
 *   insn=0x000000000026E418 string=0x000000000026E41C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::EntityControllerComponent::ImplementsInterface(
        Caver::EntityControllerComponent *this,
        __int64 (__fastcall *a2)(Caver::EntityControllerComponent *__hidden this))
{
  return a2 == Caver::EntityControllerComponent::Interface;
}

