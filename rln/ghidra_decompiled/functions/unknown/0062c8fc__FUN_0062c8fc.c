/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c8fc
 * Function: FUN_0062c8fc
 * Signature: undefined FUN_0062c8fc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c8fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062c8d0 with catch @ 0062c8fc
                        */
                    /* try { // try from 0062c900 to 0072c943 has its CatchHandler @ 0062c900
                       catch() { ... } // from try @ 0062c900 with catch @ 0062c900
                       catch() { ... } // from try @ 0062cbc0 with catch @ 0062c900
                       catch() { ... } // from try @ 0062ce54 with catch @ 0062c900 */
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_007b6e20;
  uVar1 = FUN_0063be7c();
  param_1[4] = uVar1;
  FUN_0064be60(param_1,0);
                    /* try { // try from 0062c944 to 0072c957 has its CatchHandler @ 0062cd20 */
  return;
}


