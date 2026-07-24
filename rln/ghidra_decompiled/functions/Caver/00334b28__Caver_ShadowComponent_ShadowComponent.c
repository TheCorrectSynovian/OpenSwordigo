/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00334b28
 * Function: Caver::ShadowComponent::ShadowComponent
 * Signature: undefined __thiscall ShadowComponent(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::ShadowComponent() */

void __thiscall Caver::ShadowComponent::ShadowComponent(ShadowComponent *this)

{
  undefined *puVar1;
  ShadowComponent *pSVar2;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x30] = (ShadowComponent)0x0;
  puVar1 = PTR_vtable_007e5d20;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  pSVar2 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pSVar2 = 0;
  this[0x78] = (ShadowComponent)0x1;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  this[0xbc] = (ShadowComponent)0x0;
  *(undefined8 *)(this + 0xac) = 0;
  *(ShadowComponent **)(this + 0x58) = pSVar2;
  *(ShadowComponent **)(this + 0x60) = pSVar2;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  *(undefined8 *)(this + 0xb4) = 0;
  return;
}


