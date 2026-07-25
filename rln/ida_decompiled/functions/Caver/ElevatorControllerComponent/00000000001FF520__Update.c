/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF520
 * Mangled: ._ZN5Caver27ElevatorControllerComponent6UpdateEf
 * Demangled: Caver::ElevatorControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002B49CC  `non-virtual thunk to'Caver::ElevatorControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002B4628  Caver::ElevatorControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF528 string=0x00000000001FF52C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ElevatorControllerComponent::Update(Caver::ElevatorControllerComponent *this, float a2)
{
  return _ZN5Caver27ElevatorControllerComponent6UpdateEf(this, a2);
}

