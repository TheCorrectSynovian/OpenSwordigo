/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ecd90
 * Function: Caver::Proto::QuestState::CopyFrom
 * Signature: undefined __thiscall CopyFrom(QuestState * this, QuestState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestState::CopyFrom(Caver::Proto::QuestState const&) */

void __thiscall Caver::Proto::QuestState::CopyFrom(QuestState *this,QuestState *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


