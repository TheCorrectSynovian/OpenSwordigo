/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ed724
 * Function: Caver::Proto::QuestText::CopyFrom
 * Signature: undefined __thiscall CopyFrom(QuestText * this, QuestText * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestText::CopyFrom(Caver::Proto::QuestText const&) */

void __thiscall Caver::Proto::QuestText::CopyFrom(QuestText *this,QuestText *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


