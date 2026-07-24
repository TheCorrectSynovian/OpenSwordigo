/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec5a8
 * Function: Caver::Proto::QuestState::QuestState
 * Signature: undefined __thiscall QuestState(QuestState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestState::QuestState() */

void __thiscall Caver::Proto::QuestState::QuestState(QuestState *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e7118;
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_quest_name__007e6f40;
  this[0x18] = (QuestState)0x0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


