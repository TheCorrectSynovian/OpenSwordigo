/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004af6c4
 * Function: Caver::EntityClass::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(EntityClass * this, EntityClass * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityClass::LoadFromProtobufMessage(Caver::Proto::EntityClass const&) */

void __thiscall Caver::EntityClass::LoadFromProtobufMessage(EntityClass *this,EntityClass *param_1)

{
  FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
  FUN_0066a6a8(this + 8,*(undefined8 *)(param_1 + 0x18));
  this[0x10] = *(EntityClass *)(param_1 + 0x20);
  this[0x11] = *(EntityClass *)(param_1 + 0x21);
  this[0x12] = *(EntityClass *)(param_1 + 0x22);
  this[0x13] = *(EntityClass *)(param_1 + 0x23);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x24);
  return;
}


