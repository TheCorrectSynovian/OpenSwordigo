/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062010c
 * Function: FUN_0062010c
 * Signature: undefined FUN_0062010c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062010c(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0062010c to 00720117 has its CatchHandler @ 00620124 */
                    /* catch() { ... } // from try @ 0062010c with catch @ 00620124 */
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_007d9bb0;
  uVar2 = FUN_0063be10();
  param_1[2] = uVar2;
                    /* try { // try from 00620148 to 0072016f has its CatchHandler @ 00620178 */
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_00620aac(param_1);
  *param_1 = &PTR_FUN_007d9c30;
  iVar1 = strcmp(param_2,"C");
                    /* try { // try from 00620170 to 0072018b has its CatchHandler @ 006200c0 */
                    /* catch() { ... } // from try @ 00620148 with catch @ 00620178 */
                    /* catch() { ... } // from try @ 006200d8 with catch @ 0062017c */
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
                    /* catch() { ... } // from try @ 0062018c with catch @ 00620198 */
                    /* try { // try from 0062019c to 0072019f has its CatchHandler @ 006201a4 */
    FUN_00670744(param_1 + 2);
                    /* catch() { ... } // from try @ 0062019c with catch @ 006201a4 */
    FUN_00670710(param_1 + 2,param_2,0);
    FUN_00620aac(param_1);
    return;
  }
                    /* try { // try from 0062018c to 00720197 has its CatchHandler @ 00620198 */
  return;
}


