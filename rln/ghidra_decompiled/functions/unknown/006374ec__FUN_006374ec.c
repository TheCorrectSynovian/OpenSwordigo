/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006374ec
 * Function: FUN_006374ec
 * Signature: undefined FUN_006374ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_006374ec(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            undefined8 param_6,_Ios_Iostate *param_7,double *param_8)

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
  
                    /* try { // try from 00637504 to 0073752b has its CatchHandler @ 00638ef8 */
  local_10 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 0063752c to 0073753f has its CatchHandler @ 006393f4 */
  FUN_00667088(&local_10,0x20);
                    /* try { // try from 0063754c to 0073755f has its CatchHandler @ 00639748 */
  auVar11 = FUN_00636618(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  pcVar8 = local_10;
  plVar9 = auVar11._0_8_;
  uVar10 = auVar11._8_8_ & 0xffffffff;
  local_8 = (int *)FUN_0063be10();
                    /* try { // try from 00637598 to 007375bf has its CatchHandler @ 00638ea8 */
  std::__convert_to_v<double>(pcVar8,param_8,param_7,&local_8);
  if (plVar9 == (long *)0x0) {
LAB_006376a8:
    plVar9 = (long *)0x0;
    iVar4 = 1;
    if (param_4 != (long *)0x0) goto LAB_006375c8;
    goto LAB_0063764c;
  }
  if (auVar11._8_4_ == -1) {
                    /* try { // try from 0063761c to 00737627 has its CatchHandler @ 00639870 */
    if ((byte *)plVar9[2] < (byte *)plVar9[3]) {
      uVar10 = (ulong)*(byte *)plVar9[2];
    }
    else {
      uVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
                    /* try { // try from 006376ec to 007376ff has its CatchHandler @ 006393f0 */
      if (uVar6 == 0xffffffff) goto LAB_006376a8;
      uVar10 = (ulong)uVar6;
    }
  }
  iVar4 = 0;
  if (param_4 == (long *)0x0) {
LAB_006375dc:
                    /* try { // try from 006375e0 to 00737607 has its CatchHandler @ 00639748 */
    uVar10 = param_3 & 0xffffffff00000000 | uVar10;
    pcVar8 = local_10 + -0x18;
    if (pcVar8 == PTR_DAT_007e5de8) goto LAB_006375f4;
  }
  else {
LAB_006375c8:
    iVar3 = 0;
    if ((int)param_5 == -1) {
      if ((ulong)param_4[3] <= (ulong)param_4[2]) {
                    /* try { // try from 006376c0 to 007376e7 has its CatchHandler @ 00639870 */
        iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
        iVar3 = 1;
        if (iVar5 == -1) goto LAB_006375d4;
      }
      if (iVar4 != 0) goto LAB_006375dc;
    }
    else {
LAB_006375d4:
      if (iVar4 != iVar3) goto LAB_006375dc;
    }
LAB_0063764c:
    uVar10 = param_3 & 0xffffffff00000000 | uVar10;
    *(uint *)param_7 = *(uint *)param_7 | 2;
    pcVar8 = local_10 + -0x18;
    if (pcVar8 == PTR_DAT_007e5de8) goto LAB_006375f4;
  }
                    /* try { // try from 00637670 to 0073769f has its CatchHandler @ 00638ff0 */
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
LAB_006375f4:
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = plVar9;
  return auVar11;
}


