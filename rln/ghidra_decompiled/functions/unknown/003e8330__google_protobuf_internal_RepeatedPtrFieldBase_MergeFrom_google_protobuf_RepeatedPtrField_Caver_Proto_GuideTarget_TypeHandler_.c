/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e8330
 * Function: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>
 * Signature: void __thiscall MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>(RepeatedPtrFieldBase * this, RepeatedPtrFieldBase * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase
   const&) */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  GuideTarget *this_00;
  int iVar6;
  GuideTarget *pGVar7;
  long lVar8;
  int iVar9;
  
  Reserve(this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar5 = PTR__default_object_identifier__007e7520;
  puVar4 = PTR__default_level_name__007e6788;
  puVar3 = PTR__default_name__007e4fe0;
  puVar2 = PTR__default_carry_object_identifier__007e49b0;
  if (0 < *(int *)(param_1 + 8)) {
    lVar8 = 0;
    puVar1 = PTR_vtable_007e5c88 + 0x10;
    do {
      iVar9 = *(int *)(this + 8);
      iVar6 = *(int *)(this + 0xc);
      pGVar7 = *(GuideTarget **)(*(long *)param_1 + lVar8 * 8);
      if (iVar9 < iVar6) {
        *(int *)(this + 8) = iVar9 + 1;
        this_00 = *(GuideTarget **)(*(long *)this + (long)iVar9 * 8);
      }
      else {
        if (iVar6 == *(int *)(this + 0x10)) {
          Reserve(this,iVar6 + 1);
          iVar9 = *(int *)(this + 8);
          iVar6 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar6 + 1;
        this_00 = operator_new(0x78);
        *(undefined **)this_00 = puVar1;
        *(long *)(this_00 + 0x40) = 0;
        *(undefined **)(this_00 + 0x18) = puVar4;
        *(undefined **)(this_00 + 0x10) = puVar3;
        *(undefined4 *)(this_00 + 0x48) = 4;
        *(long *)(this_00 + 8) = 0;
        this_00[0x30] = (GuideTarget)0x0;
        *(undefined **)(this_00 + 0x28) = puVar2;
        *(undefined **)(this_00 + 0x20) = puVar5;
        *(GuideTarget **)(this_00 + 0x38) = this_00 + 0x50;
        *(undefined4 *)(this_00 + 0x70) = 0;
        *(int *)(this + 8) = iVar9 + 1;
        *(GuideTarget **)(*(long *)this + (long)iVar9 * 8) = this_00;
      }
      Caver::Proto::GuideTarget::MergeFrom(this_00,pGVar7);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 8));
  }
  return;
}


