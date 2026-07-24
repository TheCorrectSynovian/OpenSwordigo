/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e63e8
 * Function: Caver::Proto::GameOptions::Swap
 * Signature: undefined __thiscall Swap(GameOptions * this, GameOptions * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::Swap(Caver::Proto::GameOptions*) */

void __thiscall Caver::Proto::GameOptions::Swap(GameOptions *this,GameOptions *param_1)

{
  undefined4 uVar1;
  GameOptions GVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x10),(RepeatedPtrFieldBase *)(param_1 + 0x10));
    GVar2 = this[0x48];
    this[0x48] = param_1[0x48];
    param_1[0x48] = GVar2;
    GVar2 = this[0x49];
    this[0x49] = param_1[0x49];
    param_1[0x49] = GVar2;
    uVar1 = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x50);
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    GVar2 = this[0x68];
    this[0x68] = param_1[0x68];
    param_1[0x68] = GVar2;
    GVar2 = this[0x69];
    this[0x69] = param_1[0x69];
    param_1[0x69] = GVar2;
    GVar2 = this[0x6a];
    this[0x6a] = param_1[0x6a];
    param_1[0x6a] = GVar2;
    uVar1 = *(undefined4 *)(this + 0x6c);
    *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


