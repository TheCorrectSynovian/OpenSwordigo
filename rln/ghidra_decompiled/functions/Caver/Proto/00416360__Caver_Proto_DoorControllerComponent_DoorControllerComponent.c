/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416360
 * Function: Caver::Proto::DoorControllerComponent::DoorControllerComponent
 * Signature: undefined __thiscall DoorControllerComponent(DoorControllerComponent * this, DoorControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DoorControllerComponent::DoorControllerComponent(Caver::Proto::DoorControllerComponent
   const&) */

void __thiscall
Caver::Proto::DoorControllerComponent::DoorControllerComponent
          (DoorControllerComponent *this,DoorControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7608;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x15) = 0;
  MergeFrom(this,param_1);
  return;
}


