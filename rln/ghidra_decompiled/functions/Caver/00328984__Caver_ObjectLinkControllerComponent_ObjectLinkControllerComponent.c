/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00328984
 * Function: Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent
 * Signature: undefined __thiscall ObjectLinkControllerComponent(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent() */

void __thiscall
Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent
          (ObjectLinkControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ObjectLinkControllerComponent *pOVar4;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x30] = (ObjectLinkControllerComponent)0x0;
  puVar3 = PTR_vtable_007e6a28;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e6a28 + 0x10;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x38) = puVar1;
  pOVar4 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pOVar4 = 0;
  *(undefined **)this = puVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar1;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined **)(this + 0x90) = puVar1;
  *(undefined8 *)(this + 0x78) = 0;
  this[0x80] = (ObjectLinkControllerComponent)0x0;
  this[0xe8] = (ObjectLinkControllerComponent)0x0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(ObjectLinkControllerComponent **)(this + 0x58) = pOVar4;
  *(ObjectLinkControllerComponent **)(this + 0x60) = pOVar4;
  *(undefined **)(this + 0x18) = puVar3 + 0x168;
  *(undefined **)(this + 0x10) = puVar3 + 0x128;
  *(undefined8 *)(this + 0x109) = 0;
  *(undefined8 *)(this + 0x104) = 0;
  *(undefined8 *)(this + 0xfc) = 0;
  *(undefined8 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  return;
}


