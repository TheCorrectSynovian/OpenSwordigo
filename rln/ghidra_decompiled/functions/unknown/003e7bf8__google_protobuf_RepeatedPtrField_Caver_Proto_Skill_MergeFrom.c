/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e7bf8
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::Skill> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Skill>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom
          (RepeatedPtrField<Caver::Proto::Skill> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  Skill *this_00;
  int iVar5;
  Skill *pSVar6;
  long lVar7;
  int iVar8;
  
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar4 = PTR__default_description__007e7dc0;
  puVar3 = PTR__default_title__007e7328;
  puVar2 = PTR__default_name__007e6d10;
  if (0 < *(int *)(param_1 + 8)) {
    lVar7 = 0;
    puVar1 = PTR_vtable_007e5620 + 0x10;
    do {
      iVar8 = *(int *)(this + 8);
      iVar5 = *(int *)(this + 0xc);
      pSVar6 = *(Skill **)(*(long *)param_1 + lVar7 * 8);
      if (iVar8 < iVar5) {
        *(int *)(this + 8) = iVar8 + 1;
        this_00 = *(Skill **)(*(long *)this + (long)iVar8 * 8);
      }
      else {
        if (iVar5 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar5 + 1);
          iVar8 = *(int *)(this + 8);
          iVar5 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar5 + 1;
        this_00 = operator_new(0x38);
        *(undefined **)this_00 = puVar1;
        *(undefined4 *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x28) = 0;
        *(long *)(this_00 + 0x30) = 0;
        *(undefined **)(this_00 + 0x18) = puVar3;
        *(undefined **)(this_00 + 0x10) = puVar2;
        *(undefined **)(this_00 + 0x20) = puVar4;
        *(int *)(this + 8) = iVar8 + 1;
        *(Skill **)(*(long *)this + (long)iVar8 * 8) = this_00;
      }
      Caver::Proto::Skill::MergeFrom(this_00,pSVar6);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 8));
  }
  return;
}


