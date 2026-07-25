/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B2290
 * Mangled: _ZN5Caver23BushControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::BushControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002B22E0  Caver::BushControllerComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002B2290 string=0x00000000002B2294 ")B"
 *   insn=0x00000000002B2294 string=0x00000000002B2298 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::BushControllerComponent::ImplementsInterface(
        Caver::BushControllerComponent *this,
        _QWORD (*a2)(Caver::BushControllerComponent *__hidden this))
{
  return a2 == Caver::BushControllerComponent::Interface;
}

