/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d86d0
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::SoundEffect> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom
          (RepeatedPtrField<Caver::Proto::SoundEffect> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  SoundEffect *this_00;
  int iVar5;
  SoundEffect *pSVar6;
  long lVar7;
  int iVar8;
  
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar4 = PTR__default_name__007e7200;
  puVar3 = PTR__default_resource_name__007e66e8;
  lVar2 = DAT_0068a310;
  if (0 < *(int *)(param_1 + 8)) {
    puVar1 = PTR_vtable_007e5368 + 0x10;
    lVar7 = 0;
    do {
      iVar8 = *(int *)(this + 8);
      iVar5 = *(int *)(this + 0xc);
      pSVar6 = *(SoundEffect **)(*(long *)param_1 + lVar7 * 8);
      if (iVar8 < iVar5) {
        *(int *)(this + 8) = iVar8 + 1;
        this_00 = *(SoundEffect **)(*(long *)this + (long)iVar8 * 8);
      }
      else {
        if (iVar5 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar5 + 1);
          iVar8 = *(int *)(this + 8);
          iVar5 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar5 + 1;
        this_00 = operator_new(0x30);
        *(undefined **)this_00 = puVar1;
        *(undefined4 *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x20) = lVar2;
        *(undefined **)(this_00 + 0x18) = puVar3;
        *(undefined **)(this_00 + 0x10) = puVar4;
        *(undefined4 *)(this_00 + 0x28) = 0;
        *(int *)(this + 8) = iVar8 + 1;
        *(SoundEffect **)(*(long *)this + (long)iVar8 * 8) = this_00;
      }
      Caver::Proto::SoundEffect::MergeFrom(this_00,pSVar6);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 8));
  }
  return;
}


