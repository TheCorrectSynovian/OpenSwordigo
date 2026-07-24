/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006684ec
 * Function: FUN_006684ec
 * Signature: undefined FUN_006684ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006684ec(long *param_1,char *param_2,ulong param_3)

{
  size_t __n;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  __n = strlen(param_2);
  lVar2 = *param_1;
  uVar3 = *(ulong *)(lVar2 + -0x18);
  while( true ) {
    if (uVar3 <= param_3) {
      return 0xffffffffffffffff;
    }
    pvVar1 = memchr(param_2,(uint)*(byte *)(lVar2 + param_3),__n);
    if (pvVar1 == (void *)0x0) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}


