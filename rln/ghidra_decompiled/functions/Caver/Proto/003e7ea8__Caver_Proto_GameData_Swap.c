/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e7ea8
 * Function: Caver::Proto::GameData::Swap
 * Signature: undefined __thiscall Swap(GameData * this, GameData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::Swap(Caver::Proto::GameData*) */

void __thiscall Caver::Proto::GameData::Swap(GameData *this,GameData *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != this) {
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x10),(RepeatedPtrFieldBase *)(param_1 + 0x10));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x48),(RepeatedPtrFieldBase *)(param_1 + 0x48));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x80),(RepeatedPtrFieldBase *)(param_1 + 0x80));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0xb8),(RepeatedPtrFieldBase *)(param_1 + 0xb8));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0xf0),(RepeatedPtrFieldBase *)(param_1 + 0xf0));
    uVar1 = *(undefined4 *)(this + 0x128);
    *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x128) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


