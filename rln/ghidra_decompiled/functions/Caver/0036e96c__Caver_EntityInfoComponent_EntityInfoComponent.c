/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036e96c
 * Function: Caver::EntityInfoComponent::EntityInfoComponent
 * Signature: undefined __thiscall EntityInfoComponent(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::EntityInfoComponent() */

void __thiscall Caver::EntityInfoComponent::EntityInfoComponent(EntityInfoComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  EntityInfoComponent *pEVar5;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (EntityInfoComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e6d08 + 0x128;
  puVar3 = PTR_vtable_007e6d08 + 0x10;
  puVar4 = PTR_vtable_007e6d08 + 0x168;
  *(undefined **)(this + 0x38) = puVar1;
  pEVar5 = this + 0x48;
  *(undefined8 *)pEVar5 = 0;
  *(undefined **)this = puVar3;
  *(undefined8 *)(this + 0x50) = 0;
  *(EntityInfoComponent **)(this + 0x58) = pEVar5;
  *(EntityInfoComponent **)(this + 0x60) = pEVar5;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (EntityInfoComponent)0x0;
  *(undefined **)(this + 0x78) = puVar1;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined **)(this + 0x18) = puVar4;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}


