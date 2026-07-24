/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c1c0
 * Function: FUN_0062c1c0
 * Signature: undefined FUN_0062c1c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c1c0(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 local_8;
  
                    /* catch() { ... } // from try @ 0062bf90 with catch @ 0062c1e0 */
  *param_1 = &PTR_FUN_007da180;
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = 0;
  FUN_0063e704(param_1,0,0);
  *param_1 = &PTR_FUN_007b6eb0;
  iVar1 = strcmp(param_2,"C");
                    /* try { // try from 0062c22c to 0072c267 has its CatchHandler @ 0062bd88 */
                    /* catch() { ... } // from try @ 0062beb0 with catch @ 0062c230 */
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
                    /* catch() { ... } // from try @ 0062bdf0 with catch @ 0062c244 */
    FUN_00670710(&local_8,param_2,0);
    FUN_0063e704(param_1,local_8,0);
                    /* try { // try from 0062c268 to 0072c26f has its CatchHandler @ 0062c274 */
    FUN_00670744(&local_8);
                    /* try { // try from 0062c270 to 0072c2eb has its CatchHandler @ 0062bd88 */
                    /* catch() { ... } // from try @ 0062c1b4 with catch @ 0062c274
                       catch() { ... } // from try @ 0062c268 with catch @ 0062c274 */
                    /* catch() { ... } // from try @ 0062bdbc with catch @ 0062c278 */
                    /* catch() { ... } // from try @ 0062bdd0 with catch @ 0062c27c
                       catch() { ... } // from try @ 0062be20 with catch @ 0062c27c */
    return;
  }
  return;
}


