/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d0afc
 * Function: Caver::Proto::Polygon::Swap
 * Signature: undefined __thiscall Swap(Polygon * this, Polygon * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Polygon::Swap(Caver::Proto::Polygon*) */

void __thiscall Caver::Proto::Polygon::Swap(Polygon *this,Polygon *param_1)

{
  undefined4 uVar1;
  Polygon PVar2;
  
  if (param_1 != this) {
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x10),(RepeatedPtrFieldBase *)(param_1 + 0x10));
    PVar2 = this[0x48];
    this[0x48] = param_1[0x48];
    param_1[0x48] = PVar2;
    PVar2 = this[0x49];
    this[0x49] = param_1[0x49];
    param_1[0x49] = PVar2;
    uVar1 = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


