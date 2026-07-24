/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3ca4
 * Function: Caver::Skill::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(Skill * this, Skill * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Skill::LoadFromProtobufMessage(Caver::Proto::Skill const&) */

void __thiscall Caver::Skill::LoadFromProtobufMessage(Skill *this,Skill *param_1)

{
  FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
  FUN_0066a6a8(this + 8,*(undefined8 *)(param_1 + 0x18));
  FUN_0066a6a8(this + 0x10,*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x30);
  return;
}


