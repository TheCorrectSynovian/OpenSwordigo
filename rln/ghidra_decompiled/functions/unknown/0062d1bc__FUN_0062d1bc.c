/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062d1bc
 * Function: FUN_0062d1bc
 * Signature: undefined FUN_0062d1bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062d1bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_8;
  
                    /* catch() { ... } // from try @ 0062d22c with catch @ 0062d1c4
                       catch() { ... } // from try @ 0062d248 with catch @ 0062d1c4 */
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_007b6c50;
  local_8 = param_2;
  uVar1 = FUN_0067074c(&local_8);
  param_1[2] = uVar1;
  return;
}


