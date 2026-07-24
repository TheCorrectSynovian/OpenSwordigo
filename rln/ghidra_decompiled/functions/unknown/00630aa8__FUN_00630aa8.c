/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00630aa8
 * Function: FUN_00630aa8
 * Signature: undefined FUN_00630aa8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00630aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            char param_5,long param_6,undefined1 param_7)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  long *plVar5;
  undefined *puVar6;
  int *piVar7;
  size_t __n;
  undefined1 auVar8 [16];
  undefined1 auStack_1400 [4960];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  void *local_8;
  
                    /* try { // try from 00630ac0 to 00730ae7 has its CatchHandler @ 00631a7c */
                    /* try { // try from 00630ae8 to 00730c93 has its CatchHandler @ 006304b8 */
  FUN_0063b7dc(auStack_10,param_6 + 0xd0);
  plVar5 = (long *)FUN_0062d354(auStack_10);
  local_8 = (void *)FUN_0063be10();
  iVar4 = FUN_0062ba00(param_1,&local_8,auStack_1400,0,"%.*Lf",0);
  __n = (size_t)iVar4;
  FUN_00666cf8(&local_8,__n,0,auStack_18);
  if (-1 < *(int *)((long)local_8 + -8)) {
    FUN_00668ea8(&local_8);
  }
  pvVar3 = local_8;
  if ((char)plVar5[7] == '\x01') {
                    /* try { // try from 00630c94 to 00730c97 has its CatchHandler @ 00631abc */
                    /* try { // try from 00630c98 to 00730ca7 has its CatchHandler @ 006304b8 */
    memcpy(local_8,auStack_1400,__n);
  }
  else {
    if ((char)plVar5[7] == '\0') {
      FUN_0061fea0(plVar5);
    }
    (**(code **)(*plVar5 + 0x38))(plVar5,auStack_1400,auStack_1400 + __n,pvVar3);
  }
  if (param_5 == '\0') {
    auVar8 = FUN_00630504(param_2,param_3,param_4,param_6,param_7,&local_8);
    puVar6 = (undefined *)((long)local_8 + -0x18);
    if (puVar6 == PTR_DAT_007e5de8) goto LAB_00630be4;
  }
  else {
    auVar8 = FUN_0062ff60(param_2,param_3,param_4,param_6,param_7,&local_8);
    puVar6 = (undefined *)((long)local_8 + -0x18);
    if (puVar6 == PTR_DAT_007e5de8) goto LAB_00630be4;
  }
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar4 = *(int *)((long)local_8 + -8);
                    /* try { // try from 00630ca8 to 00730caf has its CatchHandler @ 00631ab8 */
    *(int *)((long)local_8 + -8) = iVar4 + -1;
  }
  else {
    piVar7 = (int *)((long)local_8 + -8);
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
    operator_delete(puVar6);
  }
LAB_00630be4:
  FUN_0063c0c8(auStack_10);
  return auVar8;
}


