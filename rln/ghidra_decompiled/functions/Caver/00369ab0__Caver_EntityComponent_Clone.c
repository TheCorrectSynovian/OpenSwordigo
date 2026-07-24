/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00369ab0
 * Function: Caver::EntityComponent::Clone
 * Signature: undefined __thiscall Clone(EntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::EntityComponent::Clone() const */

long * __thiscall Caver::EntityComponent::Clone(EntityComponent *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = operator_new(0x130);
  *(undefined4 *)(plVar4 + 1) = 0;
  puVar3 = PTR_vtable_007e5c90;
  plVar4[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined1 *)(plVar4 + 6) = 0;
  plVar5 = plVar4 + 9;
  *plVar5 = 0;
  *(undefined4 *)(plVar4 + 0xe) = 1;
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[10] = 0;
  plVar4[0xb] = (long)plVar5;
  plVar4[0xc] = (long)plVar5;
  plVar4[0xd] = 0;
  plVar4[3] = (long)(puVar3 + 0x168);
  plVar4[2] = (long)(puVar3 + 0x128);
  PhysicsObjectState::PhysicsObjectState((PhysicsObjectState *)(plVar4 + 0xf));
  uVar2 = _UNK_00687f28;
  uVar1 = _DAT_00687f20;
  *(undefined1 *)(plVar4 + 0x20) = 0;
  *(undefined8 *)((long)plVar4 + 0x10c) = uVar2;
  *(undefined8 *)((long)plVar4 + 0x104) = uVar1;
  *(undefined2 *)((long)plVar4 + 0x114) = 0;
  plVar4[0x23] = 0;
  *(undefined1 *)(plVar4 + 0x25) = 0;
  *(undefined4 *)(plVar4 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar4 + 7,this + 0x38);
  *(undefined4 *)(plVar4 + 0xe) = *(undefined4 *)(this + 0x70);
  *(EntityComponent *)((long)plVar4 + 0xec) = this[0xec];
  return plVar4;
}


