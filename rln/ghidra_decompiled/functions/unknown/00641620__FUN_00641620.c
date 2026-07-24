/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00641620
 * Function: FUN_00641620
 * Signature: undefined FUN_00641620(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00641620(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  uint extraout_w1;
  long *plVar5;
  long lVar6;
  long *plVar7;
  char local_10 [8];
  long *local_8;
  
  FUN_0063fc7c(local_10,param_2);
  if (local_10[0] != '\0') {
    lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
    plVar5 = *(long **)(lVar4 + 0xf8);
                    /* catch() { ... } // from try @ 00640be4 with catch @ 0064166c
                       catch() { ... } // from try @ 00640c04 with catch @ 0064166c
                       catch() { ... } // from try @ 00640e24 with catch @ 0064166c */
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    lVar6 = *(long *)(lVar4 + 0xe8);
    if (*(char *)(lVar4 + 0xe1) == '\0') {
      plVar7 = *(long **)(lVar4 + 0xf0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_006652c8();
      }
      if ((char)plVar7[7] == '\0') {
        FUN_0061fea0(plVar7);
        uVar2 = (**(code **)(*plVar7 + 0x30))(plVar7,0x20);
      }
      else {
        uVar2 = *(undefined1 *)((long)plVar7 + 0x59);
      }
      *(undefined1 *)(lVar4 + 0xe0) = uVar2;
      *(undefined1 *)(lVar4 + 0xe1) = 1;
    }
    else {
      uVar2 = *(undefined1 *)(lVar4 + 0xe0);
    }
                    /* try { // try from 006416b4 to 007416bf has its CatchHandler @ 006409dc */
                    /* catch() { ... } // from try @ 0064129c with catch @ 006416bc */
    (**(code **)(*plVar5 + 0x38))(param_1,plVar5,lVar6,lVar6 == 0,lVar4,uVar2);
    if ((extraout_w1 & 0xff) != 0) {
      lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
      FUN_00620c14(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    }
  }
  plVar5 = local_8;
  lVar4 = *(long *)(*local_8 + -0x18);
  if (((((*(uint *)((long)local_8 + lVar4 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar5 = *(long **)((long)plVar5 + lVar4 + 0xe8), plVar5 != (long *)0x0)) &&
     (iVar3 = (**(code **)(*plVar5 + 0x30))(), iVar3 == -1)) {
    lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
    FUN_00620c14(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    return param_2;
  }
  return param_2;
}


