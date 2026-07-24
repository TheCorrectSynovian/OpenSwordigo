/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00355f84
 * Function: Caver::BreakableObjectComponent::Clone
 * Signature: undefined __thiscall Clone(BreakableObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::Clone() const */

BreakableObjectComponent * __thiscall
Caver::BreakableObjectComponent::Clone(BreakableObjectComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  BreakableObjectComponent *this_00;
  BreakableObjectComponent *pBVar5;
  
  this_00 = operator_new(0xb0);
  *(undefined4 *)(this_00 + 8) = 0;
  this_00[0x30] = (BreakableObjectComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e56c8 + 0x128;
  puVar3 = PTR_vtable_007e56c8 + 0x10;
  puVar4 = PTR_vtable_007e56c8 + 0x168;
  *(undefined **)(this_00 + 0x38) = puVar1;
  pBVar5 = this_00 + 0x48;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)pBVar5 = 0;
  *(undefined **)this_00 = puVar3;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined2 *)(this_00 + 0x70) = 0;
  *(undefined4 *)(this_00 + 0x74) = 0;
  *(undefined4 *)(this_00 + 0x78) = 0;
  *(undefined **)(this_00 + 0x80) = puVar1;
  *(undefined4 *)(this_00 + 0xac) = 0;
  this_00[0xa8] = (BreakableObjectComponent)0x0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(BreakableObjectComponent **)(this_00 + 0x58) = pBVar5;
  *(BreakableObjectComponent **)(this_00 + 0x60) = pBVar5;
  *(undefined **)(this_00 + 0x18) = puVar4;
  *(undefined **)(this_00 + 0x10) = puVar2;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  InitWithComponent(this_00,this);
  return this_00;
}


