/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b4548
 * Function: Caver::ElevatorControllerComponent::IsAtTargetPosition
 * Signature: undefined __thiscall IsAtTargetPosition(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::IsAtTargetPosition() */

bool __thiscall
Caver::ElevatorControllerComponent::IsAtTargetPosition(ElevatorControllerComponent *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)(*(long *)(this + 0x28) + 0x70) -
          (float)*(undefined8 *)(this + 0xb8);
  fVar2 = (float)((ulong)*(undefined8 *)(*(long *)(this + 0x28) + 0x70) >> 0x20) -
          (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20);
  return fVar1 * fVar1 + fVar2 * fVar2 < DAT_00683488;
}


