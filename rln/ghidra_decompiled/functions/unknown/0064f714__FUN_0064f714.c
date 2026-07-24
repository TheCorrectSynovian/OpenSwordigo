/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064f714
 * Function: FUN_0064f714
 * Signature: undefined FUN_0064f714(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0064f714(long *param_1,undefined8 param_2,ulong param_3,long param_4,undefined4 param_5,
            undefined8 param_6,int *param_7,int *param_8)

{
  long *plVar1;
  char cVar2;
  int iVar4;
  char cVar3;
  long *plVar5;
  int *piVar6;
  char cVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar9._8_8_ = param_3;
  auVar9._0_8_ = param_2;
  plVar5 = (long *)FUN_0064f6ac(param_4 + 0xd0);
  while( true ) {
    plVar1 = auVar9._0_8_;
    uVar8 = auVar9._8_8_ & 0xff;
    while( true ) {
      if (param_7 == param_8) goto LAB_0064f87c;
      cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,*param_7,0);
      if (cVar2 == '%') break;
      iVar4 = *param_7;
      if ((int)uVar8 == 0) {
        piVar6 = (int *)plVar1[5];
        if (piVar6 < (int *)plVar1[6]) {
          *piVar6 = iVar4;
          plVar1[5] = (long)(piVar6 + 1);
        }
        else {
          iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1);
        }
        uVar8 = (ulong)(iVar4 == -1);
      }
      param_7 = param_7 + 1;
    }
    piVar6 = param_7 + 1;
    if (param_8 == piVar6) break;
                    /* catch() { ... } // from try @ 0064f07c with catch @ 0064f7e0 */
    cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,param_7[1],0);
    if ((cVar2 == 'O') || (cVar2 == 'E')) {
      piVar6 = param_7 + 2;
                    /* try { // try from 0064f804 to 0074f80b has its CatchHandler @ 0064f988 */
      if (param_8 == piVar6) break;
                    /* try { // try from 0064f80c to 0074f957 has its CatchHandler @ 0064eeb8 */
                    /* catch() { ... } // from try @ 0064f4d0 with catch @ 0064f810 */
                    /* catch() { ... } // from try @ 0064f5e8 with catch @ 0064f814 */
                    /* catch() { ... } // from try @ 0064f3f0 with catch @ 0064f818 */
                    /* catch() { ... } // from try @ 0064f650 with catch @ 0064f81c */
                    /* catch() { ... } // from try @ 0064efdc with catch @ 0064f820 */
      cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,param_7[2],0);
      cVar7 = cVar2;
    }
    else {
      cVar7 = '\0';
      cVar3 = cVar2;
    }
    param_7 = piVar6 + 1;
    auVar9 = (**(code **)(*param_1 + 0x10))
                       (param_1,plVar1,param_3 & 0xffffffffffffff00 | uVar8,param_4,param_5,param_6,
                        cVar3,cVar7);
    param_3 = param_3 & 0xffffffffffffff00;
  }
LAB_0064f87c:
  auVar10._8_8_ = param_3 & 0xffffffffffffff00 | uVar8;
  auVar10._0_8_ = plVar1;
                    /* catch() { ... } // from try @ 0064efc8 with catch @ 0064f884 */
                    /* catch() { ... } // from try @ 0064efbc with catch @ 0064f888 */
                    /* catch() { ... } // from try @ 0064f1d0 with catch @ 0064f88c */
                    /* catch() { ... } // from try @ 0064f004 with catch @ 0064f890 */
  return auVar10;
}


