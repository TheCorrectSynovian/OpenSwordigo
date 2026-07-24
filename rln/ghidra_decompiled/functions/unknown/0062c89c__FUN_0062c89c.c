/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c89c
 * Function: FUN_0062c89c
 * Signature: undefined FUN_0062c89c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c89c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 0062c8ac to 0072c8af has its CatchHandler @ 0062c8e0 */
                    /* try { // try from 0062c8b0 to 0072c8b7 has its CatchHandler @ 0062c8d8 */
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  param_1[2] = 0;
  *param_1 = &PTR_FUN_007b6e20;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062c880 with catch @ 0062c8c8
                        */
  uVar1 = FUN_0063be7c();
  param_1[4] = uVar1;
                    /* try { // try from 0062c8d0 to 0072c8eb has its CatchHandler @ 0062c8fc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062c8b0 with catch @ 0062c8d8
                        */
  FUN_0064be60(param_1,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062c8ac with catch @ 0062c8e0
                        */
  return;
}


