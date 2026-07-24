/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ba870
 * Function: Caver::Item::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(Item * this, Item * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Item::LoadFromProtobufMessage(Caver::Proto::Item const&) */

void __thiscall Caver::Item::LoadFromProtobufMessage(Item *this,Item *param_1)

{
  FUN_0066a6a8(this + 8,*(undefined8 *)(param_1 + 0x10));
  FUN_0066a6a8(this + 0x10,*(undefined8 *)(param_1 + 0x18));
  FUN_0066a6a8(this + 0x18,*(undefined8 *)(param_1 + 0x20));
  FUN_0066a6a8(this + 0x20,*(undefined8 *)(param_1 + 0x28));
  this[0x28] = *(Item *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) - 1U < 5) {
    *(uint *)this = *(int *)(param_1 + 0xc) - 1U;
  }
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x34);
  return;
}


