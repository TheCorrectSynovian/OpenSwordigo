/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00640318
 * Function: thunk_FUN_0063f778
 * Signature: undefined thunk_FUN_0063f778(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * thunk_FUN_0063f778(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x30))(), iVar2 == -1)) {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 1);
  }
  return param_1;
}


