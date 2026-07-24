/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8650
 * Function: FUN_005f8650
 * Signature: undefined FUN_005f8650(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f8650(long *param_1)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  long local_30;
  long local_28;
  
                    /* try { // try from 005f865c to 006f868b has its CatchHandler @ 005f8694 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005f84f4 with catch @ 005f8668 */
  pbVar2 = (byte *)(*(code *)param_1[2])(param_1[4],param_1[3],&local_30);
  uVar3 = 0xffffffff;
                    /* try { // try from 005f868c to 006f8697 has its CatchHandler @ 005f8230 */
  if ((pbVar2 != (byte *)0x0) && (local_30 != 0)) {
                    /* catch() { ... } // from try @ 005f865c with catch @ 005f8694 */
    *param_1 = local_30 + -1;
    param_1[1] = (long)(pbVar2 + 1);
    uVar3 = (ulong)*pbVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


