/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFC80
 * Mangled: ._ZN5Caver23DoorControllerComponentC2Ev_0
 * Demangled: Caver::DoorControllerComponent::DoorControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002B3734  Caver::DoorControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002B2344  Caver::DoorControllerComponent::DoorControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFC88 string=0x00000000001FFC8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DoorControllerComponent::DoorControllerComponent(Caver::DoorControllerComponent *this)
{
  return _ZN5Caver23DoorControllerComponentC2Ev(this);
}

