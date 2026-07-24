/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e80cc
 * Function: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>
 * Signature: void __thiscall MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>(RepeatedPtrFieldBase * this, RepeatedPtrFieldBase * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase
   const&) */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  MapZone *this_00;
  int iVar5;
  MapZone *pMVar6;
  long lVar7;
  int iVar8;
  
  Reserve(this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar4 = PTR__default_title__007e7d78;
  puVar3 = PTR__default_music__007e5568;
  puVar2 = PTR__default_name__007e5428;
  if (0 < *(int *)(param_1 + 8)) {
    lVar7 = 0;
    puVar1 = PTR_vtable_007e7268 + 0x10;
    do {
      iVar8 = *(int *)(this + 8);
      iVar5 = *(int *)(this + 0xc);
      pMVar6 = *(MapZone **)(*(long *)param_1 + lVar7 * 8);
      if (iVar8 < iVar5) {
        *(int *)(this + 8) = iVar8 + 1;
        this_00 = *(MapZone **)(*(long *)this + (long)iVar8 * 8);
      }
      else {
        if (iVar5 == *(int *)(this + 0x10)) {
          Reserve(this,iVar5 + 1);
          iVar8 = *(int *)(this + 8);
          iVar5 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar5 + 1;
        this_00 = operator_new(0x70);
        *(undefined **)this_00 = puVar1;
        *(MapZone **)(this_00 + 0x20) = this_00 + 0x38;
        *(long *)(this_00 + 0x28) = 0;
        *(undefined4 *)(this_00 + 0x30) = 4;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined **)(this_00 + 0x18) = puVar4;
        *(undefined **)(this_00 + 0x10) = puVar2;
        *(undefined4 *)(this_00 + 0x58) = 0;
        *(undefined **)(this_00 + 0x60) = puVar3;
        *(undefined4 *)(this_00 + 0x68) = 0;
        *(int *)(this + 8) = iVar8 + 1;
        *(MapZone **)(*(long *)this + (long)iVar8 * 8) = this_00;
      }
      Caver::Proto::MapZone::MergeFrom(this_00,pMVar6);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 8));
  }
  return;
}


