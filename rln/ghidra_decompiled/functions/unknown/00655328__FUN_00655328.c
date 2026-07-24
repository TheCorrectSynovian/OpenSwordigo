/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00655328
 * Function: FUN_00655328
 * Signature: undefined FUN_00655328(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00655328(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,long param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined4 local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar3 = FUN_006513a0(param_6 + 0xd0);
  FUN_0064f6ac(param_6 + 0xd0);
  lVar4 = *(long *)(lVar3 + 0x10);
  local_60 = *(undefined8 *)(lVar4 + 0xa0);
  local_68 = *(undefined8 *)(lVar4 + 0x98);
  local_70 = *(undefined8 *)(lVar4 + 0x90);
  local_58 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xa8);
  local_50 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xb0);
  local_48 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xb8);
  local_40 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xc0);
  local_38 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x58);
  local_30 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x60);
  local_28 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x68);
  local_20 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x70);
  local_18 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x78);
  local_74 = 0;
  local_10 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x80);
  local_8 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x88);
  auVar8 = FUN_00654f18(param_1,param_2,param_3,param_4,param_5,&local_78,&local_70,7,param_6,
                        &local_74);
  plVar5 = auVar8._0_8_;
  uVar6 = auVar8._8_8_ & 0xffffffff;
  if (local_74 == 0) {
    *(undefined4 *)(param_8 + 0x18) = local_78;
    if (plVar5 == (long *)0x0) goto LAB_006554ec;
LAB_00655480:
    if (auVar8._8_4_ == -1) {
      if ((uint *)plVar5[2] < (uint *)plVar5[3]) {
        uVar1 = *(uint *)plVar5[2];
      }
      else {
        uVar1 = (**(code **)(*plVar5 + 0x48))();
      }
      if (uVar1 == 0xffffffff) goto LAB_006554ec;
      uVar6 = (ulong)uVar1;
    }
    bVar7 = false;
    if (param_4 == (long *)0x0) goto LAB_006554ac;
LAB_00655490:
    iVar2 = (int)param_5;
    if (iVar2 == -1) {
      if ((int *)param_4[2] < (int *)param_4[3]) {
        iVar2 = *(int *)param_4[2];
      }
      else {
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
      }
    }
    if ((iVar2 == -1) != bVar7) goto LAB_006554ac;
  }
  else {
    *param_7 = *param_7 | 4;
    if (plVar5 != (long *)0x0) goto LAB_00655480;
LAB_006554ec:
    plVar5 = (long *)0x0;
    bVar7 = true;
    if (param_4 != (long *)0x0) goto LAB_00655490;
  }
  *param_7 = *param_7 | 2;
LAB_006554ac:
  auVar8._8_8_ = param_3 & 0xffffffff00000000 | uVar6;
  auVar8._0_8_ = plVar5;
  return auVar8;
}


