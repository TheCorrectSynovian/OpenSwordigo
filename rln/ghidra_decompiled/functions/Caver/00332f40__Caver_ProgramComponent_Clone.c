/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00332f40
 * Function: Caver::ProgramComponent::Clone
 * Signature: undefined __thiscall Clone(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::Clone() const */

ProgramComponent * __thiscall Caver::ProgramComponent::Clone(ProgramComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ProgramComponent *this_00;
  ProgramComponent *pPVar5;
  
  this_00 = operator_new(0xc0);
  *(undefined4 *)(this_00 + 8) = 0;
  this_00[0x30] = (ProgramComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e5408 + 0x128;
  puVar3 = PTR_vtable_007e5408 + 0x10;
  puVar4 = PTR_vtable_007e5408 + 0x168;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined **)(this_00 + 0x38) = puVar1;
  pPVar5 = this_00 + 0x48;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)pPVar5 = 0;
  *(undefined **)this_00 = puVar3;
  *(undefined4 *)(this_00 + 0x74) = 1;
  this_00[0x78] = (ProgramComponent)0x1;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  this_00[0x70] = (ProgramComponent)0x0;
  *(undefined **)(this_00 + 0x80) = puVar1;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  this_00[0xa8] = (ProgramComponent)0x0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(ProgramComponent **)(this_00 + 0x58) = pPVar5;
  *(ProgramComponent **)(this_00 + 0x60) = pPVar5;
  *(undefined **)(this_00 + 0x18) = puVar4;
  *(undefined **)(this_00 + 0x10) = puVar2;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  InitWithComponent(this_00,this);
  return this_00;
}


