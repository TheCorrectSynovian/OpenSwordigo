/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ddc30
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::MapNode_Portal> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom
          (RepeatedPtrField<Caver::Proto::MapNode_Portal> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  MapNode_Portal *this_00;
  int iVar4;
  MapNode_Portal *pMVar5;
  long lVar6;
  int iVar7;
  
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar3 = PTR__default_destination_name__007e6b58;
  lVar2 = DAT_00689bc8;
  if (0 < *(int *)(param_1 + 8)) {
    lVar6 = 0;
    puVar1 = PTR_vtable_007e78c0 + 0x10;
    do {
      iVar7 = *(int *)(this + 8);
      iVar4 = *(int *)(this + 0xc);
      pMVar5 = *(MapNode_Portal **)(*(long *)param_1 + lVar6 * 8);
      if (iVar7 < iVar4) {
        *(int *)(this + 8) = iVar7 + 1;
        this_00 = *(MapNode_Portal **)(*(long *)this + (long)iVar7 * 8);
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
        *(undefined **)(this_00 + 0x10) = puVar3;
        *(long *)(this_00 + 0x18) = lVar2;
        this_00[0x20] = (MapNode_Portal)0x0;
        *(undefined4 *)(this_00 + 0x24) = 0;
        *(int *)(this + 8) = iVar7 + 1;
        *(MapNode_Portal **)(*(long *)this + (long)iVar7 * 8) = this_00;
      }
      Caver::Proto::MapNode_Portal::MergeFrom(this_00,pMVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 8));
  }
  return;
}


