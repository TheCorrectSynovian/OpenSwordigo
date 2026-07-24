/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035450c
 * Function: Caver::BreakableObjectComponent::BreakableObjectComponent
 * Signature: undefined __thiscall BreakableObjectComponent(BreakableObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::BreakableObjectComponent() */

void __thiscall
Caver::BreakableObjectComponent::BreakableObjectComponent(BreakableObjectComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  BreakableObjectComponent *pBVar5;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x30] = (BreakableObjectComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e56c8 + 0x128;
  puVar3 = PTR_vtable_007e56c8 + 0x10;
  puVar4 = PTR_vtable_007e56c8 + 0x168;
  *(undefined **)(this + 0x38) = puVar1;
  pBVar5 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pBVar5 = 0;
  *(undefined **)this = puVar3;
  *(BreakableObjectComponent **)(this + 0x60) = pBVar5;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined2 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined **)(this + 0x80) = puVar1;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(BreakableObjectComponent **)(this + 0x58) = pBVar5;
  *(undefined **)(this + 0x18) = puVar4;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0xa8] = (BreakableObjectComponent)0x0;
  return;
}


