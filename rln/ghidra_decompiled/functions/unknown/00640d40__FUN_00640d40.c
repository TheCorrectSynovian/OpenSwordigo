/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00640d40
 * Function: FUN_00640d40
 * Signature: undefined FUN_00640d40(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00640d40(long *param_1,undefined8 param_2)

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
  
                    /* try { // try from 00640d64 to 00740d8b has its CatchHandler @ 00641318 */
  FUN_0063fc7c(local_10,param_1);
  if (local_10[0] != '\0') {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar5 = *(long **)(lVar4 + 0xf8);
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
                    /* try { // try from 00640dac to 00740dd3 has its CatchHandler @ 006413f4 */
      if ((char)plVar7[7] == '\0') {
                    /* try { // try from 00640ea8 to 00740eaf has its CatchHandler @ 006413bc */
        FUN_0061fea0(plVar7);
                    /* try { // try from 00640ebc to 00740ec3 has its CatchHandler @ 006415d0 */
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
    (**(code **)(*plVar5 + 0x20))(plVar5,lVar6,lVar6 == 0,lVar4,uVar2,param_2);
    if ((extraout_w1 & 0xff) != 0) {
                    /* try { // try from 00640df0 to 00740e03 has its CatchHandler @ 00641490 */
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00620c14(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    }
  }
  plVar5 = local_8;
  lVar4 = *(long *)(*local_8 + -0x18);
                    /* try { // try from 00640e24 to 00740e4b has its CatchHandler @ 0064166c */
  if (((((*(uint *)((long)local_8 + lVar4 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar5 = *(long **)((long)plVar5 + lVar4 + 0xe8), plVar5 != (long *)0x0)) &&
     (iVar3 = (**(code **)(*plVar5 + 0x30))(), iVar3 == -1)) {
    lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
    FUN_00620c14(lVar4,*(uint *)(lVar4 + 0x20) | 1);
                    /* try { // try from 00640e9c to 00740ea7 has its CatchHandler @ 006415d0 */
    return param_1;
  }
                    /* try { // try from 00640e4c to 00740e9b has its CatchHandler @ 006409dc */
  return param_1;
}


