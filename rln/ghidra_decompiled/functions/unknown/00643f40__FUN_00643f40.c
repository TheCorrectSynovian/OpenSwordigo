/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00643f40
 * Function: FUN_00643f40
 * Signature: undefined FUN_00643f40(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00643f40(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  uint extraout_w1;
  long *plVar6;
  long lVar7;
  char local_10 [8];
  long *local_8;
  
  FUN_006423a0(local_10,param_2);
  if (local_10[0] != '\0') {
    lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
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
    (**(code **)(*plVar6 + 0x40))(param_1,plVar6,lVar7,lVar7 == 0,lVar4,uVar3);
    if ((extraout_w1 & 0xff) != 0) {
      lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
                    /* try { // try from 00643fe0 to 00743fe7 has its CatchHandler @ 006440a0 */
                    /* try { // try from 00643fe8 to 007440c3 has its CatchHandler @ 00643f08 */
      FUN_006215c0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    }
  }
  plVar6 = local_8;
  lVar4 = *(long *)(*local_8 + -0x18);
  if (((((*(uint *)((long)local_8 + lVar4 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar6 = *(long **)((long)plVar6 + lVar4 + 0xe8), plVar6 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar6 + 0x30))(), iVar2 == -1)) {
    lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
    FUN_006215c0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00643fe0 with catch @ 006440a0
                        */
    return param_2;
  }
  return param_2;
}


