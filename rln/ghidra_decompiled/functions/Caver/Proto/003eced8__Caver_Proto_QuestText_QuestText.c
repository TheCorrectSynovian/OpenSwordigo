/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003eced8
 * Function: Caver::Proto::QuestText::QuestText
 * Signature: undefined __thiscall QuestText(QuestText * this, QuestText * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestText::QuestText(Caver::Proto::QuestText const&) */

void __thiscall Caver::Proto::QuestText::QuestText(QuestText *this,QuestText *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4c28;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x10) = PTR__default_quest_name__007e6638;
  *(QuestText **)(this + 0x18) = this + 0x30;
  *(undefined4 *)(this + 0x28) = 4;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x50) = 0;
  MergeFrom(this,param_1);
  return;
}


