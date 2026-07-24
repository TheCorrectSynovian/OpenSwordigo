/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f4b54
 * Function: Caver::Proto::CharacterState::Swap
 * Signature: undefined __thiscall Swap(CharacterState * this, CharacterState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState::Swap(Caver::Proto::CharacterState*) */

void __thiscall Caver::Proto::CharacterState::Swap(CharacterState *this,CharacterState *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x20),(RepeatedPtrFieldBase *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x68),(RepeatedPtrFieldBase *)(param_1 + 0x68));
    uVar2 = *(undefined8 *)(this + 0xa0);
    *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    uVar2 = *(undefined8 *)(this + 0xa8);
    *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    uVar2 = *(undefined8 *)(this + 0xb0);
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
    uVar2 = *(undefined8 *)(this + 0xb8);
    *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    uVar1 = *(undefined4 *)(this + 0xc0);
    *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
    uVar1 = *(undefined4 *)(this + 0xc4);
    *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0xc4) = uVar1;
    uVar1 = *(undefined4 *)(this + 200);
    *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 200) = uVar1;
    uVar1 = *(undefined4 *)(this + 0xcc);
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0xcc) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


