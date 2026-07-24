/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b0bc
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::MeshData> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom
          (RepeatedPtrField<Caver::Proto::MeshData> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  long lVar2;
  MeshData *this_00;
  int iVar3;
  MeshData *pMVar4;
  long lVar5;
  int iVar6;
  
                    /* try { // try from 0043b0c8 to 0053b0d7 has its CatchHandler @ 0043b6bc */
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  lVar2 = DAT_0068aa60;
  if (0 < *(int *)(param_1 + 8)) {
    lVar5 = 0;
    puVar1 = PTR_vtable_007e7be0 + 0x10;
    do {
      iVar6 = *(int *)(this + 8);
      iVar3 = *(int *)(this + 0xc);
      pMVar4 = *(MeshData **)(*(long *)param_1 + lVar5 * 8);
      if (iVar6 < iVar3) {
        *(int *)(this + 8) = iVar6 + 1;
        this_00 = *(MeshData **)(*(long *)this + (long)iVar6 * 8);
      }
      else {
                    /* try { // try from 0043b140 to 0053b14b has its CatchHandler @ 0043b578 */
        if (iVar3 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar3 + 1);
          iVar6 = *(int *)(this + 8);
          iVar3 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar3 + 1;
        this_00 = operator_new(0x20);
        *(undefined **)this_00 = puVar1;
                    /* try { // try from 0043b16c to 0053b193 has its CatchHandler @ 0043b434 */
        *(long *)(this_00 + 8) = lVar2;
        *(long *)(this_00 + 0x10) = 0;
        *(long *)(this_00 + 0x18) = 0;
        *(int *)(this + 8) = iVar6 + 1;
        *(MeshData **)(*(long *)this + (long)iVar6 * 8) = this_00;
      }
      Caver::Proto::MeshData::MergeFrom(this_00,pMVar4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 8));
  }
  return;
}


