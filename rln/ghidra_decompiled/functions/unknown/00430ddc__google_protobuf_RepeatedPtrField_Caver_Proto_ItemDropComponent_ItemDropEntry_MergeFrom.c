/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430ddc
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom
          (RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry> *this,
          RepeatedPtrField *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ItemDropComponent_ItemDropEntry *this_00;
  int iVar4;
  ItemDropComponent_ItemDropEntry *pIVar5;
  long lVar6;
  int iVar7;
  
                    /* try { // try from 00430de0 to 00530de3 has its CatchHandler @ 00430dec */
                    /* try { // try from 00430de4 to 00530e03 has its CatchHandler @ 00430cb8 */
                    /* catch() { ... } // from try @ 00430de0 with catch @ 00430dec */
                    /* catch() { ... } // from try @ 00430dd4 with catch @ 00430df8 */
                    /* try { // try from 00430e04 to 00530e07 has its CatchHandler @ 00430e10 */
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar3 = PTR__default_item_identifier__007e7320;
  puVar2 = PTR__default_template_name__007e6418;
                    /* catch() { ... } // from try @ 00430e04 with catch @ 00430e10 */
  if (0 < *(int *)(param_1 + 8)) {
    lVar6 = 0;
    puVar1 = PTR_vtable_007e5f28 + 0x10;
    do {
      iVar7 = *(int *)(this + 8);
      iVar4 = *(int *)(this + 0xc);
      pIVar5 = *(ItemDropComponent_ItemDropEntry **)(*(long *)param_1 + lVar6 * 8);
      if (iVar7 < iVar4) {
        *(int *)(this + 8) = iVar7 + 1;
        this_00 = *(ItemDropComponent_ItemDropEntry **)(*(long *)this + (long)iVar7 * 8);
      }
      else {
        if (iVar4 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar4 + 1);
          iVar7 = *(int *)(this + 8);
          iVar4 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar4 + 1;
        this_00 = operator_new(0x30);
        *(undefined **)this_00 = puVar1;
        *(undefined4 *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x20) = 0;
        *(long *)(this_00 + 0x28) = 0;
        *(undefined **)(this_00 + 0x18) = puVar3;
        *(undefined **)(this_00 + 0x10) = puVar2;
        *(int *)(this + 8) = iVar7 + 1;
        *(ItemDropComponent_ItemDropEntry **)(*(long *)this + (long)iVar7 * 8) = this_00;
      }
      Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(this_00,pIVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 8));
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00430fac with catch @ 00430ee4
                       catch(type#1 @ 00000000) { ... } // from try @ 00431104 with catch @ 00430ee4
                        */
  return;
}


