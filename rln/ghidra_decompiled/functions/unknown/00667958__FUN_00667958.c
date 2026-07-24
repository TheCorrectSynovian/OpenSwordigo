/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667958
 * Function: FUN_00667958
 * Signature: undefined FUN_00667958(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong * FUN_00667958(ulong param_1,byte param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *__s;
  
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
    *(undefined4 *)(puVar2 + 2) = 0;
    __s = puVar2 + 3;
    if (param_1 == 1) {
      *(byte *)(puVar2 + 3) = param_2;
      goto LAB_006679fc;
    }
  }
  else {
    uVar1 = (param_1 + 0x1000) - (param_1 + 0x39 & 0xfff);
                    /* try { // try from 006679c0 to 007679cb has its CatchHandler @ 00667ffc */
                    /* try { // try from 006679cc to 007679e3 has its CatchHandler @ 00667fac */
    if (0x3ffffffffffffff9 < uVar1) {
      uVar1 = 0x3ffffffffffffff9;
    }
    puVar2 = operator_new(uVar1 + 0x19);
    __s = puVar2 + 3;
    puVar2[1] = uVar1;
    *(undefined4 *)(puVar2 + 2) = 0;
  }
  __s = memset(__s,(uint)param_2,param_1);
LAB_006679fc:
  if (puVar2 != &DAT_007fd2e0) {
    *puVar2 = param_1;
    *(undefined1 *)((long)puVar2 + param_1 + 0x18) = 0;
  }
                    /* try { // try from 0066797c to 0076798f has its CatchHandler @ 00668090 */
  return __s;
}


