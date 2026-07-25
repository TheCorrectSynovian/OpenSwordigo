/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC510
 * Mangled: ._ZN5Caver27ElevatorControllerComponentC2Ev_0
 * Demangled: Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000024F884  Caver::ElevatorControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002B3878  Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC518 string=0x00000000001FC51C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ElevatorControllerComponent::ElevatorControllerComponent(
        Caver::ElevatorControllerComponent *this)
{
  return _ZN5Caver27ElevatorControllerComponentC2Ev(this);
}

