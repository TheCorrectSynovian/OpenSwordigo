/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec5d4
 * Function: Caver::Proto::QuestState::SharedCtor
 * Signature: undefined __thiscall SharedCtor(QuestState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestState::SharedCtor() */

void __thiscall Caver::Proto::QuestState::SharedCtor(QuestState *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_quest_name__007e6f40;
  this[0x18] = (QuestState)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


