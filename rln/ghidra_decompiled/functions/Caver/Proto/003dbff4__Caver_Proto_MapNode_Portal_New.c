/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dbff4
 * Function: Caver::Proto::MapNode_Portal::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode_Portal::New() const */

void Caver::Proto::MapNode_Portal::New(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = operator_new(0x28);
  puVar3 = PTR_vtable_007e78c0;
  *(undefined4 *)(plVar4 + 1) = 0;
  puVar2 = PTR__default_destination_name__007e6b58;
  lVar1 = DAT_00689bc8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[2] = (long)puVar2;
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[3] = lVar1;
  *(undefined4 *)((long)plVar4 + 0x24) = 0;
  return;
}


