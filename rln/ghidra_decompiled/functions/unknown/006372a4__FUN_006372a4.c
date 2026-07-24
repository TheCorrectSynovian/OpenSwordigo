/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006372a4
 * Function: FUN_006372a4
 * Signature: undefined FUN_006372a4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_006372a4(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            undefined8 param_6,_Ios_Iostate *param_7,float *param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  char *local_10;
  int *local_8;
  
                    /* try { // try from 006372bc to 007372c7 has its CatchHandler @ 00638bc4 */
  local_10 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 006372f4 to 007372ff has its CatchHandler @ 00639480 */
  FUN_00667088(&local_10,0x20);
                    /* try { // try from 00637320 to 00737347 has its CatchHandler @ 00638f4c */
  auVar11 = FUN_00636618(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  pcVar8 = local_10;
  plVar9 = auVar11._0_8_;
  uVar10 = auVar11._8_8_ & 0xffffffff;
                    /* try { // try from 00637348 to 0073735b has its CatchHandler @ 0063947c */
  local_8 = (int *)FUN_0063be10();
                    /* try { // try from 0063735c to 0073736b has its CatchHandler @ 00639780 */
  std::__convert_to_v<float>(pcVar8,param_8,param_7,&local_8);
  if (plVar9 == (long *)0x0) {
LAB_00637460:
    plVar9 = (long *)0x0;
    iVar4 = 1;
    if (param_4 != (long *)0x0) goto LAB_00637380;
    goto LAB_00637404;
  }
  if (auVar11._8_4_ == -1) {
    if ((byte *)plVar9[2] < (byte *)plVar9[3]) {
      uVar10 = (ulong)*(byte *)plVar9[2];
    }
    else {
                    /* try { // try from 006374a0 to 007374ab has its CatchHandler @ 00638bc0 */
      uVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
      if (uVar6 == 0xffffffff) goto LAB_00637460;
      uVar10 = (ulong)uVar6;
    }
  }
  iVar4 = 0;
  if (param_4 == (long *)0x0) {
LAB_00637394:
    uVar10 = param_3 & 0xffffffff00000000 | uVar10;
    pcVar8 = local_10 + -0x18;
                    /* try { // try from 006373a4 to 007373cb has its CatchHandler @ 00638efc */
    if (pcVar8 == PTR_DAT_007e5de8) goto LAB_006373ac;
  }
  else {
LAB_00637380:
    iVar3 = 0;
    if ((int)param_5 == -1) {
                    /* try { // try from 006373ec to 00737413 has its CatchHandler @ 00639780 */
      if ((ulong)param_4[3] <= (ulong)param_4[2]) {
        iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
        iVar3 = 1;
        if (iVar5 == -1) goto LAB_0063738c;
      }
      if (iVar4 != 0) goto LAB_00637394;
    }
    else {
LAB_0063738c:
      if (iVar4 != iVar3) goto LAB_00637394;
    }
LAB_00637404:
    uVar10 = param_3 & 0xffffffff00000000 | uVar10;
    *(uint *)param_7 = *(uint *)param_7 | 2;
    pcVar8 = local_10 + -0x18;
    if (pcVar8 == PTR_DAT_007e5de8) goto LAB_006373ac;
  }
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar4 = *(int *)(local_10 + -8);
    *(int *)(local_10 + -8) = iVar4 + -1;
  }
  else {
    piVar7 = (int *)(local_10 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar4 < 1) {
    operator_delete(pcVar8);
  }
LAB_006373ac:
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = plVar9;
  return auVar11;
}


