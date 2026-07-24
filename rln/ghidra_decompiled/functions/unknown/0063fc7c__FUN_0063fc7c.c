/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063fc7c
 * Function: FUN_0063fc7c
 * Signature: undefined FUN_0063fc7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063fc7c(undefined1 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
                    /* try { // try from 0063fc7c to 0073fcab has its CatchHandler @ 00640784 */
  lVar3 = *param_2;
  *(long **)(param_1 + 8) = param_2;
  lVar1 = *(long *)(lVar3 + -0x18);
  *param_1 = 0;
  lVar1 = (long)param_2 + lVar1;
  if (*(long *)(lVar1 + 0xd8) != 0) {
    uVar2 = *(uint *)(lVar1 + 0x20);
    if (uVar2 != 0) goto LAB_0063fce4;
    FUN_0063f778();
    lVar3 = *param_2;
  }
  lVar1 = (long)param_2 + *(long *)(lVar3 + -0x18);
  uVar2 = *(uint *)(lVar1 + 0x20);
  if (uVar2 == 0) {
                    /* try { // try from 0063fcd0 to 0073fcd7 has its CatchHandler @ 006404f0 */
    *param_1 = 1;
    return;
  }
LAB_0063fce4:
                    /* try { // try from 0063fce4 to 0073fd03 has its CatchHandler @ 00640784 */
  FUN_00620c14(lVar1,uVar2 | 4);
  return;
}


