/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043dcbc
 * Function: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>
 * Signature: void __thiscall MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>(RepeatedPtrFieldBase * this, RepeatedPtrFieldBase * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase
   const&) */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  Mesh *this_00;
  int iVar4;
  Mesh *pMVar5;
  long lVar6;
  int iVar7;
  
                    /* catch() { ... } // from try @ 0043dd20 with catch @ 0043dcf0 */
  Reserve(this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar3 = PTR__default_index_data__007e6c48;
  puVar2 = PTR__default_vertex_data__007e5ae0;
  if (0 < *(int *)(param_1 + 8)) {
                    /* try { // try from 0043dd0c to 0053dd1f has its CatchHandler @ 0043dd44 */
    lVar6 = 0;
    puVar1 = PTR_vtable_007e6d30 + 0x10;
                    /* try { // try from 0043dd20 to 0053dd47 has its CatchHandler @ 0043dcf0 */
    do {
      iVar7 = *(int *)(this + 8);
      iVar4 = *(int *)(this + 0xc);
      pMVar5 = *(Mesh **)(*(long *)param_1 + lVar6 * 8);
                    /* catch() { ... } // from try @ 0043dd0c with catch @ 0043dd44 */
      if (iVar7 < iVar4) {
                    /* catch() { ... } // from try @ 0043dd74 with catch @ 0043dd54
                       catch() { ... } // from try @ 0043ddd8 with catch @ 0043dd54 */
        *(int *)(this + 8) = iVar7 + 1;
        this_00 = *(Mesh **)(*(long *)this + (long)iVar7 * 8);
      }
      else {
        if (iVar4 == *(int *)(this + 0x10)) {
                    /* try { // try from 0043dd6c to 0053dd73 has its CatchHandler @ 0043dda4 */
                    /* try { // try from 0043dd74 to 0053ddab has its CatchHandler @ 0043dd54 */
          Reserve(this,iVar4 + 1);
          iVar7 = *(int *)(this + 8);
          iVar4 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar4 + 1;
        this_00 = operator_new(0xa8);
        *(undefined **)this_00 = puVar1;
        *(long *)(this_00 + 0x38) = 0;
        *(undefined4 *)(this_00 + 0x40) = 4;
        *(long *)(this_00 + 8) = 0;
                    /* catch() { ... } // from try @ 0043dd6c with catch @ 0043dda4 */
        *(undefined4 *)(this_00 + 0x10) = 0;
        *(long *)(this_00 + 0x18) = 0;
        *(long *)(this_00 + 0x20) = 0;
                    /* try { // try from 0043ddac to 0053ddb3 has its CatchHandler @ 0043ddc0 */
        *(long *)(this_00 + 0x80) = 0;
        *(long *)(this_00 + 0x88) = 0;
        *(long *)(this_00 + 0x70) = 0;
        *(long *)(this_00 + 0x78) = 0;
        *(long *)(this_00 + 0x68) = 0;
        *(undefined **)(this_00 + 0x98) = puVar3;
        *(undefined **)(this_00 + 0x90) = puVar2;
                    /* try { // try from 0043ddbc to 0053ddbf has its CatchHandler @ 0043ddd0 */
        *(long *)(this_00 + 0x28) = 0;
        *(Mesh **)(this_00 + 0x30) = this_00 + 0x48;
                    /* catch() { ... } // from try @ 0043ddac with catch @ 0043ddc0 */
        *(undefined4 *)(this_00 + 0xa0) = 0;
        *(int *)(this + 8) = iVar7 + 1;
                    /* catch() { ... } // from try @ 0043ddbc with catch @ 0043ddd0 */
        *(Mesh **)(*(long *)this + (long)iVar7 * 8) = this_00;
      }
                    /* try { // try from 0043ddd4 to 0053ddd7 has its CatchHandler @ 0043dde0 */
                    /* try { // try from 0043ddd8 to 0053dde3 has its CatchHandler @ 0043dd54 */
      Caver::Proto::Mesh::MergeFrom(this_00,pMVar5);
                    /* catch() { ... } // from try @ 0043ddd4 with catch @ 0043dde0 */
      lVar6 = lVar6 + 1;
                    /* catch() { ... } // from try @ 0043de04 with catch @ 0043dde8 */
    } while (lVar6 < *(int *)(param_1 + 8));
  }
                    /* try { // try from 0043ddfc to 0053de03 has its CatchHandler @ 0043de20 */
                    /* try { // try from 0043de04 to 0053de33 has its CatchHandler @ 0043dde8 */
  return;
}


