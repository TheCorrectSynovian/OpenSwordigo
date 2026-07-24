/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415290
 * Function: Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent
 * Signature: undefined __thiscall ElevatorControllerComponent(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent() */

void __thiscall
Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent
          (ElevatorControllerComponent *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e4a50;
  uVar1 = _DAT_0068b480;
  *(undefined8 *)(this + 0x10) = _UNK_0068b488;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined **)this = puVar2 + 0x10;
  return;
}


