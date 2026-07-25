/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B5094
 * Mangled: _ZN5Caver27ElevatorControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::ElevatorControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002B50F8  Caver::ElevatorControllerComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002B5094 string=0x00000000002B5098 ""
 *   insn=0x00000000002B5098 string=0x00000000002B509C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ElevatorControllerComponent::ImplementsInterface(
        Caver::ElevatorControllerComponent *this,
        _QWORD (*a2)(Caver::ElevatorControllerComponent *__hidden this))
{
  return a2 == Caver::ElevatorControllerComponent::Interface;
}

