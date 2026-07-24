/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037fd04
 * Function: Caver::PhysicsObjectComponent::Clone
 * Signature: undefined __thiscall Clone(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::Clone() const */

long * __thiscall Caver::PhysicsObjectComponent::Clone(PhysicsObjectComponent *this)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = operator_new(0x118);
  *(undefined4 *)(plVar2 + 1) = 0;
  puVar1 = PTR_vtable_007e71a8;
  plVar2[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar2[4] = 0;
  plVar2[5] = 0;
  *(undefined1 *)(plVar2 + 6) = 0;
  plVar3 = plVar2 + 9;
  *plVar3 = 0;
  *(undefined1 *)(plVar2 + 0xe) = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[10] = 0;
  plVar2[0xb] = (long)plVar3;
  plVar2[0xc] = (long)plVar3;
  plVar2[0xd] = 0;
  plVar2[3] = (long)(puVar1 + 0x168);
  plVar2[2] = (long)(puVar1 + 0x128);
  PhysicsObjectState::PhysicsObjectState((PhysicsObjectState *)(plVar2 + 0xf));
  *(undefined8 *)((long)plVar2 + 0x10c) = DAT_00688740;
  *(undefined1 *)((long)plVar2 + 0x114) = 0;
  *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar2 + 7,this + 0x38);
  *(PhysicsObjectComponent *)(plVar2 + 0xe) = this[0x70];
  plVar2[0x1c] = *(long *)(this + 0xe0);
  *(undefined4 *)(plVar2 + 0x1d) = *(undefined4 *)(this + 0xe8);
  *(undefined8 *)((long)plVar2 + 0x10c) = *(undefined8 *)(this + 0x10c);
  *(undefined4 *)((long)plVar2 + 0xac) = *(undefined4 *)(this + 0xac);
  *(PhysicsObjectComponent *)((long)plVar2 + 0xed) = this[0xed];
  *(undefined4 *)(plVar2 + 0x1e) = *(undefined4 *)(this + 0xf0);
  return plVar2;
}


