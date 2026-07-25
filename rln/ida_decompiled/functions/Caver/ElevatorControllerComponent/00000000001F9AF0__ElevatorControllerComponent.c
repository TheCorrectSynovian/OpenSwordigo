/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9AF0
 * Mangled: ._ZN5Caver27ElevatorControllerComponentC2Ev
 * Demangled: Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002B501C  Caver::ElevatorControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002B3878  Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9AF8 string=0x00000000001F9AFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ElevatorControllerComponent::ElevatorControllerComponent(
        Caver::ElevatorControllerComponent *this)
{
  return _ZN5Caver27ElevatorControllerComponentC2Ev(this);
}

