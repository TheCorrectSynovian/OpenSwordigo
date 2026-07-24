/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3aa8
 * Function: Caver::QuestState::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(QuestState * this, QuestState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestState::SaveToProtobufMessage(Caver::Proto::QuestState*) const */

void __thiscall Caver::QuestState::SaveToProtobufMessage(QuestState *this,QuestState *param_1)

{
  QuestState QVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR__default_quest_name__007e6f40;
                    /* catch() { ... } // from try @ 004c3700 with catch @ 004c3ab8 */
                    /* catch() { ... } // from try @ 004c36d8 with catch @ 004c3abc */
  plVar3 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
  if (plVar3 == (long *)puVar2) {
    plVar3 = operator_new(8);
    *plVar3 = (long)(PTR_DAT_007e5de8 + 0x18);
                    /* catch() { ... } // from try @ 004c36c4 with catch @ 004c3af4 */
    *(long **)(param_1 + 0x10) = plVar3;
  }
                    /* catch() { ... } // from try @ 004c369c with catch @ 004c3af8 */
  FUN_0066a6a8(plVar3,this);
  QVar1 = this[8];
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
  *(QuestState *)(param_1 + 0x18) = QVar1;
  return;
}


