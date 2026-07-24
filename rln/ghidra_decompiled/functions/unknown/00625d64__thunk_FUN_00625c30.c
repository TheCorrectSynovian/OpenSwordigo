/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625d64
 * Function: thunk_FUN_00625c30
 * Signature: undefined thunk_FUN_00625c30(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * thunk_FUN_00625c30(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char acStack_8 [4];
  uint uStack_4;
  
  FUN_006230e4(acStack_8,param_1,0);
  if (acStack_8[0] != '\0') {
    uStack_4 = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    (**(code **)(*plVar2 + 0x60))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&uStack_4,param_2)
    ;
    if (uStack_4 != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00620c14(lVar1,uStack_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


