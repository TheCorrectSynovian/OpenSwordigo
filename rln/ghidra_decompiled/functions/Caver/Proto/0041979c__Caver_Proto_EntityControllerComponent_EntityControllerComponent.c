/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041979c
 * Function: Caver::Proto::EntityControllerComponent::EntityControllerComponent
 * Signature: undefined __thiscall EntityControllerComponent(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::EntityControllerComponent() */

void __thiscall
Caver::Proto::EntityControllerComponent::EntityControllerComponent(EntityControllerComponent *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e7ec8;
  uVar1 = DAT_00689bc8;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0x28) = uVar1;
  return;
}


