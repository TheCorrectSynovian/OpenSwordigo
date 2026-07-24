/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043dba4
 * Function: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::SceneObjectGroup>::TypeHandler>
 * Signature: void __thiscall MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::SceneObjectGroup>::TypeHandler>(RepeatedPtrFieldBase * this, RepeatedPtrFieldBase * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::SceneObjectGroup>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase
   const&) */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::SceneObjectGroup>::TypeHandler>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  SceneObjectGroup *this_00;
  int iVar3;
  SceneObjectGroup *pSVar4;
  long lVar5;
  int iVar6;
  
                    /* try { // try from 0043dba4 to 0053dbab has its CatchHandler @ 0043dbd0 */
                    /* catch() { ... } // from try @ 0043db7c with catch @ 0043dbbc */
                    /* try { // try from 0043dbc0 to 0053dbc7 has its CatchHandler @ 0043dbcc */
                    /* try { // try from 0043dbc8 to 0053dbe3 has its CatchHandler @ 0043db28 */
                    /* catch() { ... } // from try @ 0043dbc0 with catch @ 0043dbcc */
                    /* catch() { ... } // from try @ 0043dba4 with catch @ 0043dbd0 */
  Reserve(this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar2 = PTR__default_identifier__007e5218;
  if (0 < *(int *)(param_1 + 8)) {
                    /* try { // try from 0043dbe4 to 0053dbff has its CatchHandler @ 0043dbe4
                       catch() { ... } // from try @ 0043dbe4 with catch @ 0043dbe4
                       catch() { ... } // from try @ 0043dc04 with catch @ 0043dbe4 */
    lVar5 = 0;
    puVar1 = PTR_vtable_007e63b0 + 0x10;
    do {
                    /* try { // try from 0043dc00 to 0053dc03 has its CatchHandler @ 0043dc5c */
      iVar6 = *(int *)(this + 8);
      iVar3 = *(int *)(this + 0xc);
                    /* try { // try from 0043dc04 to 0053dc6f has its CatchHandler @ 0043dbe4 */
      pSVar4 = *(SceneObjectGroup **)(*(long *)param_1 + lVar5 * 8);
      if (iVar6 < iVar3) {
        *(int *)(this + 8) = iVar6 + 1;
        this_00 = *(SceneObjectGroup **)(*(long *)this + (long)iVar6 * 8);
      }
      else {
        if (iVar3 == *(int *)(this + 0x10)) {
          Reserve(this,iVar3 + 1);
          iVar6 = *(int *)(this + 8);
          iVar3 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar3 + 1;
        this_00 = operator_new(0x68);
        *(undefined **)this_00 = puVar1;
                    /* catch() { ... } // from try @ 0043dc00 with catch @ 0043dc5c */
        *(SceneObjectGroup **)(this_00 + 0x18) = this_00 + 0x30;
        *(long *)(this_00 + 0x20) = 0;
        *(undefined4 *)(this_00 + 0x28) = 4;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined2 *)(this_00 + 0x50) = 0;
        this_00[0x52] = (SceneObjectGroup)0x0;
        *(long *)(this_00 + 0x58) = 0;
        *(undefined **)(this_00 + 0x10) = puVar2;
        *(undefined4 *)(this_00 + 0x60) = 0;
        *(int *)(this + 8) = iVar6 + 1;
        *(SceneObjectGroup **)(*(long *)this + (long)iVar6 * 8) = this_00;
      }
      Caver::Proto::SceneObjectGroup::MergeFrom(this_00,pSVar4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 8));
  }
  return;
}


