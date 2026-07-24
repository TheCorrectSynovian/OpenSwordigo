/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366eac
 * Function: Caver::EntityActionComponent::EntityActionComponent
 * Signature: undefined __thiscall EntityActionComponent(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityActionComponent::EntityActionComponent() */

void __thiscall Caver::EntityActionComponent::EntityActionComponent(EntityActionComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  EntityActionComponent *pEVar5;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (EntityActionComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e5810 + 0x128;
  puVar3 = PTR_vtable_007e5810 + 0x10;
  puVar4 = PTR_vtable_007e5810 + 0x168;
  *(undefined **)(this + 0x38) = puVar1;
  pEVar5 = this + 0x48;
  *(undefined8 *)pEVar5 = 0;
  *(undefined **)this = puVar3;
  *(undefined8 *)(this + 0x50) = 0;
  *(EntityActionComponent **)(this + 0x58) = pEVar5;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(EntityActionComponent **)(this + 0x60) = pEVar5;
  *(undefined **)(this + 0x18) = puVar4;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined4 *)(this + 0xa8) = 0;
  return;
}


