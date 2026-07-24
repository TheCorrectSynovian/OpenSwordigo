/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ed778
 * Function: Caver::Proto::QuestText::Swap
 * Signature: undefined __thiscall Swap(QuestText * this, QuestText * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestText::Swap(Caver::Proto::QuestText*) */

void __thiscall Caver::Proto::QuestText::Swap(QuestText *this,QuestText *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x18),(RepeatedPtrFieldBase *)(param_1 + 0x18));
    uVar1 = *(undefined4 *)(this + 0x50);
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


