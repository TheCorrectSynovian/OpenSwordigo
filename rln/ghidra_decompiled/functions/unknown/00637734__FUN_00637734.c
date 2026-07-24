/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00637734
 * Function: FUN_00637734
 * Signature: undefined FUN_00637734(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00637734(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            undefined8 param_6,_Ios_Iostate *param_7,longdouble *param_8)

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
  
  local_10 = PTR_DAT_007e5de8 + 0x18;
  FUN_00667088(&local_10,0x20);
                    /* try { // try from 006377ac to 007377ef has its CatchHandler @ 00639880 */
  auVar11 = FUN_00636618(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  pcVar8 = local_10;
  plVar9 = auVar11._0_8_;
  uVar10 = auVar11._8_8_ & 0xffffffff;
  local_8 = (int *)FUN_0063be10();
  std::__convert_to_v<long_double>(pcVar8,param_8,param_7,&local_8);
  if (plVar9 == (long *)0x0) {
LAB_006378f0:
    plVar9 = (long *)0x0;
    iVar4 = 1;
    if (param_4 != (long *)0x0) goto LAB_00637810;
    goto LAB_00637894;
  }
  if (auVar11._8_4_ == -1) {
                    /* try { // try from 0063786c to 0073787f has its CatchHandler @ 0063939c */
    if ((byte *)plVar9[2] < (byte *)plVar9[3]) {
      uVar10 = (ulong)*(byte *)plVar9[2];
    }
    else {
      uVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
      if (uVar6 == 0xffffffff) goto LAB_006378f0;
      uVar10 = (ulong)uVar6;
    }
  }
  iVar4 = 0;
  if (param_4 == (long *)0x0) {
LAB_00637824:
    uVar10 = param_3 & 0xffffffff00000000 | uVar10;
    pcVar8 = local_10 + -0x18;
    if (pcVar8 == PTR_DAT_007e5de8) goto LAB_0063783c;
  }
  else {
LAB_00637810:
    iVar3 = 0;
                    /* try { // try from 00637818 to 00737823 has its CatchHandler @ 006393a0 */
    if ((int)param_5 == -1) {
                    /* try { // try from 00637880 to 0073788f has its CatchHandler @ 00639710 */
      if ((ulong)param_4[3] <= (ulong)param_4[2]) {
        iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
                    /* try { // try from 00637910 to 00737937 has its CatchHandler @ 00639710 */
        iVar3 = 1;
        if (iVar5 == -1) goto LAB_0063781c;
      }
      if (iVar4 != 0) goto LAB_00637824;
    }
    else {
LAB_0063781c:
      if (iVar4 != iVar3) goto LAB_00637824;
    }
LAB_00637894:
    uVar10 = param_3 & 0xffffffff00000000 | uVar10;
    *(uint *)param_7 = *(uint *)param_7 | 2;
    pcVar8 = local_10 + -0x18;
    if (pcVar8 == PTR_DAT_007e5de8) goto LAB_0063783c;
  }
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar4 = *(int *)(local_10 + -8);
    *(int *)(local_10 + -8) = iVar4 + -1;
  }
  else {
    piVar7 = (int *)(local_10 + -8);
    do {
                    /* try { // try from 006378c8 to 007378ef has its CatchHandler @ 00638e54 */
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
LAB_0063783c:
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = plVar9;
                    /* try { // try from 00637844 to 0073786b has its CatchHandler @ 00638ea4 */
  return auVar11;
}


