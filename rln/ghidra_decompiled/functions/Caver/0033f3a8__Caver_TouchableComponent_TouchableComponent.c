/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033f3a8
 * Function: Caver::TouchableComponent::TouchableComponent
 * Signature: undefined __thiscall TouchableComponent(TouchableComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TouchableComponent::TouchableComponent() */

void __thiscall Caver::TouchableComponent::TouchableComponent(TouchableComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  TouchableComponent *pTVar5;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x30] = (TouchableComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e7010 + 0x128;
  puVar3 = PTR_vtable_007e7010 + 0x10;
  puVar4 = PTR_vtable_007e7010 + 0x168;
  *(undefined **)(this + 0x38) = puVar1;
  pTVar5 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pTVar5 = 0;
  *(undefined **)this = puVar3;
  *(undefined4 *)(this + 0x70) = 0x42b40000;
  *(TouchableComponent **)(this + 0x60) = pTVar5;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined **)(this + 0x80) = puVar1;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(TouchableComponent **)(this + 0x58) = pTVar5;
  *(undefined **)(this + 0x18) = puVar4;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  return;
}


