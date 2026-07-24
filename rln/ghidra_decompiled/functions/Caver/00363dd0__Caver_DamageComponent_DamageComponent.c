/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363dd0
 * Function: Caver::DamageComponent::DamageComponent
 * Signature: undefined __thiscall DamageComponent(DamageComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::DamageComponent::DamageComponent() */

void __thiscall Caver::DamageComponent::DamageComponent(DamageComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  DamageComponent *pDVar5;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (DamageComponent)0x0;
  puVar4 = PTR_vtable_007e5798;
  puVar1 = PTR_vtable_007e5798 + 0x128;
  puVar2 = PTR_vtable_007e5798 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pDVar5 = this + 0x48;
  *(undefined8 *)pDVar5 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  uVar3 = _DAT_00683948;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(DamageComponent **)(this + 0x58) = pDVar5;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  this[0xa0] = (DamageComponent)0x0;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xa4) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  this[0xbc] = (DamageComponent)0x1;
  *(undefined8 *)(this + 0xc0) = 0;
  this[0xd0] = (DamageComponent)0x0;
  *(DamageComponent **)(this + 0x60) = pDVar5;
  *(undefined8 *)(this + 200) = uVar3;
  this[0xd1] = (DamageComponent)0x1;
  return;
}


