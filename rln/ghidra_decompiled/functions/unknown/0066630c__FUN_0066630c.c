/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066630c
 * Function: FUN_0066630c
 * Signature: undefined FUN_0066630c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066630c(void *param_1,ulong param_2,ulong param_3)

{
  size_t __n;
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_39 [25];
  
                    /* catch() { ... } // from try @ 00665dc8 with catch @ 00666324 */
  lVar3 = *(long *)PTR_PTR_007e5110;
  puVar2 = local_39 + 1;
  do {
    uVar1 = param_3 / 10;
                    /* catch() { ... } // from try @ 00665d18 with catch @ 00666354 */
    puVar2 = puVar2 + -1;
    *puVar2 = *(undefined1 *)(lVar3 + param_3 % 10 + 4);
    param_3 = uVar1;
  } while (uVar1 != 0);
  uVar1 = (long)(local_39 + 1) - (long)puVar2;
  uVar4 = uVar1 & 0xffffffff;
  __n = (size_t)(int)uVar1;
  if (param_2 < __n) {
    uVar4 = 0xffffffff;
  }
  else {
                    /* catch() { ... } // from try @ 00665be8 with catch @ 00666380 */
    memcpy(param_1,local_39 + (1 - __n),__n);
  }
  return uVar4;
}


