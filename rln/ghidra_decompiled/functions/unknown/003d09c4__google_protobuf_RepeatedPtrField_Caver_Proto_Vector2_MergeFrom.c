/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d09c4
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::Vector2> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom
          (RepeatedPtrField<Caver::Proto::Vector2> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  Vector2 *this_00;
  int iVar2;
  Vector2 *pVVar3;
  long lVar4;
  int iVar5;
  
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  if (0 < *(int *)(param_1 + 8)) {
    lVar4 = 0;
    puVar1 = PTR_vtable_007e6758 + 0x10;
    do {
      iVar5 = *(int *)(this + 8);
      iVar2 = *(int *)(this + 0xc);
      pVVar3 = *(Vector2 **)(*(long *)param_1 + lVar4 * 8);
      if (iVar5 < iVar2) {
        *(int *)(this + 8) = iVar5 + 1;
        this_00 = *(Vector2 **)(*(long *)this + (long)iVar5 * 8);
      }
      else {
        if (iVar2 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar2 + 1);
          iVar5 = *(int *)(this + 8);
          iVar2 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar2 + 1;
        this_00 = operator_new(0x18);
        *(long *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x10) = 0;
        *(undefined **)this_00 = puVar1;
        *(int *)(this + 8) = iVar5 + 1;
        *(Vector2 **)(*(long *)this + (long)iVar5 * 8) = this_00;
      }
      Caver::Proto::Vector2::MergeFrom(this_00,pVVar3);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 8));
  }
  return;
}


