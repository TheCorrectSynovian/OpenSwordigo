/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00367bec
 * Function: Caver::EntityComponent::EntityComponent
 * Signature: undefined __thiscall EntityComponent(EntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::EntityComponent::EntityComponent() */

void __thiscall Caver::EntityComponent::EntityComponent(EntityComponent *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  EntityComponent *pEVar4;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (EntityComponent)0x0;
  puVar3 = PTR_vtable_007e5c90;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pEVar4 = this + 0x48;
  *(undefined8 *)pEVar4 = 0;
  *(undefined4 *)(this + 0x70) = 1;
  *(undefined **)this = puVar3 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(EntityComponent **)(this + 0x58) = pEVar4;
  *(EntityComponent **)(this + 0x60) = pEVar4;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar3 + 0x168;
  *(undefined **)(this + 0x10) = puVar3 + 0x128;
  PhysicsObjectState::PhysicsObjectState((PhysicsObjectState *)(this + 0x78));
  uVar2 = _UNK_00687f28;
  uVar1 = _DAT_00687f20;
  this[0x100] = (EntityComponent)0x0;
  *(undefined8 *)(this + 0x10c) = uVar2;
  *(undefined8 *)(this + 0x104) = uVar1;
  *(undefined2 *)(this + 0x114) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  this[0x128] = (EntityComponent)0x0;
  return;
}


