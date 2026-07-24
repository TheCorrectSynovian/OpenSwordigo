/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006676d8
 * Function: FUN_006676d8
 * Signature: undefined FUN_006676d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006676d8(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  size_t __n;
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *param_2;
  uVar4 = *(ulong *)(lVar5 + -0x18);
  if (uVar4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::append",
                 param_3,uVar4);
  }
  __n = uVar4 - param_3;
  if (param_4 < uVar4 - param_3) {
    __n = param_4;
  }
  if (__n != 0) {
    lVar2 = *param_1;
    lVar3 = *(long *)(lVar2 + -0x18);
    uVar4 = __n + lVar3;
    if ((*(ulong *)(lVar2 + -0x10) < uVar4) || (0 < *(int *)(lVar2 + -8))) {
      FUN_00667088(param_1,uVar4);
      lVar2 = *param_1;
      lVar5 = *param_2;
      lVar3 = *(long *)(lVar2 + -0x18);
    }
    if (__n == 1) {
      *(undefined1 *)(lVar2 + lVar3) = *(undefined1 *)(lVar5 + param_3);
    }
    else {
      memcpy((void *)(lVar2 + lVar3),(void *)(lVar5 + param_3),__n);
    }
    puVar1 = (undefined1 *)*param_1;
                    /* try { // try from 00667770 to 007677ab has its CatchHandler @ 006680e8 */
    if (puVar1 != &DAT_007fd2f8) {
      *(undefined4 *)(puVar1 + -8) = 0;
      *(ulong *)(puVar1 + -0x18) = uVar4;
      puVar1[uVar4] = 0;
    }
  }
  return param_1;
}


