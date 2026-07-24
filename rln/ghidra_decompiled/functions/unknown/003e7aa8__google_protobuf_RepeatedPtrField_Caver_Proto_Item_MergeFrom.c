/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e7aa8
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::Item> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Item>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom
          (RepeatedPtrField<Caver::Proto::Item> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Item *this_00;
  int iVar7;
  Item *pIVar8;
  long lVar9;
  int iVar10;
  
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar6 = PTR__default_description__007e7e10;
  puVar5 = PTR__default_name__007e6888;
  puVar4 = PTR__default_short_description__007e6118;
  puVar3 = PTR__default_title__007e4fd8;
  lVar2 = DAT_0068aa60;
  if (0 < *(int *)(param_1 + 8)) {
    puVar1 = PTR_vtable_007e72f8 + 0x10;
    lVar9 = 0;
    do {
      iVar10 = *(int *)(this + 8);
      iVar7 = *(int *)(this + 0xc);
      pIVar8 = *(Item **)(*(long *)param_1 + lVar9 * 8);
      if (iVar10 < iVar7) {
        *(int *)(this + 8) = iVar10 + 1;
        this_00 = *(Item **)(*(long *)this + (long)iVar10 * 8);
      }
      else {
        if (iVar7 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar7 + 1);
          iVar10 = *(int *)(this + 8);
          iVar7 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar7 + 1;
        this_00 = operator_new(0x48);
        *(undefined **)this_00 = puVar1;
        *(long *)(this_00 + 8) = lVar2;
        this_00[0x30] = (Item)0x0;
        *(undefined **)(this_00 + 0x18) = puVar3;
        *(undefined **)(this_00 + 0x10) = puVar5;
        *(undefined8 *)(this_00 + 0x3c) = 0;
        *(undefined8 *)(this_00 + 0x34) = 0;
        *(undefined **)(this_00 + 0x28) = puVar6;
        *(undefined **)(this_00 + 0x20) = puVar4;
        *(int *)(this + 8) = iVar10 + 1;
        *(Item **)(*(long *)this + (long)iVar10 * 8) = this_00;
      }
      Caver::Proto::Item::MergeFrom(this_00,pIVar8);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 8));
  }
  return;
}


