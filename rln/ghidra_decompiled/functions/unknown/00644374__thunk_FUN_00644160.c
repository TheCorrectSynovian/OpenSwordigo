/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00644374
 * Function: thunk_FUN_00644160
 * Signature: undefined thunk_FUN_00644160(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * thunk_FUN_00644160(long *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  uint extraout_w1;
  long *plVar6;
  long lVar7;
  char acStack_10 [8];
  long *plStack_8;
  
  FUN_006423a0(acStack_10,param_1);
  if (acStack_10[0] != '\0') {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar6 = *(long **)(lVar4 + 0xf8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    lVar7 = *(long *)(lVar4 + 0xe8);
    if (*(char *)(lVar4 + 0xe4) == '\0') {
      plVar5 = *(long **)(lVar4 + 0xf0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_006652c8();
      }
      uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,0x20);
      *(undefined4 *)(lVar4 + 0xe0) = uVar3;
      *(undefined1 *)(lVar4 + 0xe4) = 1;
    }
    else {
      uVar3 = *(undefined4 *)(lVar4 + 0xe0);
    }
    (**(code **)(*plVar6 + 0x48))(plVar6,lVar7,lVar7 == 0,lVar4,uVar3,param_2);
    if ((extraout_w1 & 0xff) != 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    }
  }
  plVar6 = plStack_8;
  lVar4 = *(long *)(*plStack_8 + -0x18);
  if (((((*(uint *)((long)plStack_8 + lVar4 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar6 = *(long **)((long)plVar6 + lVar4 + 0xe8), plVar6 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar6 + 0x30))(), iVar2 == -1)) {
    lVar4 = (long)plStack_8 + *(long *)(*plStack_8 + -0x18);
    FUN_006215c0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    return param_1;
  }
  return param_1;
}


