/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00412870
 * Function: Caver::Proto::CharControllerComponent::CharControllerComponent
 * Signature: undefined __thiscall CharControllerComponent(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharControllerComponent::CharControllerComponent() */

void __thiscall
Caver::Proto::CharControllerComponent::CharControllerComponent(CharControllerComponent *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(CharControllerComponent **)(this + 0x48) = this + 0x58;
  puVar2 = PTR_vtable_007e6f20;
  uVar1 = DAT_0068b470;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x50) = uVar1;
  *(undefined8 *)(this + 0x68) = 0;
  return;
}


