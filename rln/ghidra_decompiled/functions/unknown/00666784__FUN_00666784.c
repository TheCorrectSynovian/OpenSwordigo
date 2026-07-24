/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666784
 * Function: FUN_00666784
 * Signature: undefined FUN_00666784(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666784(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  void *__src;
  void *pvVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *__dest;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *param_2;
  uVar4 = *(ulong *)(lVar5 + -0x18);
                    /* try { // try from 006667ac to 00766883 has its CatchHandler @ 006667ac
                       catch() { ... } // from try @ 006667ac with catch @ 006667ac
                       catch() { ... } // from try @ 00667f24 with catch @ 006667ac
                       catch() { ... } // from try @ 0066819c with catch @ 006667ac */
  if (uVar4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",
                 "basic_string::basic_string",param_3,uVar4);
  }
  __src = (void *)(lVar5 + param_3);
  uVar2 = uVar4 - param_3;
  if (param_4 < uVar4 - param_3) {
    uVar2 = param_4;
  }
  pvVar1 = (void *)(lVar5 + uVar2 + param_3);
  if (__src == pvVar1) {
    *param_1 = &DAT_007fd2f8;
    return;
  }
  if ((pvVar1 != (void *)0x0) && (__src == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00665330("basic_string::_S_construct null not valid");
  }
  uVar4 = (long)pvVar1 - (long)__src;
  if (0x3ffffffffffffff9 < uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006668fc to 00766907 has its CatchHandler @ 00668160 */
    FUN_0066554c("basic_string::_S_create");
  }
  if ((uVar4 + 0x39 < 0x1001) || (uVar4 == 0)) {
                    /* try { // try from 00666884 to 00766897 has its CatchHandler @ 00668014 */
    puVar3 = operator_new(uVar4 + 0x19);
    puVar3[1] = uVar4;
    *(undefined4 *)(puVar3 + 2) = 0;
    __dest = puVar3 + 3;
    if (uVar4 == 1) {
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(lVar5 + param_3);
      goto LAB_00666858;
    }
  }
  else {
    uVar2 = (uVar4 + 0x1000) - (uVar4 + 0x39 & 0xfff);
    if (0x3ffffffffffffff9 < uVar2) {
      uVar2 = 0x3ffffffffffffff9;
    }
    puVar3 = operator_new(uVar2 + 0x19);
    __dest = puVar3 + 3;
    puVar3[1] = uVar2;
    *(undefined4 *)(puVar3 + 2) = 0;
  }
  __dest = memcpy(__dest,__src,uVar4);
LAB_00666858:
  if (puVar3 != &DAT_007fd2e0) {
    *puVar3 = uVar4;
    *(undefined1 *)((long)puVar3 + uVar4 + 0x18) = 0;
  }
  *param_1 = __dest;
  return;
}


