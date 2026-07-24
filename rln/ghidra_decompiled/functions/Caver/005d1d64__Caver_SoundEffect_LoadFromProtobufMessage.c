/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1d64
 * Function: Caver::SoundEffect::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SoundEffect * this, SoundEffect * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffect::LoadFromProtobufMessage(Caver::Proto::SoundEffect const&) */

void __thiscall Caver::SoundEffect::LoadFromProtobufMessage(SoundEffect *this,SoundEffect *param_1)

{
  FUN_0066a6a8(this + 0x18,*(undefined8 *)(param_1 + 0x10));
  FUN_0066a6a8(this + 0x20,*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x20);
  if (((byte)param_1[0x28] >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x24);
  }
  return;
}


