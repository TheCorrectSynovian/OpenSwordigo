/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003df668
 * Function: Caver::Proto::Map::Swap
 * Signature: undefined __thiscall Swap(Map * this, Map * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Map::Swap(Caver::Proto::Map*) */

void __thiscall Caver::Proto::Map::Swap(Map *this,Map *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != this) {
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x10),(RepeatedPtrFieldBase *)(param_1 + 0x10));
    uVar1 = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


