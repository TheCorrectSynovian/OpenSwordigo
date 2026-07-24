/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006586a4
 * Function: FUN_006586a4
 * Signature: undefined FUN_006586a4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_006586a4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
            undefined8 param_5,char param_6,long param_7,undefined8 param_8,long *param_9)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined *local_8;
  
  plVar4 = (long *)FUN_0064f6ac(param_7 + 0xd0);
  local_8 = PTR_DAT_007e5de8 + 0x18;
  if (param_6 == '\0') {
    auVar12 = FUN_006569ec(param_1,param_2,param_3,param_4,param_5,param_7,param_8,&local_8);
    uVar11 = auVar12._0_8_;
    lVar9 = *(long *)(local_8 + -0x18);
    uVar10 = param_3 & 0xffffffff00000000 | auVar12._8_8_ & 0xffffffff;
    if (lVar9 != 0) goto LAB_00658784;
LAB_00658734:
    puVar5 = local_8 + -0x18;
    if (puVar5 == PTR_DAT_007e5de8) goto LAB_00658744;
  }
  else {
    auVar12 = FUN_006577b8();
    uVar11 = auVar12._0_8_;
    lVar9 = *(long *)(local_8 + -0x18);
    uVar10 = param_3 & 0xffffffff00000000 | auVar12._8_8_ & 0xffffffff;
    if (lVar9 == 0) goto LAB_00658734;
LAB_00658784:
    FUN_0066e994(param_9,lVar9,0);
    puVar3 = local_8;
    lVar8 = *param_9;
    puVar5 = local_8 + lVar9;
    if (-1 < *(int *)(lVar8 + -8)) {
      FUN_0066c84c(param_9);
      lVar8 = *param_9;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,puVar3,puVar5,lVar8);
    puVar5 = local_8 + -0x18;
    if (puVar5 == PTR_DAT_007e5de8) goto LAB_00658744;
  }
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar6 = *(int *)(local_8 + -8);
    *(int *)(local_8 + -8) = iVar6 + -1;
  }
  else {
    piVar7 = (int *)(local_8 + -8);
    do {
      iVar6 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar6 < 1) {
    operator_delete(puVar5);
  }
LAB_00658744:
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = uVar11;
  return auVar12;
}


