/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F7C0
 * Mangled: _ZN5Caver19EntityInfoComponent19ImplementsInterfaceEl
 * Demangled: Caver::EntityInfoComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000026F7C0 string=0x000000000026F7C4 ""
 *   insn=0x000000000026F7C4 string=0x000000000026F7C8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::EntityInfoComponent::ImplementsInterface(
        Caver::EntityInfoComponent *this,
        _QWORD (*a2)(Caver::EntityInfoComponent *__hidden this))
{
  return a2 == Caver::EntityInfoComponent::Interface;
}

