/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032b778
 * Function: Caver::ObjectLinkControllerComponent::Clone
 * Signature: undefined __thiscall Clone(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::Clone() const */

ObjectLinkControllerComponent * __thiscall
Caver::ObjectLinkControllerComponent::Clone(ObjectLinkControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ObjectLinkControllerComponent *this_00;
  ObjectLinkControllerComponent *pOVar5;
  
  this_00 = operator_new(0x128);
  *(undefined4 *)(this_00 + 8) = 0;
  this_00[0x30] = (ObjectLinkControllerComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e6a28 + 0x128;
  puVar3 = PTR_vtable_007e6a28 + 0x10;
  puVar4 = PTR_vtable_007e6a28 + 0x168;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined **)(this_00 + 0x38) = puVar1;
  pOVar5 = this_00 + 0x48;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)pOVar5 = 0;
  *(undefined **)this_00 = puVar3;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined **)(this_00 + 0x90) = puVar1;
  *(undefined **)(this_00 + 0x70) = puVar1;
  *(undefined8 *)(this_00 + 0x78) = 0;
  this_00[0x80] = (ObjectLinkControllerComponent)0x0;
  this_00[0xe8] = (ObjectLinkControllerComponent)0x0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(ObjectLinkControllerComponent **)(this_00 + 0x58) = pOVar5;
  *(ObjectLinkControllerComponent **)(this_00 + 0x60) = pOVar5;
  *(undefined **)(this_00 + 0x18) = puVar4;
  *(undefined **)(this_00 + 0x10) = puVar2;
  *(undefined8 *)(this_00 + 0x109) = 0;
  *(undefined8 *)(this_00 + 0x104) = 0;
  *(undefined8 *)(this_00 + 0xfc) = 0;
  *(undefined8 *)(this_00 + 0xf4) = 0;
  *(undefined8 *)(this_00 + 0xec) = 0;
  InitWithComponent(this_00,this);
  return this_00;
}


