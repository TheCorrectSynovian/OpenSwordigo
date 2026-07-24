/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00589de4
 * Function: Caver::FloatColorFromProtobufMessage
 * Signature: undefined __thiscall FloatColorFromProtobufMessage(Caver * this, FloatColor * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&) */

void __thiscall Caver::FloatColorFromProtobufMessage(Caver *this,FloatColor *param_1)

{
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x14);
  *in_x8 = *(undefined8 *)(this + 0xc);
  in_x8[1] = uVar1;
  return;
}


