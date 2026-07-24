/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00380954
 * Function: Caver::PhysicsPlatformComponent::PhysicsPlatformComponent
 * Signature: undefined __thiscall PhysicsPlatformComponent(PhysicsPlatformComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PhysicsPlatformComponent::PhysicsPlatformComponent() */

void __thiscall
Caver::PhysicsPlatformComponent::PhysicsPlatformComponent(PhysicsPlatformComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  PhysicsPlatformComponent *pPVar6;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (PhysicsPlatformComponent)0x0;
  puVar5 = PTR_vtable_007e71f8;
  puVar1 = PTR_vtable_007e71f8 + 0x128;
  puVar2 = PTR_vtable_007e71f8 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pPVar6 = this + 0x48;
  *(undefined8 *)pPVar6 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  uVar4 = _UNK_00688918;
  uVar3 = _DAT_00688910;
  *(undefined **)this = puVar5 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(PhysicsPlatformComponent **)(this + 0x58) = pPVar6;
  *(PhysicsPlatformComponent **)(this + 0x60) = pPVar6;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 1;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined8 *)(this + 0x9c) = uVar4;
  *(undefined8 *)(this + 0x94) = uVar3;
  return;
}


