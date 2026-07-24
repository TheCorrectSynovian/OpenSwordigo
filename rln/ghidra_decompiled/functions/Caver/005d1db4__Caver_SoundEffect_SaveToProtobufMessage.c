/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1db4
 * Function: Caver::SoundEffect::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SoundEffect * this, SoundEffect * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffect::SaveToProtobufMessage(Caver::Proto::SoundEffect*) */

void __thiscall Caver::SoundEffect::SaveToProtobufMessage(SoundEffect *this,SoundEffect *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__default_name__007e7200;
                    /* try { // try from 005d1dd0 to 006d1de3 has its CatchHandler @ 005d296c */
  plVar2 = *(long **)(param_1 + 0x10);
                    /* try { // try from 005d1de4 to 006d1e4f has its CatchHandler @ 005d2fc8 */
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
  if (plVar2 == (long *)puVar1) {
    plVar2 = operator_new(8);
    *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar2;
  }
  FUN_0066a6a8(plVar2,this + 0x18);
  puVar1 = PTR__default_resource_name__007e66e8;
  plVar2 = *(long **)(param_1 + 0x18);
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
  if (plVar2 == (long *)puVar1) {
    plVar2 = operator_new(8);
    *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x18) = plVar2;
  }
  FUN_0066a6a8(plVar2,this + 0x20);
                    /* try { // try from 005d1e60 to 006d1e73 has its CatchHandler @ 005d2968 */
  uVar3 = *(undefined8 *)(this + 0x38);
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0xc;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
                    /* try { // try from 005d1e74 to 006d1edf has its CatchHandler @ 005d2f90 */
  return;
}


