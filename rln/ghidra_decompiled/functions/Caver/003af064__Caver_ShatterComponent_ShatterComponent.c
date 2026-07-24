/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af064
 * Function: Caver::ShatterComponent::ShatterComponent
 * Signature: undefined __thiscall ShatterComponent(ShatterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShatterComponent::ShatterComponent() */

void __thiscall Caver::ShatterComponent::ShatterComponent(ShatterComponent *this)

{
  undefined *puVar1;
  ShatterComponent *pSVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ShatterComponent)0x0;
  puVar1 = PTR_vtable_007e6768;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pSVar2 = this + 0x48;
  *(undefined8 *)pSVar2 = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(ShatterComponent **)(this + 0x58) = pSVar2;
  *(ShatterComponent **)(this + 0x60) = pSVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  return;
}


