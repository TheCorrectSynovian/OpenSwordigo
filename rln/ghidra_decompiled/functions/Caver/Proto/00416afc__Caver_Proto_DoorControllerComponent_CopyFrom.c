/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416afc
 * Function: Caver::Proto::DoorControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(DoorControllerComponent * this, DoorControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DoorControllerComponent::CopyFrom(Caver::Proto::DoorControllerComponent const&) */

void __thiscall
Caver::Proto::DoorControllerComponent::CopyFrom
          (DoorControllerComponent *this,DoorControllerComponent *param_1)

{
  if (param_1 != this) {
                    /* try { // try from 00416b18 to 00516b1f has its CatchHandler @ 00416c7c */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
                    /* try { // try from 00416b3c to 00516b43 has its CatchHandler @ 00416c1c */
  return;
}


