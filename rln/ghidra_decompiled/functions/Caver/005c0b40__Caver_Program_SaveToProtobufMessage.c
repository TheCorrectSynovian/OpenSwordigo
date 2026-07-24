/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c0b40
 * Function: Caver::Program::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(Program * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Program::SaveToProtobufMessage(Caver::Proto::Program*) const */

void __thiscall Caver::Program::SaveToProtobufMessage(Program *this,Program *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 005c0ab4 with catch @ 005c0b40 */
  puVar1 = PTR__default_name__007e7d20;
  if (*(long *)(*(long *)this + -0x18) != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
    if (plVar2 == (long *)puVar1) {
      plVar2 = operator_new(8);
      *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x10) = plVar2;
    }
    FUN_0066a6a8(plVar2,this);
  }
  puVar1 = PTR__default_string__007e54d8;
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
                    /* try { // try from 005c0bb0 to 006c0bd7 has its CatchHandler @ 005c0bb0
                       catch() { ... } // from try @ 005c0bb0 with catch @ 005c0bb0
                       catch() { ... } // from try @ 005c0bec with catch @ 005c0bb0 */
    plVar2 = *(long **)(param_1 + 0x18);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
    if (plVar2 == (long *)puVar1) {
      plVar2 = operator_new(8);
                    /* try { // try from 005c0bd8 to 006c0beb has its CatchHandler @ 005c0c70 */
      *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x18) = plVar2;
    }
                    /* try { // try from 005c0bec to 006c0cdf has its CatchHandler @ 005c0bb0 */
    FUN_0066a6a8(plVar2,lVar3);
  }
  puVar1 = PTR__default_bytes__007e7070;
  lVar3 = *(long *)(this + 0x18);
  if (lVar3 != 0) {
    plVar2 = *(long **)(param_1 + 0x20);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
    if (plVar2 == (long *)puVar1) {
      plVar2 = operator_new(8);
      *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x20) = plVar2;
    }
    FUN_0066a6a8(plVar2,lVar3);
  }
  return;
}


