/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363c74
 * Function: Caver::CollectableItemComponent::Clone
 * Signature: undefined __thiscall Clone(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::Clone() const */

CollectableItemComponent * __thiscall
Caver::CollectableItemComponent::Clone(CollectableItemComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  CollectableItemComponent *this_00;
  CollectableItemComponent *pCVar4;
  
  this_00 = operator_new(0xb8);
  *(undefined4 *)(this_00 + 8) = 0;
  this_00[0x30] = (CollectableItemComponent)0x0;
  puVar3 = PTR_vtable_007e60b0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e60b0 + 0x10;
  *(undefined **)(this_00 + 0x38) = puVar1;
  pCVar4 = this_00 + 0x48;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)pCVar4 = 0;
  *(undefined **)this_00 = puVar2;
  *(undefined **)(this_00 + 0x80) = puVar1;
  *(undefined **)(this_00 + 0x78) = puVar1;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  this_00[0x88] = (CollectableItemComponent)0x0;
  *(undefined **)(this_00 + 0x90) = puVar1;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(CollectableItemComponent **)(this_00 + 0x58) = pCVar4;
  *(CollectableItemComponent **)(this_00 + 0x60) = pCVar4;
  *(undefined **)(this_00 + 0x18) = puVar3 + 0x168;
  *(undefined **)(this_00 + 0x10) = puVar3 + 0x128;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  InitWithComponent(this_00,this);
  return this_00;
}


