/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040bc08
 * Function: Caver::Proto::CollisionShapeComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::New() const */

void Caver::Proto::CollisionShapeComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x48);
  *(undefined1 *)((long)plVar2 + 0xc) = 1;
  puVar1 = PTR_vtable_007e73d8;
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined4 *)((long)plVar2 + 0xd) = 0;
  *(undefined8 *)((long)plVar2 + 0x1c) = 0;
  *(undefined8 *)((long)plVar2 + 0x14) = 0;
  *(undefined1 *)((long)plVar2 + 0x24) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[5] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 8) = 0;
  return;
}


