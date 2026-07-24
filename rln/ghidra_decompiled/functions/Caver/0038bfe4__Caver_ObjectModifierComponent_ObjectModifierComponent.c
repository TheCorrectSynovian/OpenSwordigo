/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038bfe4
 * Function: Caver::ObjectModifierComponent::ObjectModifierComponent
 * Signature: undefined __thiscall ObjectModifierComponent(ObjectModifierComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectModifierComponent::ObjectModifierComponent() */

void __thiscall
Caver::ObjectModifierComponent::ObjectModifierComponent(ObjectModifierComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ObjectModifierComponent *pOVar5;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ObjectModifierComponent)0x0;
  puVar4 = PTR_vtable_007e4d90;
  puVar1 = PTR_vtable_007e4d90 + 0x128;
  puVar2 = PTR_vtable_007e4d90 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pOVar5 = this + 0x48;
  *(undefined8 *)pOVar5 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  uVar3 = DAT_006840e0;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(ObjectModifierComponent **)(this + 0x58) = pOVar5;
  *(ObjectModifierComponent **)(this + 0x60) = pOVar5;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x7c) = 0x3e99999a;
  *(undefined8 *)(this + 0x74) = uVar3;
  *(undefined8 *)(this + 0x80) = 0;
  return;
}


