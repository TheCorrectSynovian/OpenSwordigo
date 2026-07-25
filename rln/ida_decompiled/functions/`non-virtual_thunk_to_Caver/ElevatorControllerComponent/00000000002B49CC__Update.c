/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B49CC
 * Mangled: _ZThn24_N5Caver27ElevatorControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::ElevatorControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF520  Caver::ElevatorControllerComponent::Update(float)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ElevatorControllerComponent::Update(
        Caver::ElevatorControllerComponent *this,
        float a2)
{
  return Caver::ElevatorControllerComponent::Update((Caver::ElevatorControllerComponent *)((char *)this - 24), a2);
}

