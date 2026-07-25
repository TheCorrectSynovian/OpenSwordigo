/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC300
 * Mangled: ._ZN5Caver23DoorControllerComponentC2Ev
 * Demangled: Caver::DoorControllerComponent::DoorControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002505F8  Caver::DoorControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002B2344  Caver::DoorControllerComponent::DoorControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC308 string=0x00000000001FC30C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DoorControllerComponent::DoorControllerComponent(Caver::DoorControllerComponent *this)
{
  return _ZN5Caver23DoorControllerComponentC2Ev(this);
}

