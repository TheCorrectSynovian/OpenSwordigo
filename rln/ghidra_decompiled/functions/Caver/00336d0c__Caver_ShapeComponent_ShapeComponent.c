/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336d0c
 * Function: Caver::ShapeComponent::ShapeComponent
 * Signature: undefined __thiscall ShapeComponent(ShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShapeComponent::ShapeComponent() */

void __thiscall Caver::ShapeComponent::ShapeComponent(ShapeComponent *this)

{
  undefined *puVar1;
  ShapeComponent *pSVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ShapeComponent)0x0;
  puVar1 = PTR_vtable_007e7a10;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pSVar2 = this + 0x48;
  *(undefined8 *)pSVar2 = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(ShapeComponent **)(this + 0x58) = pSVar2;
  *(ShapeComponent **)(this + 0x60) = pSVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x188;
  *(undefined **)(this + 0x10) = puVar1 + 0x148;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  return;
}


