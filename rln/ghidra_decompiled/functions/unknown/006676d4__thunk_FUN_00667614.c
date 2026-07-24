/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006676d4
 * Function: thunk_FUN_00667614
 * Signature: undefined thunk_FUN_00667614(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * thunk_FUN_00667614(long *param_1,undefined8 *param_2)

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
    if ((*(ulong *)(lVar4 + -0x10) < uVar1) || (0 < *(int *)(lVar4 + -8))) {
      FUN_00667088(param_1,uVar1);
      lVar4 = *param_1;
      puVar2 = (undefined1 *)*param_2;
      lVar3 = *(long *)(lVar4 + -0x18);
    }
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
    }
  }
  return param_1;
}


