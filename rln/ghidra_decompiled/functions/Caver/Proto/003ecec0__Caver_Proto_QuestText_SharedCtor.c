/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ecec0
 * Function: Caver::Proto::QuestText::SharedCtor
 * Signature: undefined __thiscall SharedCtor(QuestText * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestText::SharedCtor() */

void __thiscall Caver::Proto::QuestText::SharedCtor(QuestText *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_quest_name__007e6638;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


