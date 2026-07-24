/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8758
 * Function: FUN_005f8758
 * Signature: undefined FUN_005f8758(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_005f8758(ulong *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  long lVar1;
  void *__src;
  ulong uVar2;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 != 0) {
    uVar2 = *param_1;
    do {
      if (uVar2 == 0) {
        __src = (void *)(*(code *)param_1[2])(param_1[4],param_1[3],&local_50);
        if ((__src == (void *)0x0) || (local_50 == 0)) break;
        *param_1 = local_50;
        param_1[1] = (ulong)__src;
        uVar2 = local_50;
      }
      else {
        __src = (void *)param_1[1];
      }
      __n = uVar2;
      if (param_3 <= uVar2) {
        __n = param_3;
      }
      memcpy(param_2,__src,__n);
      param_3 = param_3 - __n;
      param_2 = (void *)((long)param_2 + __n);
      uVar2 = *param_1 - __n;
      *param_1 = uVar2;
      param_1[1] = param_1[1] + __n;
    } while (param_3 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


