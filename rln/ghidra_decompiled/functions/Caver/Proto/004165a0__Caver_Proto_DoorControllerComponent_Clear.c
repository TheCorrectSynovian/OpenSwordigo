/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004165a0
 * Function: Caver::Proto::DoorControllerComponent::Clear
 * Signature: undefined __thiscall Clear(DoorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DoorControllerComponent::Clear() */

void __thiscall Caver::Proto::DoorControllerComponent::Clear(DoorControllerComponent *this)

{
  if (this[0x20] != (DoorControllerComponent)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    this[0x1c] = (DoorControllerComponent)0x0;
  }
  *(undefined4 *)(this + 0x20) = 0;
                    /* try { // try from 004165b8 to 005165df has its CatchHandler @ 00416638 */
  return;
}


