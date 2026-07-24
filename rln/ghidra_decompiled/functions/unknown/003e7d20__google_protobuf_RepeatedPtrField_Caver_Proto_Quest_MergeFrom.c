/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e7d20
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::Quest> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Quest>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom
          (RepeatedPtrField<Caver::Proto::Quest> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  Quest *this_00;
  int iVar6;
  Quest *pQVar7;
  long lVar8;
  int iVar9;
  
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar5 = PTR__default_title__007e6d70;
  puVar4 = PTR__default_name__007e5e30;
  puVar3 = PTR__default_follow_up_quest__007e5bb8;
  puVar2 = PTR__default_map_location__007e4c80;
  if (0 < *(int *)(param_1 + 8)) {
    lVar8 = 0;
    puVar1 = PTR_vtable_007e5b70 + 0x10;
    do {
      iVar9 = *(int *)(this + 8);
      iVar6 = *(int *)(this + 0xc);
      pQVar7 = *(Quest **)(*(long *)param_1 + lVar8 * 8);
      if (iVar9 < iVar6) {
        *(int *)(this + 8) = iVar9 + 1;
        this_00 = *(Quest **)(*(long *)this + (long)iVar9 * 8);
      }
      else {
        if (iVar6 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar6 + 1);
          iVar9 = *(int *)(this + 8);
          iVar6 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar6 + 1;
        this_00 = operator_new(0x38);
        *(undefined **)this_00 = puVar1;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined4 *)(this_00 + 0x30) = 0;
        *(undefined **)(this_00 + 0x18) = puVar5;
        *(undefined **)(this_00 + 0x10) = puVar4;
        *(undefined **)(this_00 + 0x28) = puVar2;
        *(undefined **)(this_00 + 0x20) = puVar3;
        *(int *)(this + 8) = iVar9 + 1;
        *(Quest **)(*(long *)this + (long)iVar9 * 8) = this_00;
      }
      Caver::Proto::Quest::MergeFrom(this_00,pQVar7);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 8));
  }
  return;
}


