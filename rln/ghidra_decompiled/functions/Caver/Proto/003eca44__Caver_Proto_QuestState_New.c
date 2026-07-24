/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003eca44
 * Function: Caver::Proto::QuestState::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestState::New() const */

void Caver::Proto::QuestState::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e7118;
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar1 = PTR__default_quest_name__007e6f40;
  *(undefined1 *)(plVar3 + 3) = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[2] = (long)puVar1;
  *(undefined4 *)((long)plVar3 + 0x1c) = 0;
  return;
}


