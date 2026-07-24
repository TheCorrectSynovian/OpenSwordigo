/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666a7c
 * Function: FUN_00666a7c
 * Signature: undefined FUN_00666a7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666a7c(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *__dest;
  
                    /* try { // try from 00666a98 to 00766a9b has its CatchHandler @ 006680f4 */
  if (param_2 == param_2 + param_3) {
    *param_1 = &DAT_007fd2f8;
    return;
  }
  if ((param_2 + param_3 != (undefined1 *)0x0) && (param_2 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00665330("basic_string::_S_construct null not valid");
  }
  if (0x3ffffffffffffff9 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_S_create");
  }
                    /* try { // try from 00666ac4 to 00766acb has its CatchHandler @ 00668158 */
                    /* try { // try from 00666acc to 00766b03 has its CatchHandler @ 00668150 */
  if (param_3 - 0xfc8 < 0xffffffffffffefff) {
    uVar1 = (param_3 + 0x1000) - (param_3 + 0x39 & 0xfff);
    if (0x3ffffffffffffff9 < uVar1) {
      uVar1 = 0x3ffffffffffffff9;
    }
    puVar2 = operator_new(uVar1 + 0x19);
    __dest = puVar2 + 3;
    puVar2[1] = uVar1;
    *(undefined4 *)(puVar2 + 2) = 0;
  }
  else {
    puVar2 = operator_new(param_3 + 0x19);
    puVar2[1] = param_3;
    *(undefined4 *)(puVar2 + 2) = 0;
    __dest = puVar2 + 3;
    if (param_3 == 1) {
      *(undefined1 *)(puVar2 + 3) = *param_2;
      goto LAB_00666b2c;
    }
  }
  __dest = memcpy(__dest,param_2,param_3);
LAB_00666b2c:
  if (puVar2 != &DAT_007fd2e0) {
    *puVar2 = param_3;
    *(undefined1 *)((long)puVar2 + param_3 + 0x18) = 0;
  }
  *param_1 = __dest;
                    /* try { // try from 00666b48 to 00766b6f has its CatchHandler @ 00668158 */
  return;
}


