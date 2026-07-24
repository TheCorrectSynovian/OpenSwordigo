/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ed314
 * Function: Caver::Proto::QuestText::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestText::New() const */

void Caver::Proto::QuestText::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x58);
  puVar1 = PTR_vtable_007e4c28;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[2] = (long)PTR__default_quest_name__007e6638;
  plVar2[3] = (long)(plVar2 + 6);
  *(undefined4 *)(plVar2 + 5) = 4;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 10) = 0;
  return;
}


