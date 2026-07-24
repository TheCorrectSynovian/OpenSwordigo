/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066aa20
 * Function: FUN_0066aa20
 * Signature: undefined FUN_0066aa20(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066aa20(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *__dest;
  ulong __n;
  
  if (param_2 == param_3) {
    *param_1 = &DAT_007fd2f8;
    return;
  }
  if ((param_2 == (undefined1 *)0x0) && (param_3 != (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00665330("basic_string::_S_construct null not valid");
  }
  __n = (long)param_3 - (long)param_2;
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
      *(undefined1 *)(puVar2 + 3) = *param_2;
      goto LAB_0066aac8;
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
  __dest = memcpy(__dest,param_2,__n);
LAB_0066aac8:
  if (puVar2 != &DAT_007fd2e0) {
    *puVar2 = __n;
    *(undefined1 *)((long)puVar2 + __n + 0x18) = 0;
  }
  *param_1 = __dest;
  return;
}


