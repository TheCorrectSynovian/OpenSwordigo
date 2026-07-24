/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e4f00
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom
          (RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  GuideTarget_LevelObject *this_00;
  int iVar4;
  GuideTarget_LevelObject *pGVar5;
  long lVar6;
  int iVar7;
  
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar3 = PTR__default_object_identifier__007e7308;
  puVar2 = PTR__default_level_name__007e6158;
  if (0 < *(int *)(param_1 + 8)) {
    lVar6 = 0;
    puVar1 = PTR_vtable_007e53b0 + 0x10;
    do {
      iVar7 = *(int *)(this + 8);
      iVar4 = *(int *)(this + 0xc);
      pGVar5 = *(GuideTarget_LevelObject **)(*(long *)param_1 + lVar6 * 8);
      if (iVar7 < iVar4) {
        *(int *)(this + 8) = iVar7 + 1;
        this_00 = *(GuideTarget_LevelObject **)(*(long *)this + (long)iVar7 * 8);
      }
      else {
        if (iVar4 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar4 + 1);
          iVar7 = *(int *)(this + 8);
          iVar4 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar4 + 1;
        this_00 = operator_new(0x28);
        *(undefined **)this_00 = puVar1;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined4 *)(this_00 + 0x20) = 0;
        *(undefined **)(this_00 + 0x18) = puVar3;
        *(undefined **)(this_00 + 0x10) = puVar2;
        *(int *)(this + 8) = iVar7 + 1;
        *(GuideTarget_LevelObject **)(*(long *)this + (long)iVar7 * 8) = this_00;
      }
      Caver::Proto::GuideTarget_LevelObject::MergeFrom(this_00,pGVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 8));
  }
  return;
}


