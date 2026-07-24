/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006411b8
 * Function: FUN_006411b8
 * Signature: undefined FUN_006411b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006411b8(long *param_1,undefined8 param_2)

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
  
                    /* try { // try from 006411dc to 00741203 has its CatchHandler @ 006413e4 */
  FUN_0063fc7c(local_10,param_1);
  if (local_10[0] != '\0') {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar5 = *(long **)(lVar4 + 0xf8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
                    /* try { // try from 00641204 to 0074129b has its CatchHandler @ 006409dc */
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
    (**(code **)(*plVar5 + 0x28))(plVar5,lVar6,lVar6 == 0,lVar4,uVar2,param_2);
    if ((extraout_w1 & 0xff) != 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 0064101c with catch @ 00641278 */
      FUN_00620c14(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    }
  }
  plVar5 = local_8;
  lVar4 = *(long *)(*local_8 + -0x18);
                    /* try { // try from 0064129c to 007416b3 has its CatchHandler @ 006416bc */
  if (((((*(uint *)((long)local_8 + lVar4 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar5 = *(long **)((long)plVar5 + lVar4 + 0xe8), plVar5 != (long *)0x0)) &&
     (iVar3 = (**(code **)(*plVar5 + 0x30))(), iVar3 == -1)) {
    lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
    FUN_00620c14(lVar4,*(uint *)(lVar4 + 0x20) | 1);
                    /* catch() { ... } // from try @ 00640d64 with catch @ 00641318 */
    return param_1;
  }
                    /* catch() { ... } // from try @ 00640f5c with catch @ 006412c8 */
  return param_1;
}


