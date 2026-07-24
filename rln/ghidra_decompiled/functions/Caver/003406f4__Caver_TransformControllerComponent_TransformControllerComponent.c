/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003406f4
 * Function: Caver::TransformControllerComponent::TransformControllerComponent
 * Signature: undefined __thiscall TransformControllerComponent(TransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TransformControllerComponent::TransformControllerComponent() */

void __thiscall
Caver::TransformControllerComponent::TransformControllerComponent
          (TransformControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  TransformControllerComponent *pTVar5;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (TransformControllerComponent)0x0;
  puVar4 = PTR_vtable_007e6898;
  puVar1 = PTR_vtable_007e6898 + 0x128;
  puVar2 = PTR_vtable_007e6898 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pTVar5 = this + 0x48;
  *(undefined8 *)pTVar5 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  uVar3 = _DAT_00683948;
  *(undefined8 *)(this + 0x50) = 0;
  *(TransformControllerComponent **)(this + 0x58) = pTVar5;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined8 *)(this + 0x75) = 0;
  *(undefined8 *)(this + 0x85) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xa5) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(TransformControllerComponent **)(this + 0x60) = pTVar5;
  *(undefined8 *)(this + 0xb0) = uVar3;
  *(undefined8 *)(this + 0xb8) = 0;
  return;
}


