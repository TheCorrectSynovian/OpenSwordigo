/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667b48
 * Function: FUN_00667b48
 * Signature: undefined FUN_00667b48(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


size_t FUN_00667b48(long *param_1,undefined1 *param_2,ulong param_3,ulong param_4)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(ulong *)(lVar2 + -0x18);
  if (uVar1 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::copy",
                 param_4,uVar1);
  }
  __n = uVar1 - param_4;
  if (param_3 < uVar1 - param_4) {
    __n = param_3;
  }
  if (__n != 0) {
    if (__n == 1) {
      *param_2 = *(undefined1 *)(lVar2 + param_4);
      return 1;
    }
    memcpy(param_2,(void *)(lVar2 + param_4),__n);
  }
  return __n;
}


