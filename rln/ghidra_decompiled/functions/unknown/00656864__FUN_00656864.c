/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00656864
 * Function: FUN_00656864
 * Signature: undefined FUN_00656864(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00656864(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  
                    /* try { // try from 00656864 to 0075688b has its CatchHandler @ 0065689c */
                    /* try { // try from 0065688c to 007568af has its CatchHandler @ 0065680c */
                    /* catch() { ... } // from try @ 00656864 with catch @ 0065689c */
  lVar3 = FUN_006513a0(param_6 + 0xd0);
                    /* try { // try from 006568d0 to 00756953 has its CatchHandler @ 006568d0
                       catch() { ... } // from try @ 006568d0 with catch @ 006568d0
                       catch() { ... } // from try @ 006569cc with catch @ 006568d0 */
  auVar8 = FUN_00655830(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10));
  plVar4 = auVar8._0_8_;
  uVar5 = auVar8._8_8_ & 0xffffffff;
  iVar2 = (int)param_5;
  if (plVar4 == (long *)0x0) {
LAB_006569ac:
                    /* try { // try from 006569ac to 007569cb has its CatchHandler @ 006569fc */
    plVar4 = (long *)0x0;
    bVar7 = true;
    bVar6 = true;
    if (param_4 != (long *)0x0) goto joined_r0x006569c0;
  }
  else {
    if (auVar8._8_4_ == -1) {
                    /* try { // try from 0065698c to 007569ab has its CatchHandler @ 00656a00 */
      if ((uint *)plVar4[2] < (uint *)plVar4[3]) {
        uVar1 = *(uint *)plVar4[2];
      }
      else {
                    /* try { // try from 006569cc to 00756ab7 has its CatchHandler @ 006568d0 */
        uVar1 = (**(code **)(*plVar4 + 0x48))();
      }
      if (uVar1 == 0xffffffff) goto LAB_006569ac;
      uVar5 = (ulong)uVar1;
    }
    if (param_4 == (long *)0x0) goto LAB_00656920;
    bVar7 = false;
    bVar6 = false;
joined_r0x006569c0:
    if (iVar2 == -1) {
                    /* try { // try from 00656954 to 0075696b has its CatchHandler @ 00656aa0 */
      if ((int *)param_4[2] < (int *)param_4[3]) {
                    /* try { // try from 0065696c to 0075698b has its CatchHandler @ 00656a04 */
        if ((*(int *)param_4[2] == -1) != bVar7) goto LAB_00656920;
        goto LAB_00656970;
      }
      iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
      bVar6 = bVar7;
    }
    if ((iVar2 == -1) != bVar6) goto LAB_00656920;
  }
LAB_00656970:
  *param_7 = *param_7 | 2;
LAB_00656920:
  auVar8._8_8_ = param_3 & 0xffffffff00000000 | uVar5;
  auVar8._0_8_ = plVar4;
  return auVar8;
}


