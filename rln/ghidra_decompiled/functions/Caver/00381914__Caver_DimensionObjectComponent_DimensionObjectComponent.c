/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381914
 * Function: Caver::DimensionObjectComponent::DimensionObjectComponent
 * Signature: undefined __thiscall DimensionObjectComponent(DimensionObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionObjectComponent::DimensionObjectComponent() */

void __thiscall
Caver::DimensionObjectComponent::DimensionObjectComponent(DimensionObjectComponent *this)

{
  undefined *puVar1;
  DimensionObjectComponent *pDVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (DimensionObjectComponent)0x0;
  puVar1 = PTR_vtable_007e5340;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pDVar2 = this + 0x48;
  *(undefined8 *)pDVar2 = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(DimensionObjectComponent **)(this + 0x58) = pDVar2;
  *(DimensionObjectComponent **)(this + 0x60) = pDVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  return;
}


