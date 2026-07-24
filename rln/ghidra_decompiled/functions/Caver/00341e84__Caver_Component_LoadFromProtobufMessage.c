/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00341e84
 * Function: Caver::Component::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(Component * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall Caver::Component::LoadFromProtobufMessage(Component *this,Component *param_1)

{
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x48);
  if (((byte)param_1[0x58] >> 3 & 1) != 0) {
    FUN_0066a6a8(this + 0x38,*(undefined8 *)(param_1 + 0x50));
  }
  return;
}


