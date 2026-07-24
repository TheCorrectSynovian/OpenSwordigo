/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4910
 * Function: Caver::GUIMargins::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(GUIMargins * this, GUIMargins * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIMargins::LoadFromProtobufMessage(Caver::Proto::GUIMargins const&) */

void __thiscall Caver::GUIMargins::LoadFromProtobufMessage(GUIMargins *this,GUIMargins *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 0xc);
    *(uint *)this = *(uint *)this | 1;
    uVar1 = *(uint *)(param_1 + 0x1c);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x10);
    *(uint *)this = *(uint *)this | 2;
    uVar1 = *(uint *)(param_1 + 0x1c);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x14);
    *(uint *)this = *(uint *)this | 4;
    uVar1 = *(uint *)(param_1 + 0x1c);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    return;
  }
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(uint *)this = *(uint *)this | 8;
  return;
}


