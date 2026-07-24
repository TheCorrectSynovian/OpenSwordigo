/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00643b08
 * Function: FUN_00643b08
 * Signature: undefined FUN_00643b08(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00643b08(long *param_1,undefined8 param_2)

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
  
                    /* try { // try from 00643b20 to 00743b4b has its CatchHandler @ 00643814 */
                    /* catch() { ... } // from try @ 00643aa8 with catch @ 00643b28 */
  FUN_006423a0(local_10,param_1);
  if (local_10[0] != '\0') {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00643b4c to 00743b53 has its CatchHandler @ 00643b58 */
    plVar6 = *(long **)(lVar4 + 0xf8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    lVar7 = *(long *)(lVar4 + 0xe8);
                    /* catch() { ... } // from try @ 00643b4c with catch @ 00643b58 */
                    /* catch() { ... } // from try @ 00643acc with catch @ 00643b5c */
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
                    /* catch() { ... } // from try @ 00643b7c with catch @ 00643b68 */
      uVar3 = *(undefined4 *)(lVar4 + 0xe0);
    }
                    /* try { // try from 00643b78 to 00743b7b has its CatchHandler @ 00643b8c */
                    /* try { // try from 00643b7c to 00743b9f has its CatchHandler @ 00643b68 */
    (**(code **)(*plVar6 + 0x30))(plVar6,lVar7,lVar7 == 0,lVar4,uVar3,param_2);
                    /* catch() { ... } // from try @ 00643b78 with catch @ 00643b8c */
    if ((extraout_w1 & 0xff) != 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
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
    return param_1;
  }
  return param_1;
}


