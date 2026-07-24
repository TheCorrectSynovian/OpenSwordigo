/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666bb8
 * Function: FUN_00666bb8
 * Signature: undefined FUN_00666bb8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666bb8(undefined8 *param_1,char *param_2)

{
  size_t __n;
  size_t sVar1;
  size_t *psVar2;
  size_t *__dest;
  
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00665330("basic_string::_S_construct null not valid");
  }
                    /* try { // try from 00666bd0 to 00766bdb has its CatchHandler @ 0066812c */
  __n = strlen(param_2);
  if (__n == 0) {
    *param_1 = &DAT_007fd2f8;
    return;
  }
  if (0x3ffffffffffffff9 < __n) {
                    /* try { // try from 00666cf0 to 00766d03 has its CatchHandler @ 00667ff8 */
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_S_create");
  }
  if (__n - 0xfc8 < 0xffffffffffffefff) {
                    /* try { // try from 00666c1c to 00766cef has its CatchHandler @ 0066801c */
    sVar1 = (__n + 0x1000) - (__n + 0x39 & 0xfff);
    if (0x3ffffffffffffff9 < sVar1) {
      sVar1 = 0x3ffffffffffffff9;
    }
    psVar2 = operator_new(sVar1 + 0x19);
    __dest = psVar2 + 3;
    psVar2[1] = sVar1;
    *(undefined4 *)(psVar2 + 2) = 0;
  }
  else {
    psVar2 = operator_new(__n + 0x19);
    psVar2[1] = __n;
    *(undefined4 *)(psVar2 + 2) = 0;
    __dest = psVar2 + 3;
    if (__n == 1) {
      *(char *)(psVar2 + 3) = *param_2;
      goto LAB_00666c60;
    }
  }
  __dest = memcpy(__dest,param_2,__n);
LAB_00666c60:
  if (psVar2 != &DAT_007fd2e0) {
    *psVar2 = __n;
    *(undefined1 *)((long)psVar2 + __n + 0x18) = 0;
  }
  *param_1 = __dest;
  return;
}


