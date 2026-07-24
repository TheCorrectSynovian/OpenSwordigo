/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066938c
 * Function: thunk_FUN_0066918c
 * Signature: undefined thunk_FUN_0066918c(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * thunk_FUN_0066918c(undefined8 *param_1,undefined1 *param_2,size_t param_3)

{
  undefined1 *__dest;
  undefined8 *puVar1;
  
  __dest = (undefined1 *)*param_1;
  puVar1 = (undefined8 *)(__dest + -0x18);
  if (0x3ffffffffffffff9 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c(&LAB_0069fa60);
  }
  if (((param_2 < __dest) || (__dest + *(long *)(__dest + -0x18) < param_2)) ||
     (0 < *(int *)(__dest + -8))) {
    FUN_00668cb8(param_1,0,*(long *)(__dest + -0x18),param_3);
    if (param_3 == 0) {
      return param_1;
    }
    if (param_3 != 1) {
      memcpy((undefined1 *)*param_1,param_2,param_3);
      return param_1;
    }
    *(undefined1 *)*param_1 = *param_2;
    return param_1;
  }
  if ((ulong)((long)param_2 - (long)__dest) < param_3) {
    if (param_2 == __dest) goto LAB_00669244;
    if (param_3 != 1) {
      memmove(__dest,param_2,param_3);
      __dest = (undefined1 *)*param_1;
      puVar1 = (undefined8 *)(__dest + -0x18);
      goto LAB_00669244;
    }
  }
  else if (param_3 != 1) {
    memcpy(__dest,param_2,param_3);
    __dest = (undefined1 *)*param_1;
    puVar1 = (undefined8 *)(__dest + -0x18);
    goto LAB_00669244;
  }
  *__dest = *param_2;
  __dest = (undefined1 *)*param_1;
  puVar1 = (undefined8 *)(__dest + -0x18);
LAB_00669244:
  if (puVar1 != &DAT_007fd2e0) {
    *(undefined4 *)(__dest + -8) = 0;
    *(size_t *)(__dest + -0x18) = param_3;
    __dest[param_3] = 0;
  }
  return param_1;
}


