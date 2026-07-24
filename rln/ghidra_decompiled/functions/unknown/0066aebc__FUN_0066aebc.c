/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066aebc
 * Function: FUN_0066aebc
 * Signature: undefined FUN_0066aebc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong * FUN_0066aebc(undefined1 *param_1,undefined1 *param_2)

{
  ulong *puVar1;
  ulong *__dest;
  ulong __n;
  ulong uVar2;
  
  if (param_1 == param_2) {
    return (ulong *)&DAT_007fd2f8;
  }
  if ((param_1 == (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00665330("basic_string::_S_construct null not valid");
  }
  __n = (long)param_2 - (long)param_1;
  if (0x3ffffffffffffff9 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_S_create");
  }
  if ((__n + 0x39 < 0x1001) || (__n == 0)) {
    puVar1 = operator_new(__n + 0x19);
    puVar1[1] = __n;
    *(undefined4 *)(puVar1 + 2) = 0;
    __dest = puVar1 + 3;
    if (__n == 1) {
      *(undefined1 *)(puVar1 + 3) = *param_1;
                    /* try { // try from 0066afb0 to 0076afbb has its CatchHandler @ 0066b044 */
      goto LAB_0066af64;
    }
  }
  else {
    uVar2 = (__n + 0x1000) - (__n + 0x39 & 0xfff);
    if (0x3ffffffffffffff9 < uVar2) {
      uVar2 = 0x3ffffffffffffff9;
    }
                    /* catch() { ... } // from try @ 0066b030 with catch @ 0066af3c */
    puVar1 = operator_new(uVar2 + 0x19);
    __dest = puVar1 + 3;
    puVar1[1] = uVar2;
    *(undefined4 *)(puVar1 + 2) = 0;
  }
  __dest = memcpy(__dest,param_1,__n);
LAB_0066af64:
  if (puVar1 != &DAT_007fd2e0) {
    *puVar1 = __n;
    *(undefined1 *)((long)puVar1 + __n + 0x18) = 0;
  }
  return __dest;
}


