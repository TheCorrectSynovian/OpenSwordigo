/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003db1b0
 * Function: google::protobuf::RepeatedPtrField<std::string>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<std::string> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<std::string
   >::MergeFrom(google::protobuf::RepeatedPtrField<std::string > const&) */

void __thiscall
google::protobuf::RepeatedPtrField<std::string>::MergeFrom
          (RepeatedPtrField<std::string> *this,RepeatedPtrField *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  if (0 < *(int *)(param_1 + 8)) {
    lVar5 = 0;
    do {
      iVar1 = *(int *)(this + 8);
      iVar3 = *(int *)(this + 0xc);
      uVar4 = *(undefined8 *)(*(long *)param_1 + lVar5 * 8);
      if (iVar1 < iVar3) {
        *(int *)(this + 8) = iVar1 + 1;
        uVar2 = *(undefined8 *)(*(long *)this + (long)iVar1 * 8);
      }
      else {
        if (iVar3 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar3 + 1);
          iVar3 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar3 + 1;
        uVar2 = internal::StringTypeHandlerBase::New();
        iVar1 = *(int *)(this + 8);
        *(int *)(this + 8) = iVar1 + 1;
        *(undefined8 *)(*(long *)this + (long)iVar1 * 8) = uVar2;
      }
      FUN_0066a6a8(uVar2,uVar4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 8));
  }
  return;
}


