/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3a78
 * Function: Caver::QuestState::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(QuestState * this, QuestState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestState::LoadFromProtobufMessage(Caver::Proto::QuestState const&) */

void __thiscall Caver::QuestState::LoadFromProtobufMessage(QuestState *this,QuestState *param_1)

{
                    /* catch() { ... } // from try @ 004c373c with catch @ 004c3a7c */
                    /* catch() { ... } // from try @ 004c3718 with catch @ 004c3a80 */
  FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
  this[8] = *(QuestState *)(param_1 + 0x18);
  return;
}


