/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00634684
 * Function: FUN_00634684
 * Signature: undefined FUN_00634684(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00634684(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  
  lVar4 = FUN_0062ee14(param_6 + 0xd0);
  auVar8 = FUN_00633538(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10));
  plVar5 = auVar8._0_8_;
  uVar6 = auVar8._8_8_ & 0xffffffff;
  if (plVar5 == (long *)0x0) {
LAB_00634764:
    plVar5 = (long *)0x0;
    iVar7 = 1;
    if (param_4 != (long *)0x0) goto LAB_00634724;
  }
  else {
    if (auVar8._8_4_ == -1) {
      if ((byte *)plVar5[2] < (byte *)plVar5[3]) {
        uVar6 = (ulong)*(byte *)plVar5[2];
      }
      else {
        uVar3 = (**(code **)(*plVar5 + 0x48))();
        if (uVar3 == 0xffffffff) goto LAB_00634764;
        uVar6 = (ulong)uVar3;
      }
    }
    iVar7 = 0;
    if (param_4 == (long *)0x0) goto LAB_00634738;
LAB_00634724:
    iVar1 = 0;
    if ((int)param_5 == -1) {
      if ((ulong)param_4[2] < (ulong)param_4[3]) {
        iVar1 = 0;
      }
      else {
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
        iVar1 = 1;
        if (iVar2 != -1) {
          iVar1 = 0;
        }
      }
    }
    if (iVar7 != iVar1) goto LAB_00634738;
  }
  *param_7 = *param_7 | 2;
LAB_00634738:
  auVar8._8_8_ = param_3 & 0xffffffff00000000 | uVar6;
  auVar8._0_8_ = plVar5;
                    /* try { // try from 00634748 to 00734813 has its CatchHandler @ 0063495c */
  return auVar8;
}


