/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ecde4
 * Function: Caver::Proto::QuestState::Swap
 * Signature: undefined __thiscall Swap(QuestState * this, QuestState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestState::Swap(Caver::Proto::QuestState*) */

void __thiscall Caver::Proto::QuestState::Swap(QuestState *this,QuestState *param_1)

{
  undefined4 uVar1;
  QuestState QVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    QVar2 = this[0x18];
    this[0x18] = param_1[0x18];
    param_1[0x18] = QVar2;
    uVar1 = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


