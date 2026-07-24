/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006200b8
 * Function: FUN_006200b8
 * Signature: undefined FUN_006200b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006200b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_8;
  
                    /* catch() { ... } // from try @ 00620170 with catch @ 006200c0 */
                    /* try { // try from 006200d8 to 007200df has its CatchHandler @ 0062017c */
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_007d9bb0;
  local_8 = param_2;
  uVar1 = FUN_0067074c(&local_8);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = uVar1;
  FUN_00620aac(param_1);
  return;
}


