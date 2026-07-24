/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f5ef0
 * Function: FUN_005f5ef0
 * Signature: undefined FUN_005f5ef0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_005f5ef0(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long local_30;
  long local_28;
  
                    /* try { // try from 005f5ef4 to 006f5f07 has its CatchHandler @ 005f7390 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005f5f08 to 006f5f17 has its CatchHandler @ 005f7308 */
  if ((int)param_1[1] != 3) {
    if (((int)param_1[1] == 4) && (iVar2 = FUN_005eeefc(*param_1 + 0x18,&local_30), iVar2 != 0)) {
                    /* try { // try from 005f5f38 to 006f5f3b has its CatchHandler @ 005f7390 */
      *(undefined4 *)(param_2 + 1) = 3;
      *param_2 = local_30;
      param_1 = param_2;
    }
    else {
      param_1 = (long *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005f5f74 to 006f5f7f has its CatchHandler @ 005f72b4 */
  return param_1;
}


