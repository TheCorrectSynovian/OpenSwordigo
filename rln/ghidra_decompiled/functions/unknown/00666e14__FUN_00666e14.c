/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666e14
 * Function: FUN_00666e14
 * Signature: undefined FUN_00666e14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666e14(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *__dest;
  
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
                    /* try { // try from 00666e60 to 00766e77 has its CatchHandler @ 00668018 */
  if (param_3 - 0xfc8 < 0xffffffffffffefff) {
                    /* try { // try from 00666e78 to 00766e8b has its CatchHandler @ 00667fe0 */
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
                    /* try { // try from 00666ef8 to 00766f0f has its CatchHandler @ 00668018 */
    *(undefined4 *)(puVar2 + 2) = 0;
    __dest = puVar2 + 3;
    if (param_3 == 1) {
                    /* try { // try from 00666f10 to 00766f23 has its CatchHandler @ 00667fdc */
      *(undefined1 *)(puVar2 + 3) = *param_2;
      goto LAB_00666ec4;
    }
  }
                    /* try { // try from 00666eb8 to 00766ec7 has its CatchHandler @ 0066814c */
  __dest = memcpy(__dest,param_2,param_3);
LAB_00666ec4:
  if (puVar2 != &DAT_007fd2e0) {
    *puVar2 = param_3;
    *(undefined1 *)((long)puVar2 + param_3 + 0x18) = 0;
  }
  *param_1 = __dest;
  return;
}


