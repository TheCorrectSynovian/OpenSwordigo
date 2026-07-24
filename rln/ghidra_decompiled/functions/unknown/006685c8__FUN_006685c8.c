/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006685c8
 * Function: FUN_006685c8
 * Signature: undefined FUN_006685c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006685c8(long *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *__s;
  long lVar4;
  size_t __n;
  
  lVar4 = *param_1;
  __s = (void *)*param_2;
  lVar3 = *(long *)(lVar4 + -0x18);
  __n = *(size_t *)((long)__s + -0x18);
  if (lVar3 == 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = lVar3 - 1;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  do {
    pvVar2 = memchr(__s,(uint)*(byte *)(lVar4 + param_3),__n);
    if (pvVar2 == (void *)0x0) {
      return param_3;
    }
    param_3 = param_3 - 1;
  } while (param_3 != 0xffffffffffffffff);
  return 0xffffffffffffffff;
}


