/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00334540
 * Function: Caver::PropertiesComponent::Clone
 * Signature: undefined __thiscall Clone(PropertiesComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::Clone() const */

PropertiesComponent * __thiscall Caver::PropertiesComponent::Clone(PropertiesComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  PropertiesComponent *this_00;
  PropertiesComponent *pPVar5;
  
  this_00 = operator_new(0xd0);
  *(undefined4 *)(this_00 + 8) = 0;
  this_00[0x30] = (PropertiesComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e4bc0 + 0x128;
  puVar3 = PTR_vtable_007e4bc0 + 0x10;
  puVar4 = PTR_vtable_007e4bc0 + 0x168;
  *(undefined **)(this_00 + 0x38) = puVar1;
  pPVar5 = this_00 + 0x48;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)pPVar5 = 0;
  *(undefined **)(this_00 + 0x78) = puVar1;
  *(undefined **)this_00 = puVar3;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  this_00[0x70] = (PropertiesComponent)0x0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(PropertiesComponent **)(this_00 + 0x58) = pPVar5;
  *(PropertiesComponent **)(this_00 + 0x60) = pPVar5;
  *(undefined **)(this_00 + 0x18) = puVar4;
  *(undefined **)(this_00 + 0x10) = puVar2;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  pPVar5 = this_00 + 0xa8;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)pPVar5 = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(PropertiesComponent **)(this_00 + 0xb8) = pPVar5;
  *(PropertiesComponent **)(this_00 + 0xc0) = pPVar5;
  *(undefined8 *)(this_00 + 200) = 0;
  InitWithComponent(this_00,this);
  return this_00;
}


