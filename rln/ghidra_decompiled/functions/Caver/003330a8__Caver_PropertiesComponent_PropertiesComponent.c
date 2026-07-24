/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003330a8
 * Function: Caver::PropertiesComponent::PropertiesComponent
 * Signature: undefined __thiscall PropertiesComponent(PropertiesComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::PropertiesComponent() */

void __thiscall Caver::PropertiesComponent::PropertiesComponent(PropertiesComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  PropertiesComponent *pPVar5;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x30] = (PropertiesComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e4bc0 + 0x128;
  puVar3 = PTR_vtable_007e4bc0 + 0x10;
  puVar4 = PTR_vtable_007e4bc0 + 0x168;
  *(undefined **)(this + 0x38) = puVar1;
  pPVar5 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pPVar5 = 0;
  *(undefined **)(this + 0x78) = puVar1;
  *(undefined **)this = puVar3;
  *(PropertiesComponent **)(this + 0x60) = pPVar5;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (PropertiesComponent)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(PropertiesComponent **)(this + 0x58) = pPVar5;
  *(undefined **)(this + 0x18) = puVar4;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  pPVar5 = this + 0xa8;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)pPVar5 = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(PropertiesComponent **)(this + 0xb8) = pPVar5;
  *(PropertiesComponent **)(this + 0xc0) = pPVar5;
  *(undefined8 *)(this + 200) = 0;
  return;
}


