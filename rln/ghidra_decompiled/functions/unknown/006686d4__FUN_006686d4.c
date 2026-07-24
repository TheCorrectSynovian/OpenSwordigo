/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006686d4
 * Function: FUN_006686d4
 * Signature: undefined FUN_006686d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006686d4(long *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  __n = strlen(param_2);
  lVar4 = *param_1;
                    /* catch() { ... } // from try @ 00668648 with catch @ 00668708 */
  lVar3 = *(long *)(lVar4 + -0x18);
  if (lVar3 == 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = lVar3 - 1;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  do {
    pvVar2 = memchr(param_2,(uint)*(byte *)(lVar4 + param_3),__n);
    if (pvVar2 == (void *)0x0) {
      return param_3;
    }
    param_3 = param_3 - 1;
  } while (param_3 != 0xffffffffffffffff);
  return 0xffffffffffffffff;
}


