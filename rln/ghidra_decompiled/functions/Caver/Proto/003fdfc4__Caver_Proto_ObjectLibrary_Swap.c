/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fdfc4
 * Function: Caver::Proto::ObjectLibrary::Swap
 * Signature: undefined __thiscall Swap(ObjectLibrary * this, ObjectLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::Swap(Caver::Proto::ObjectLibrary*) */

void __thiscall Caver::Proto::ObjectLibrary::Swap(ObjectLibrary *this,ObjectLibrary *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x18),(RepeatedPtrFieldBase *)(param_1 + 0x18));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x50),(RepeatedPtrFieldBase *)(param_1 + 0x50));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x88),(RepeatedPtrFieldBase *)(param_1 + 0x88));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0xc0),(RepeatedPtrFieldBase *)(param_1 + 0xc0));
    uVar1 = *(undefined4 *)(this + 0xf8);
    *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0xf8) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


