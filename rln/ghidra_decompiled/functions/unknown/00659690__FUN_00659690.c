/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00659690
 * Function: FUN_00659690
 * Signature: undefined FUN_00659690(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00659690(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            undefined8 param_6,_Ios_Iostate *param_7,double *param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  char *local_10;
  int *local_8;
  
                    /* try { // try from 0065969c to 007596a7 has its CatchHandler @ 00659894 */
                    /* try { // try from 006596a8 to 00759753 has its CatchHandler @ 00659654 */
  local_10 = PTR_DAT_007e5de8 + 0x18;
  FUN_00667088(&local_10,0x20);
  auVar10 = FUN_00658854(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  pcVar7 = local_10;
  plVar8 = auVar10._0_8_;
  uVar9 = auVar10._8_8_ & 0xffffffff;
  local_8 = (int *)FUN_0063be10();
                    /* try { // try from 00659754 to 00759757 has its CatchHandler @ 00659868 */
  std::__convert_to_v<double>(pcVar7,param_8,param_7,&local_8);
                    /* try { // try from 00659758 to 007597e3 has its CatchHandler @ 00659654 */
  iVar2 = (int)param_5;
  if (plVar8 == (long *)0x0) {
LAB_00659870:
    plVar8 = (long *)0x0;
    bVar6 = true;
    bVar5 = true;
    if (param_4 != (long *)0x0) goto joined_r0x00659884;
LAB_006597e8:
    uVar9 = param_3 & 0xffffffff00000000 | uVar9;
    *(uint *)param_7 = *(uint *)param_7 | 2;
    pcVar7 = local_10 + -0x18;
    if (pcVar7 == PTR_DAT_007e5de8) goto LAB_006597a0;
  }
  else {
    if (auVar10._8_4_ == -1) {
      if ((uint *)plVar8[2] < (uint *)plVar8[3]) {
        uVar3 = *(uint *)plVar8[2];
      }
      else {
        uVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
      }
      if (uVar3 == 0xffffffff) goto LAB_00659870;
      uVar9 = (ulong)uVar3;
    }
                    /* catch() { ... } // from try @ 00659754 with catch @ 00659868
                       catch() { ... } // from try @ 006597e4 with catch @ 00659868 */
    if (param_4 != (long *)0x0) {
      bVar6 = false;
      bVar5 = false;
joined_r0x00659884:
                    /* try { // try from 00659884 to 0075988b has its CatchHandler @ 00659890 */
      if (iVar2 == -1) {
        if ((int *)param_4[2] < (int *)param_4[3]) {
                    /* try { // try from 006597e4 to 0075981b has its CatchHandler @ 00659868 */
          if ((*(int *)param_4[2] == -1) == bVar6) goto LAB_006597e8;
          goto LAB_00659788;
        }
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
        bVar5 = bVar6;
      }
      if ((iVar2 == -1) == bVar5) goto LAB_006597e8;
    }
LAB_00659788:
    uVar9 = param_3 & 0xffffffff00000000 | uVar9;
    pcVar7 = local_10 + -0x18;
    if (pcVar7 == PTR_DAT_007e5de8) goto LAB_006597a0;
  }
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0065988c to 0075990f has its CatchHandler @ 00659654 */
    iVar2 = *(int *)(local_10 + -8);
                    /* catch() { ... } // from try @ 00659884 with catch @ 00659890 */
                    /* catch() { ... } // from try @ 0065969c with catch @ 00659894 */
    *(int *)(local_10 + -8) = iVar2 + -1;
  }
  else {
    piVar4 = (int *)(local_10 + -8);
    do {
                    /* try { // try from 0065981c to 00759883 has its CatchHandler @ 00659654 */
      iVar2 = *piVar4;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar5) {
        *piVar4 = iVar2 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar2 < 1) {
    operator_delete(pcVar7);
  }
LAB_006597a0:
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = plVar8;
  return auVar10;
}


