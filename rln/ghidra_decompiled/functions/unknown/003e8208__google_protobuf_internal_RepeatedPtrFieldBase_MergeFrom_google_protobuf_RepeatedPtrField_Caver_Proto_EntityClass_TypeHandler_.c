/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e8208
 * Function: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::EntityClass>::TypeHandler>
 * Signature: void __thiscall MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::EntityClass>::TypeHandler>(RepeatedPtrFieldBase * this, RepeatedPtrFieldBase * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::EntityClass>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase
   const&) */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::EntityClass>::TypeHandler>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  EntityClass *this_00;
  int iVar4;
  EntityClass *pEVar5;
  long lVar6;
  int iVar7;
  
  Reserve(this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar3 = PTR__default_name__007e5c18;
  puVar2 = PTR__default_title__007e56f8;
  if (0 < *(int *)(param_1 + 8)) {
    lVar6 = 0;
    puVar1 = PTR_vtable_007e69c8 + 0x10;
    do {
      iVar7 = *(int *)(this + 8);
      iVar4 = *(int *)(this + 0xc);
      pEVar5 = *(EntityClass **)(*(long *)param_1 + lVar6 * 8);
      if (iVar7 < iVar4) {
        *(int *)(this + 8) = iVar7 + 1;
        this_00 = *(EntityClass **)(*(long *)this + (long)iVar7 * 8);
      }
      else {
        if (iVar4 == *(int *)(this + 0x10)) {
          Reserve(this,iVar4 + 1);
          iVar7 = *(int *)(this + 8);
          iVar4 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar4 + 1;
        this_00 = operator_new(0x30);
        *(undefined **)this_00 = puVar1;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined4 *)(this_00 + 0x20) = 0x1010100;
        *(undefined4 *)(this_00 + 0x24) = 0;
        *(undefined **)(this_00 + 0x18) = puVar2;
        *(undefined **)(this_00 + 0x10) = puVar3;
        *(long *)(this_00 + 0x28) = 0;
        *(int *)(this + 8) = iVar7 + 1;
        *(EntityClass **)(*(long *)this + (long)iVar7 * 8) = this_00;
      }
      Caver::Proto::EntityClass::MergeFrom(this_00,pEVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 8));
  }
  return;
}


