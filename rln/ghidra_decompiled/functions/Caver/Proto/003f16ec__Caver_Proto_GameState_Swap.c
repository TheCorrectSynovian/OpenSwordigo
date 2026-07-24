/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f16ec
 * Function: Caver::Proto::GameState::Swap
 * Signature: undefined __thiscall Swap(GameState * this, GameState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameState::Swap(Caver::Proto::GameState*) */

void __thiscall Caver::Proto::GameState::Swap(GameState *this,GameState *param_1)

{
  undefined4 uVar1;
  GameState GVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x18),(RepeatedPtrFieldBase *)(param_1 + 0x18));
    uVar3 = *(undefined8 *)(this + 0x50);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x70);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x78);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x80),(RepeatedPtrFieldBase *)(param_1 + 0x80));
    uVar3 = *(undefined8 *)(this + 0xb8);
    *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    uVar3 = *(undefined8 *)(this + 0xc0);
    *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
    GVar2 = this[200];
    this[200] = param_1[200];
    param_1[200] = GVar2;
    GVar2 = this[0xc9];
    this[0xc9] = param_1[0xc9];
    param_1[0xc9] = GVar2;
    uVar3 = *(undefined8 *)(this + 0xd0);
    *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = uVar3;
    uVar3 = *(undefined8 *)(this + 0xd8);
    *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = uVar3;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0xe0),(RepeatedPtrFieldBase *)(param_1 + 0xe0));
    GVar2 = this[0x118];
    this[0x118] = param_1[0x118];
    param_1[0x118] = GVar2;
    GVar2 = this[0x119];
    this[0x119] = param_1[0x119];
    param_1[0x119] = GVar2;
    GVar2 = this[0x11a];
    this[0x11a] = param_1[0x11a];
    param_1[0x11a] = GVar2;
    GVar2 = this[0x11b];
    this[0x11b] = param_1[0x11b];
    param_1[0x11b] = GVar2;
    uVar1 = *(undefined4 *)(this + 0x11c);
    *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0x11c) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


