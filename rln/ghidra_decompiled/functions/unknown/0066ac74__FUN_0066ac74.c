/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066ac74
 * Function: FUN_0066ac74
 * Signature: undefined FUN_0066ac74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong * FUN_0066ac74(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *__dest;
  ulong __n;
  
  if (param_1 == param_2) {
    return (ulong *)&DAT_007fd2f8;
  }
                    /* catch() { ... } // from try @ 0066abf0 with catch @ 0066ac8c */
  __n = (long)param_2 - (long)param_1;
  if (0x3ffffffffffffff9 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_S_create");
  }
  if ((__n + 0x39 < 0x1001) || (__n == 0)) {
    puVar2 = operator_new(__n + 0x19);
    puVar2[1] = __n;
    *(undefined4 *)(puVar2 + 2) = 0;
    __dest = puVar2 + 3;
    if (__n == 1) {
      *(undefined1 *)(puVar2 + 3) = *param_1;
      goto LAB_0066ad04;
    }
  }
  else {
    uVar1 = (__n + 0x1000) - (__n + 0x39 & 0xfff);
    if (0x3ffffffffffffff9 < uVar1) {
      uVar1 = 0x3ffffffffffffff9;
    }
    puVar2 = operator_new(uVar1 + 0x19);
    __dest = puVar2 + 3;
    puVar2[1] = uVar1;
    *(undefined4 *)(puVar2 + 2) = 0;
  }
  __dest = memcpy(__dest,param_1,__n);
LAB_0066ad04:
  if (puVar2 != &DAT_007fd2e0) {
    *puVar2 = __n;
    *(undefined1 *)((long)puVar2 + __n + 0x18) = 0;
  }
  return __dest;
}


