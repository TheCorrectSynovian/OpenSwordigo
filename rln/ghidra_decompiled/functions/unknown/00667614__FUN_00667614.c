/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667614
 * Function: FUN_00667614
 * Signature: undefined FUN_00667614(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00667614(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  size_t __n;
  
  puVar2 = (undefined1 *)*param_2;
  __n = *(size_t *)(puVar2 + -0x18);
  if (__n != 0) {
    lVar4 = *param_1;
    lVar3 = *(long *)(lVar4 + -0x18);
    uVar1 = lVar3 + __n;
                    /* try { // try from 006676b0 to 007676cf has its CatchHandler @ 00667ffc */
    if ((*(ulong *)(lVar4 + -0x10) < uVar1) || (0 < *(int *)(lVar4 + -8))) {
      FUN_00667088(param_1,uVar1);
                    /* try { // try from 0066765c to 00767667 has its CatchHandler @ 006680dc */
      lVar4 = *param_1;
      puVar2 = (undefined1 *)*param_2;
      lVar3 = *(long *)(lVar4 + -0x18);
    }
                    /* try { // try from 00667670 to 0076767f has its CatchHandler @ 00668100 */
    if (__n == 1) {
      *(undefined1 *)(lVar4 + lVar3) = *puVar2;
    }
    else {
      memcpy((void *)(lVar4 + lVar3),puVar2,__n);
    }
    puVar2 = (undefined1 *)*param_1;
    if (puVar2 != &DAT_007fd2f8) {
      *(undefined4 *)(puVar2 + -8) = 0;
      *(ulong *)(puVar2 + -0x18) = uVar1;
      puVar2[uVar1] = 0;
                    /* try { // try from 006676d0 to 007676e3 has its CatchHandler @ 00667fbc */
    }
  }
  return param_1;
}


