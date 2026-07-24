/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00340140
 * Function: Caver::TouchableComponent::Clone
 * Signature: undefined __thiscall Clone(TouchableComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TouchableComponent::Clone() const */

TouchableComponent * __thiscall Caver::TouchableComponent::Clone(TouchableComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  TouchableComponent *this_00;
  TouchableComponent *pTVar5;
  
  this_00 = operator_new(0xa8);
  *(undefined4 *)(this_00 + 8) = 0;
  this_00[0x30] = (TouchableComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e7010 + 0x128;
  puVar3 = PTR_vtable_007e7010 + 0x10;
  puVar4 = PTR_vtable_007e7010 + 0x168;
  *(undefined **)(this_00 + 0x38) = puVar1;
  pTVar5 = this_00 + 0x48;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)pTVar5 = 0;
  *(undefined **)this_00 = puVar3;
  *(undefined4 *)(this_00 + 0x70) = 0x42b40000;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined **)(this_00 + 0x80) = puVar1;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(TouchableComponent **)(this_00 + 0x58) = pTVar5;
  *(TouchableComponent **)(this_00 + 0x60) = pTVar5;
  *(undefined **)(this_00 + 0x18) = puVar4;
  *(undefined **)(this_00 + 0x10) = puVar2;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  InitWithComponent(this_00,this);
  return this_00;
}


