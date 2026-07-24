/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e1eb4
 * Function: Caver::Proto::Quest::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Quest::New() const */

void Caver::Proto::Quest::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  
  plVar5 = operator_new(0x38);
  puVar3 = PTR__default_name__007e5e30;
  puVar2 = PTR__default_follow_up_quest__007e5bb8;
  puVar1 = PTR_vtable_007e5b70;
  *(undefined4 *)(plVar5 + 1) = 0;
  *plVar5 = (long)(puVar1 + 0x10);
  puVar4 = PTR__default_title__007e6d70;
  puVar1 = PTR__default_map_location__007e4c80;
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[3] = (long)puVar4;
  plVar5[2] = (long)puVar3;
  plVar5[5] = (long)puVar1;
  plVar5[4] = (long)puVar2;
  return;
}


