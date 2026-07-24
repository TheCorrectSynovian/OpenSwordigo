/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00375948
 * Function: Caver::ItemDropComponent::ItemDropComponent
 * Signature: undefined __thiscall ItemDropComponent(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::ItemDropComponent() */

void __thiscall Caver::ItemDropComponent::ItemDropComponent(ItemDropComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  ItemDropComponent *pIVar3;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x30] = (ItemDropComponent)0x0;
  puVar2 = PTR_vtable_007e5060;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined **)(this + 0x38) = puVar1;
  pIVar3 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pIVar3 = 0;
  *(undefined **)(this + 0x80) = puVar1;
  *(undefined **)(this + 0x78) = puVar1;
  *(undefined **)this = puVar2 + 0x10;
  *(ItemDropComponent **)(this + 0x60) = pIVar3;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined2 *)(this + 0x70) = 1;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(ItemDropComponent **)(this + 0x58) = pIVar3;
  *(undefined **)(this + 0x18) = puVar2 + 0x168;
  *(undefined **)(this + 0x10) = puVar2 + 0x128;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  return;
}


