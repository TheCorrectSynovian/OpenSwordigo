/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ebdc8
 * Function: Caver::Proto::PlayerProfile::Swap
 * Signature: undefined __thiscall Swap(PlayerProfile * this, PlayerProfile * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile::Swap(Caver::Proto::PlayerProfile*) */

void __thiscall Caver::Proto::PlayerProfile::Swap(PlayerProfile *this,PlayerProfile *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  PlayerProfile PVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != this) {
    uVar4 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    uVar4 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar4 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(this + 0x30);
    uVar1 = *(undefined8 *)(this + 0x38);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x30) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    uVar4 = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    uVar4 = *(undefined8 *)(this + 0x48);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    uVar4 = *(undefined8 *)(this + 0x50);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    uVar4 = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x60),(RepeatedPtrFieldBase *)(param_1 + 0x60));
    PVar3 = this[0x98];
    this[0x98] = param_1[0x98];
    param_1[0x98] = PVar3;
    uVar4 = *(undefined8 *)(this + 0xa0);
    *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    uVar2 = *(undefined4 *)(this + 0xa8);
    *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xa8) = uVar2;
    uVar2 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  return;
}


