/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037a36c
 * Function: Caver::ItemDropComponent::Clone
 * Signature: undefined __thiscall Clone(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::Clone() const */

ItemDropComponent * __thiscall Caver::ItemDropComponent::Clone(ItemDropComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  ItemDropComponent *this_00;
  ItemDropComponent *pIVar3;
  
  this_00 = operator_new(0xb0);
  *(undefined4 *)(this_00 + 8) = 0;
  this_00[0x30] = (ItemDropComponent)0x0;
  puVar2 = PTR_vtable_007e5060;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined **)(this_00 + 0x38) = puVar1;
  pIVar3 = this_00 + 0x48;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)pIVar3 = 0;
  *(undefined **)(this_00 + 0x80) = puVar1;
  *(undefined **)(this_00 + 0x78) = puVar1;
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined2 *)(this_00 + 0x70) = 1;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(ItemDropComponent **)(this_00 + 0x58) = pIVar3;
  *(ItemDropComponent **)(this_00 + 0x60) = pIVar3;
  *(undefined **)(this_00 + 0x18) = puVar2 + 0x168;
  *(undefined **)(this_00 + 0x10) = puVar2 + 0x128;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  InitWithComponent(this_00,this);
  return this_00;
}


