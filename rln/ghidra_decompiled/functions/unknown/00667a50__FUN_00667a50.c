/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667a50
 * Function: FUN_00667a50
 * Signature: undefined FUN_00667a50(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong * FUN_00667a50(ulong param_1,byte param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *__s;
  
                    /* try { // try from 00667a58 to 00767a73 has its CatchHandler @ 006680a8 */
  if (param_1 == 0) {
    return (ulong *)&DAT_007fd2f8;
  }
  if (0x3ffffffffffffff9 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_S_create");
  }
  if (param_1 + 0x39 < 0x1001) {
    puVar2 = operator_new(param_1 + 0x19);
    puVar2[1] = param_1;
                    /* try { // try from 00667b20 to 00767b33 has its CatchHandler @ 00667fa0 */
    *(undefined4 *)(puVar2 + 2) = 0;
    __s = puVar2 + 3;
    if (param_1 == 1) {
      *(byte *)(puVar2 + 3) = param_2;
      goto LAB_00667af4;
    }
  }
  else {
                    /* try { // try from 00667aa4 to 00767ab7 has its CatchHandler @ 00667fa8 */
    uVar1 = (param_1 + 0x1000) - (param_1 + 0x39 & 0xfff);
    if (0x3ffffffffffffff9 < uVar1) {
      uVar1 = 0x3ffffffffffffff9;
    }
    puVar2 = operator_new(uVar1 + 0x19);
    __s = puVar2 + 3;
    puVar2[1] = uVar1;
    *(undefined4 *)(puVar2 + 2) = 0;
  }
                    /* try { // try from 00667ae4 to 00767aef has its CatchHandler @ 0066808c */
  __s = memset(__s,(uint)param_2,param_1);
LAB_00667af4:
  if (puVar2 != &DAT_007fd2e0) {
    *puVar2 = param_1;
    *(undefined1 *)((long)puVar2 + param_1 + 0x18) = 0;
  }
  return __s;
}


