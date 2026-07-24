/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003314dc
 * Function: Caver::ProgramComponent::ProgramComponent
 * Signature: undefined __thiscall ProgramComponent(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::ProgramComponent() */

void __thiscall Caver::ProgramComponent::ProgramComponent(ProgramComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ProgramComponent *pPVar5;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x30] = (ProgramComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e5408 + 0x128;
  puVar3 = PTR_vtable_007e5408 + 0x10;
  puVar4 = PTR_vtable_007e5408 + 0x168;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x38) = puVar1;
  pPVar5 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pPVar5 = 0;
  *(undefined **)this = puVar3;
  *(undefined4 *)(this + 0x74) = 1;
  this[0x78] = (ProgramComponent)0x1;
  *(ProgramComponent **)(this + 0x60) = pPVar5;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (ProgramComponent)0x0;
  *(undefined **)(this + 0x80) = puVar1;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(ProgramComponent **)(this + 0x58) = pPVar5;
  *(undefined **)(this + 0x18) = puVar4;
  *(undefined **)(this + 0x10) = puVar2;
  this[0xa8] = (ProgramComponent)0x0;
  return;
}


