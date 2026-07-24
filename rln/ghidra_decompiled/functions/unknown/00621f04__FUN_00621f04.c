/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621f04
 * Function: FUN_00621f04
 * Signature: undefined FUN_00621f04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00621f04(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 00621408 with catch @ 00621f0c */
  puVar1 = operator_new(0x18);
  *puVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 2) = param_3;
                    /* catch() { ... } // from try @ 0062135c with catch @ 00621f3c */
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  return;
}


