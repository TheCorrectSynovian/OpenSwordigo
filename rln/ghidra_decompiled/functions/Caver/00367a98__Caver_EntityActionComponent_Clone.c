/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00367a98
 * Function: Caver::EntityActionComponent::Clone
 * Signature: undefined __thiscall Clone(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityActionComponent::Clone() const */

EntityActionComponent * __thiscall Caver::EntityActionComponent::Clone(EntityActionComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  EntityActionComponent *this_00;
  EntityActionComponent *pEVar5;
  
  this_00 = operator_new(0xb0);
  *(undefined4 *)(this_00 + 8) = 0;
  this_00[0x30] = (EntityActionComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e5810 + 0x128;
  puVar3 = PTR_vtable_007e5810 + 0x10;
  puVar4 = PTR_vtable_007e5810 + 0x168;
  *(undefined **)(this_00 + 0x38) = puVar1;
  pEVar5 = this_00 + 0x48;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)pEVar5 = 0;
  *(undefined **)this_00 = puVar3;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined **)(this_00 + 0x70) = puVar1;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(EntityActionComponent **)(this_00 + 0x58) = pEVar5;
  *(EntityActionComponent **)(this_00 + 0x60) = pEVar5;
  *(undefined **)(this_00 + 0x18) = puVar4;
  *(undefined **)(this_00 + 0x10) = puVar2;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined4 *)(this_00 + 0xa8) = 0;
  InitWithComponent(this_00,this);
  return this_00;
}


