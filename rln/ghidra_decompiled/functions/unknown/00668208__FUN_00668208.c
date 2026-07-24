/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668208
 * Function: FUN_00668208
 * Signature: undefined FUN_00668208(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00668208(long *param_1,undefined8 *param_2,ulong param_3)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  void *__s;
  size_t __n;
  long lVar4;
  
  __s = (void *)*param_2;
  lVar4 = *param_1;
                    /* try { // try from 00668220 to 00768257 has its CatchHandler @ 00668324 */
  __n = *(size_t *)((long)__s + -0x18);
  lVar2 = *(long *)(lVar4 + -0x18);
  if ((__n != 0) && (lVar2 != 0)) {
    uVar3 = lVar2 - 1;
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    do {
      pvVar1 = memchr(__s,(uint)*(byte *)(lVar4 + param_3),__n);
      if (pvVar1 != (void *)0x0) {
        return param_3;
      }
      param_3 = param_3 - 1;
    } while (param_3 != 0xffffffffffffffff);
                    /* try { // try from 0066827c to 00768287 has its CatchHandler @ 00668330 */
    return 0xffffffffffffffff;
  }
  return 0xffffffffffffffff;
}


