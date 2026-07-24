/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415494
 * Function: Caver::Proto::ElevatorControllerComponent::Clear
 * Signature: undefined __thiscall Clear(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ElevatorControllerComponent::Clear() */

void __thiscall Caver::Proto::ElevatorControllerComponent::Clear(ElevatorControllerComponent *this)

{
  if (this[0x14] != (ElevatorControllerComponent)0x0) {
    *(undefined8 *)(this + 0xc) = DAT_0068aa60;
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


