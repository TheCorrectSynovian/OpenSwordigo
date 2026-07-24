/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062835c
 * Function: thunk_FUN_00628228
 * Signature: undefined thunk_FUN_00628228(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * thunk_FUN_00628228(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char acStack_8 [4];
  uint uStack_4;
  
  FUN_00625fe4(acStack_8,param_1,0);
  if (acStack_8[0] != '\0') {
    uStack_4 = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    (**(code **)(*plVar2 + 0x28))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&uStack_4,param_2)
    ;
    if (uStack_4 != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar1,uStack_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


