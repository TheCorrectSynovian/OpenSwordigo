/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f11bc
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::QuestText> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom
          (RepeatedPtrField<Caver::Proto::QuestText> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  QuestText *this_00;
  int iVar3;
  QuestText *pQVar4;
  long lVar5;
  int iVar6;
  
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar2 = PTR__default_quest_name__007e6638;
  if (0 < *(int *)(param_1 + 8)) {
    lVar5 = 0;
    puVar1 = PTR_vtable_007e4c28 + 0x10;
    do {
      iVar6 = *(int *)(this + 8);
      iVar3 = *(int *)(this + 0xc);
      pQVar4 = *(QuestText **)(*(long *)param_1 + lVar5 * 8);
      if (iVar6 < iVar3) {
        *(int *)(this + 8) = iVar6 + 1;
        this_00 = *(QuestText **)(*(long *)this + (long)iVar6 * 8);
      }
      else {
        if (iVar3 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar3 + 1);
          iVar6 = *(int *)(this + 8);
          iVar3 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar3 + 1;
        this_00 = operator_new(0x58);
        *(undefined **)this_00 = puVar1;
        *(QuestText **)(this_00 + 0x18) = this_00 + 0x30;
        *(long *)(this_00 + 0x20) = 0;
        *(undefined4 *)(this_00 + 0x28) = 4;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined **)(this_00 + 0x10) = puVar2;
        *(undefined4 *)(this_00 + 0x50) = 0;
        *(int *)(this + 8) = iVar6 + 1;
        *(QuestText **)(*(long *)this + (long)iVar6 * 8) = this_00;
      }
      Caver::Proto::QuestText::MergeFrom(this_00,pQVar4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 8));
  }
  return;
}


