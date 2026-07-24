/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666cf8
 * Function: FUN_00666cf8
 * Signature: undefined FUN_00666cf8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666cf8(undefined8 *param_1,ulong param_2,byte param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *__s;
  
  if (param_2 == 0) {
    __s = (ulong *)&DAT_007fd2f8;
    goto LAB_00666d24;
  }
  if (0x3ffffffffffffff9 < param_2) {
                    /* try { // try from 00666df4 to 00766e5f has its CatchHandler @ 0066801c */
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_S_create");
  }
  if (param_2 + 0x39 < 0x1001) {
    puVar2 = operator_new(param_2 + 0x19);
    puVar2[1] = param_2;
    *(undefined4 *)(puVar2 + 2) = 0;
    __s = puVar2 + 3;
    if (param_2 != 1) goto LAB_00666d94;
    *(byte *)(puVar2 + 3) = param_3;
  }
  else {
    uVar1 = (param_2 + 0x1000) - (param_2 + 0x39 & 0xfff);
    if (0x3ffffffffffffff9 < uVar1) {
      uVar1 = 0x3ffffffffffffff9;
    }
    puVar2 = operator_new(uVar1 + 0x19);
    __s = puVar2 + 3;
    puVar2[1] = uVar1;
    *(undefined4 *)(puVar2 + 2) = 0;
LAB_00666d94:
    __s = memset(__s,(uint)param_3,param_2);
                    /* try { // try from 00666da4 to 00766db3 has its CatchHandler @ 00668164 */
  }
  if (puVar2 != &DAT_007fd2e0) {
    *puVar2 = param_2;
    *(undefined1 *)((long)puVar2 + param_2 + 0x18) = 0;
  }
LAB_00666d24:
  *param_1 = __s;
  return;
}


