/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006683e4
 * Function: FUN_006683e4
 * Signature: undefined FUN_006683e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006683e4(long *param_1,undefined8 *param_2,ulong param_3)

{
  void *pvVar1;
  void *__s;
  long lVar2;
  ulong uVar3;
  size_t __n;
  
  lVar2 = *param_1;
  __s = (void *)*param_2;
  uVar3 = *(ulong *)(lVar2 + -0x18);
  __n = *(size_t *)((long)__s + -0x18);
  while( true ) {
    if (uVar3 <= param_3) {
                    /* catch() { ... } // from try @ 006683e0 with catch @ 00668460 */
      return 0xffffffffffffffff;
    }
                    /* try { // try from 00668430 to 0076847b has its CatchHandler @ 00668364 */
    pvVar1 = memchr(__s,(uint)*(byte *)(lVar2 + param_3),__n);
    if (pvVar1 == (void *)0x0) break;
    param_3 = param_3 + 1;
  }
                    /* catch() { ... } // from try @ 006683cc with catch @ 0066844c */
  return param_3;
}


