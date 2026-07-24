/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006598ec
 * Function: FUN_006598ec
 * Signature: undefined FUN_006598ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_006598ec(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            undefined8 param_6,_Ios_Iostate *param_7,longdouble *param_8)

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
  
                    /* catch() { ... } // from try @ 00659684 with catch @ 00659904 */
                    /* try { // try from 00659910 to 00759933 has its CatchHandler @ 00659910
                       catch() { ... } // from try @ 00659910 with catch @ 00659910
                       catch() { ... } // from try @ 00659958 with catch @ 00659910 */
  local_10 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 00659934 to 00759947 has its CatchHandler @ 00659a6c */
  FUN_00667088(&local_10,0x20);
                    /* try { // try from 0065994c to 00759957 has its CatchHandler @ 006599fc */
                    /* try { // try from 00659958 to 00759a6f has its CatchHandler @ 00659910 */
  auVar10 = FUN_00658854(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  pcVar7 = local_10;
  plVar8 = auVar10._0_8_;
  uVar9 = auVar10._8_8_ & 0xffffffff;
  local_8 = (int *)FUN_0063be10();
  std::__convert_to_v<long_double>(pcVar7,param_8,param_7,&local_8);
  iVar2 = (int)param_5;
  if (plVar8 == (long *)0x0) {
LAB_00659acc:
    plVar8 = (long *)0x0;
    bVar6 = true;
    bVar5 = true;
    if (param_4 != (long *)0x0) goto joined_r0x00659ae0;
LAB_00659a44:
    uVar9 = param_3 & 0xffffffff00000000 | uVar9;
    *(uint *)param_7 = *(uint *)param_7 | 2;
    pcVar7 = local_10 + -0x18;
    if (pcVar7 == PTR_DAT_007e5de8) goto LAB_006599fc;
  }
  else {
    if (auVar10._8_4_ == -1) {
                    /* try { // try from 00659aac to 00759ab7 has its CatchHandler @ 00659b44 */
      if ((uint *)plVar8[2] < (uint *)plVar8[3]) {
        uVar3 = *(uint *)plVar8[2];
      }
      else {
        uVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
      }
                    /* try { // try from 00659ab8 to 00759bb7 has its CatchHandler @ 00659a70 */
      if (uVar3 == 0xffffffff) goto LAB_00659acc;
      uVar9 = (ulong)uVar3;
    }
    if (param_4 != (long *)0x0) {
      bVar6 = false;
      bVar5 = false;
joined_r0x00659ae0:
      if (iVar2 == -1) {
        if ((int *)param_4[2] < (int *)param_4[3]) {
          if ((*(int *)param_4[2] == -1) == bVar6) goto LAB_00659a44;
          goto LAB_006599e4;
        }
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
        bVar5 = bVar6;
      }
      if ((iVar2 == -1) == bVar5) goto LAB_00659a44;
    }
LAB_006599e4:
    uVar9 = param_3 & 0xffffffff00000000 | uVar9;
    pcVar7 = local_10 + -0x18;
    if (pcVar7 == PTR_DAT_007e5de8) goto LAB_006599fc;
  }
                    /* catch() { ... } // from try @ 00659934 with catch @ 00659a6c */
                    /* try { // try from 00659a70 to 00759a93 has its CatchHandler @ 00659a70
                       catch() { ... } // from try @ 00659a70 with catch @ 00659a70
                       catch() { ... } // from try @ 00659ab8 with catch @ 00659a70 */
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar2 = *(int *)(local_10 + -8);
    *(int *)(local_10 + -8) = iVar2 + -1;
  }
  else {
    piVar4 = (int *)(local_10 + -8);
    do {
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
                    /* try { // try from 00659a94 to 00759aa7 has its CatchHandler @ 00659bb4 */
    operator_delete(pcVar7);
  }
LAB_006599fc:
                    /* catch() { ... } // from try @ 0065994c with catch @ 006599fc */
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = plVar8;
  return auVar10;
}


