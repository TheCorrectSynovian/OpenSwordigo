/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4994
 * Function: Caver::GUIMargins::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(GUIMargins * this, GUIMargins * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIMargins::SaveToProtobufMessage(Caver::Proto::GUIMargins*) const */

void __thiscall Caver::GUIMargins::SaveToProtobufMessage(GUIMargins *this,GUIMargins *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)this;
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined4 *)(this + 4);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    uVar1 = *(uint *)this;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar2 = *(undefined4 *)(this + 8);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar1 = *(uint *)this;
  }
                    /* catch() { ... } // from try @ 005d48ec with catch @ 005d49e0 */
  if ((uVar1 >> 2 & 1) != 0) {
    uVar2 = *(undefined4 *)(this + 0xc);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar1 = *(uint *)this;
  }
  if ((uVar1 >> 3 & 1) == 0) {
    return;
  }
                    /* try { // try from 005d4a04 to 006d4a0b has its CatchHandler @ 005d4a10 */
                    /* try { // try from 005d4a0c to 006d4ae3 has its CatchHandler @ 005d47f4 */
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x10);
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 8;
                    /* catch() { ... } // from try @ 005d4a04 with catch @ 005d4a10 */
  return;
}


