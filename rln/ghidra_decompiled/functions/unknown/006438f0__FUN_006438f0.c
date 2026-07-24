/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006438f0
 * Function: FUN_006438f0
 * Signature: undefined FUN_006438f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006438f0(long *param_1,undefined8 param_2)

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
  
                    /* try { // try from 00643914 to 00743917 has its CatchHandler @ 00643a54 */
  FUN_006423a0(local_10,param_1);
  if (local_10[0] != '\0') {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar6 = *(long **)(lVar4 + 0xf8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    lVar7 = *(long *)(lVar4 + 0xe8);
    if (*(char *)(lVar4 + 0xe4) == '\0') {
      plVar5 = *(long **)(lVar4 + 0xf0);
                    /* catch() { ... } // from try @ 006439bc with catch @ 006439f8 */
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_006652c8();
      }
                    /* catch() { ... } // from try @ 00643998 with catch @ 00643a00 */
      uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,0x20);
                    /* catch() { ... } // from try @ 00643974 with catch @ 00643a10 */
      *(undefined4 *)(lVar4 + 0xe0) = uVar3;
      *(undefined1 *)(lVar4 + 0xe4) = 1;
    }
    else {
                    /* try { // try from 00643950 to 00743953 has its CatchHandler @ 00643a20 */
      uVar3 = *(undefined4 *)(lVar4 + 0xe0);
    }
    (**(code **)(*plVar6 + 0x28))(plVar6,lVar7,lVar7 == 0,lVar4,uVar3,param_2);
                    /* try { // try from 00643974 to 00743977 has its CatchHandler @ 00643a10 */
    if ((extraout_w1 & 0xff) != 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    }
  }
                    /* try { // try from 00643998 to 0074399b has its CatchHandler @ 00643a00 */
  plVar6 = local_8;
  lVar4 = *(long *)(*local_8 + -0x18);
                    /* try { // try from 006439bc to 007439bf has its CatchHandler @ 006439f8 */
                    /* try { // try from 006439c0 to 00743a43 has its CatchHandler @ 00643814 */
  if (((((*(uint *)((long)local_8 + lVar4 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar6 = *(long **)((long)plVar6 + lVar4 + 0xe8), plVar6 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar6 + 0x30))(), iVar2 == -1)) {
                    /* catch() { ... } // from try @ 00643950 with catch @ 00643a20 */
    lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
    FUN_006215c0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
                    /* try { // try from 00643a44 to 00743a4b has its CatchHandler @ 00643a50 */
                    /* catch() { ... } // from try @ 00643a44 with catch @ 00643a50 */
                    /* catch() { ... } // from try @ 00643914 with catch @ 00643a54 */
    return param_1;
  }
  return param_1;
}


