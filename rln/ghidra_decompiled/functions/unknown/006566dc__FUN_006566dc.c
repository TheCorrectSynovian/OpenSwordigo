/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006566dc
 * Function: FUN_006566dc
 * Signature: undefined FUN_006566dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_006566dc(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
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
  
                    /* try { // try from 006566e0 to 007567d7 has its CatchHandler @ 0065633c */
  lVar3 = FUN_006513a0(param_6 + 0xd0);
  auVar8 = FUN_00655830(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x20));
  plVar4 = auVar8._0_8_;
  uVar5 = auVar8._8_8_ & 0xffffffff;
  iVar2 = (int)param_5;
  if (plVar4 == (long *)0x0) {
LAB_00656824:
    plVar4 = (long *)0x0;
    bVar7 = true;
    bVar6 = true;
    if (param_4 != (long *)0x0) goto joined_r0x00656838;
  }
  else {
    if (auVar8._8_4_ == -1) {
                    /* try { // try from 00656800 to 0075680b has its CatchHandler @ 0065633c */
      if ((uint *)plVar4[2] < (uint *)plVar4[3]) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006567d8 with catch @ 00656808
                        */
        uVar1 = *(uint *)plVar4[2];
      }
      else {
        uVar1 = (**(code **)(*plVar4 + 0x48))();
      }
                    /* catch() { ... } // from try @ 0065688c with catch @ 0065680c */
      if (uVar1 == 0xffffffff) goto LAB_00656824;
      uVar5 = (ulong)uVar1;
    }
    if (param_4 == (long *)0x0) goto LAB_00656798;
    bVar7 = false;
    bVar6 = false;
joined_r0x00656838:
    if (iVar2 == -1) {
      if ((int *)param_4[2] < (int *)param_4[3]) {
                    /* try { // try from 006567d8 to 007567ff has its CatchHandler @ 00656808 */
        if ((*(int *)param_4[2] == -1) != bVar7) goto LAB_00656798;
        goto LAB_006567e8;
      }
      iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
      bVar6 = bVar7;
    }
    if ((iVar2 == -1) != bVar6) goto LAB_00656798;
  }
LAB_006567e8:
  *param_7 = *param_7 | 2;
LAB_00656798:
  auVar8._8_8_ = param_3 & 0xffffffff00000000 | uVar5;
  auVar8._0_8_ = plVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006566d8 with catch @ 006567b8
                        */
  return auVar8;
}


