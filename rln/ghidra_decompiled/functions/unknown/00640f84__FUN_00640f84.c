/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00640f84
 * Function: FUN_00640f84
 * Signature: undefined FUN_00640f84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00640f84(long *param_1,undefined1 param_2)

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
  
                    /* try { // try from 00640fa4 to 00740fcb has its CatchHandler @ 00641580 */
  FUN_0063fc7c(local_10,param_1);
  if (local_10[0] != '\0') {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar5 = *(long **)(lVar4 + 0xf8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
                    /* try { // try from 00640fd0 to 00740fdb has its CatchHandler @ 006413f0 */
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
                    /* try { // try from 00641104 to 0074118b has its CatchHandler @ 006409dc */
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
                    /* try { // try from 0064101c to 00741043 has its CatchHandler @ 00641278 */
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar6,lVar6 == 0,lVar4,uVar2,param_2);
    if ((extraout_w1 & 0xff) != 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00620c14(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    }
  }
  plVar5 = local_8;
  lVar4 = *(long *)(*local_8 + -0x18);
                    /* try { // try from 00641064 to 0074108b has its CatchHandler @ 006413f0 */
  if (((((*(uint *)((long)local_8 + lVar4 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar5 = *(long **)((long)plVar5 + lVar4 + 0xe8), plVar5 != (long *)0x0)) &&
     (iVar3 = (**(code **)(*plVar5 + 0x30))(), iVar3 == -1)) {
    lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
    FUN_00620c14(lVar4,*(uint *)(lVar4 + 0x20) | 1);
                    /* try { // try from 006410dc to 00741103 has its CatchHandler @ 006415d0 */
    return param_1;
  }
                    /* try { // try from 006410a8 to 007410bb has its CatchHandler @ 0064148c */
  return param_1;
}


