/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c391c
 * Function: Caver::Quest::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(Quest * this, Quest * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Quest::SaveToProtobufMessage(Caver::Proto::Quest*) const */

void __thiscall Caver::Quest::SaveToProtobufMessage(Quest *this,Quest *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR__default_name__007e5e30;
  plVar2 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  if (plVar2 == (long *)puVar1) {
    plVar2 = operator_new(8);
    *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar2;
  }
  FUN_0066a6a8(plVar2,this + 8);
  puVar1 = PTR__default_title__007e6d70;
  plVar2 = *(long **)(param_1 + 0x18);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
  if (plVar2 == (long *)puVar1) {
    plVar2 = operator_new(8);
    *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x18) = plVar2;
  }
  FUN_0066a6a8(plVar2,this + 0x10);
  puVar1 = PTR__default_follow_up_quest__007e5bb8;
  plVar2 = *(long **)(param_1 + 0x20);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
  if (plVar2 == (long *)puVar1) {
    plVar2 = operator_new(8);
    *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x20) = plVar2;
  }
                    /* catch() { ... } // from try @ 004c378c with catch @ 004c3a08 */
  FUN_0066a6a8(plVar2,this + 0x18);
  puVar1 = PTR__default_map_location__007e4c80;
  plVar2 = *(long **)(param_1 + 0x28);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
  if (plVar2 == (long *)puVar1) {
    plVar2 = operator_new(8);
                    /* catch() { ... } // from try @ 004c3778 with catch @ 004c3a40 */
                    /* catch() { ... } // from try @ 004c3754 with catch @ 004c3a44 */
    *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x28) = plVar2;
  }
  FUN_0066a6a8(plVar2,this + 0x20);
  return;
}


