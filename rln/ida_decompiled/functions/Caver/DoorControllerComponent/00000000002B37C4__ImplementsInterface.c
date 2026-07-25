/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B37C4
 * Mangled: _ZN5Caver23DoorControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::DoorControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002B3814  Caver::DoorControllerComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002B37C4 string=0x00000000002B37C8 "-D"
 *   insn=0x00000000002B37C8 string=0x00000000002B37CC "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::DoorControllerComponent::ImplementsInterface(
        Caver::DoorControllerComponent *this,
        _QWORD (*a2)(Caver::DoorControllerComponent *__hidden this))
{
  return a2 == Caver::DoorControllerComponent::Interface;
}

