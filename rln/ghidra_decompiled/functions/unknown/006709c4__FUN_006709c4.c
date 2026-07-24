/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006709c4
 * Function: FUN_006709c4
 * Signature: undefined FUN_006709c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006709c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_8;
  
                    /* catch() { ... } // from try @ 00670990 with catch @ 006709d0 */
                    /* catch() { ... } // from try @ 00670934 with catch @ 006709d4 */
                    /* catch() { ... } // from try @ 006708e0 with catch @ 006709d8 */
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
                    /* catch() { ... } // from try @ 0067086c with catch @ 006709ec */
  *param_1 = &PTR_FUN_007b8140;
  local_8 = param_2;
  uVar1 = FUN_0067074c(&local_8);
                    /* catch() { ... } // from try @ 00670804 with catch @ 006709fc
                       catch() { ... } // from try @ 00670888 with catch @ 006709fc */
  param_1[2] = uVar1;
  return;
}


