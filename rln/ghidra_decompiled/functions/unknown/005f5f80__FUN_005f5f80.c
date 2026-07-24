/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f5f80
 * Function: FUN_005f5f80
 * Signature: undefined FUN_005f5f80(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f5f80(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  char acStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005f5fa0 to 006f5fc7 has its CatchHandler @ 005f6fbc */
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 3) {
    sprintf(acStack_58,"%.14g",*param_2);
                    /* try { // try from 005f5fc8 to 006f5fe7 has its CatchHandler @ 005f75f8 */
    sVar3 = strlen(acStack_58);
    uVar4 = FUN_005f356c(param_1,acStack_58,sVar3);
    *param_2 = uVar4;
                    /* try { // try from 005f5fe8 to 006f5ff3 has its CatchHandler @ 005f760c */
    *(undefined4 *)(param_2 + 1) = 4;
  }
                    /* try { // try from 005f5ffc to 006f6063 has its CatchHandler @ 005f760c */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 == 3);
  }
  return;
}


