/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f9b4
 * Function: Caver::HealthComponent::HealthComponent
 * Signature: undefined __thiscall HealthComponent(HealthComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::HealthComponent() */

void __thiscall Caver::HealthComponent::HealthComponent(HealthComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  HealthComponent *pHVar5;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (HealthComponent)0x0;
  puVar4 = PTR_vtable_007e4a68;
  puVar1 = PTR_vtable_007e4a68 + 0x128;
  puVar2 = PTR_vtable_007e4a68 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pHVar5 = this + 0x48;
  *(undefined8 *)pHVar5 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  uVar3 = DAT_00688270;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(HealthComponent **)(this + 0x58) = pHVar5;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (HealthComponent)0x0;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  *(undefined8 *)(this + 0xb8) = 0;
  this[0xc0] = (HealthComponent)0x0;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0x9c) = 0;
  *(HealthComponent **)(this + 0x60) = pHVar5;
  *(undefined8 *)(this + 0x90) = uVar3;
  *(undefined8 *)(this + 0xa4) = 0;
  return;
}


