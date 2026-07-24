/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b515c
 * Function: Caver::PressureTriggerComponent::PressureTriggerComponent
 * Signature: undefined __thiscall PressureTriggerComponent(PressureTriggerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PressureTriggerComponent::PressureTriggerComponent() */

void __thiscall
Caver::PressureTriggerComponent::PressureTriggerComponent(PressureTriggerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  PressureTriggerComponent *pPVar5;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x30] = (PressureTriggerComponent)0x0;
  puVar4 = PTR_vtable_007e6440;
  uVar3 = DAT_00689370;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e6440 + 0x10;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x38) = puVar1;
  pPVar5 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pPVar5 = 0;
  *(undefined **)this = puVar2;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined **)(this + 0x88) = puVar1;
  *(undefined **)(this + 0xb0) = puVar1;
  *(undefined4 *)(this + 0x78) = 0x40a00000;
  *(PressureTriggerComponent **)(this + 0x60) = pPVar5;
  *(undefined8 *)(this + 0x68) = 0;
  this[0xd8] = (PressureTriggerComponent)0x1;
  *(PressureTriggerComponent **)(this + 0x58) = pPVar5;
  *(undefined **)(this + 0x18) = puVar4 + 0x168;
  *(undefined **)(this + 0x10) = puVar4 + 0x128;
  *(undefined8 *)(this + 0x70) = uVar3;
  this[0xd9] = (PressureTriggerComponent)0x0;
  return;
}


