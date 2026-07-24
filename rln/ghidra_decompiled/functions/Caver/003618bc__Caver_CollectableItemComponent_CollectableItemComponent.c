/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003618bc
 * Function: Caver::CollectableItemComponent::CollectableItemComponent
 * Signature: undefined __thiscall CollectableItemComponent(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::CollectableItemComponent() */

void __thiscall
Caver::CollectableItemComponent::CollectableItemComponent(CollectableItemComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  CollectableItemComponent *pCVar4;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x30] = (CollectableItemComponent)0x0;
  puVar3 = PTR_vtable_007e60b0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e60b0 + 0x10;
  *(undefined **)(this + 0x38) = puVar1;
  pCVar4 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pCVar4 = 0;
  *(undefined **)this = puVar2;
  *(undefined **)(this + 0x80) = puVar1;
  *(undefined **)(this + 0x78) = puVar1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x88] = (CollectableItemComponent)0x0;
  *(undefined **)(this + 0x90) = puVar1;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(CollectableItemComponent **)(this + 0x58) = pCVar4;
  *(CollectableItemComponent **)(this + 0x60) = pCVar4;
  *(undefined **)(this + 0x18) = puVar3 + 0x168;
  *(undefined **)(this + 0x10) = puVar3 + 0x128;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  return;
}


