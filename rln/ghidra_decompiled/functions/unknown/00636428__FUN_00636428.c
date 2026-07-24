/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00636428
 * Function: FUN_00636428
 * Signature: undefined FUN_00636428(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00636428(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
            undefined8 param_5,char param_6,long param_7,undefined8 param_8,long *param_9)

{
  char cVar1;
  bool bVar2;
  undefined *__src;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  size_t __n;
  undefined8 uVar8;
  void *__dest;
  undefined1 auVar9 [16];
  undefined *local_8;
  
  plVar3 = (long *)FUN_0062d354(param_7 + 0xd0);
  local_8 = PTR_DAT_007e5de8 + 0x18;
  if (param_6 == '\0') {
    auVar9 = FUN_0063557c(param_1,param_2,param_3,param_4,param_5,param_7,param_8,&local_8);
    uVar8 = auVar9._0_8_;
    __n = *(size_t *)(local_8 + -0x18);
    uVar7 = param_3 & 0xffffffff00000000 | auVar9._8_8_ & 0xffffffff;
                    /* try { // try from 0063650c to 007365d7 has its CatchHandler @ 0063650c
                       catch() { ... } // from try @ 0063650c with catch @ 0063650c
                       catch() { ... } // from try @ 00636624 with catch @ 0063650c
                       catch() { ... } // from try @ 006366b0 with catch @ 0063650c
                       catch() { ... } // from try @ 006367e0 with catch @ 0063650c
                       catch() { ... } // from try @ 0063690c with catch @ 0063650c */
    if (__n != 0) goto LAB_00636510;
LAB_006364bc:
    puVar4 = local_8 + -0x18;
    if (puVar4 == PTR_DAT_007e5de8) goto LAB_006364cc;
  }
  else {
    auVar9 = FUN_006347f0();
    uVar8 = auVar9._0_8_;
    __n = *(size_t *)(local_8 + -0x18);
    uVar7 = param_3 & 0xffffffff00000000 | auVar9._8_8_ & 0xffffffff;
    if (__n == 0) goto LAB_006364bc;
LAB_00636510:
    FUN_00669650(param_9,__n,0);
    __src = local_8;
    __dest = (void *)*param_9;
    puVar4 = local_8 + __n;
    if (-1 < *(int *)((long)__dest + -8)) {
      FUN_00668ea8(param_9);
      __dest = (void *)*param_9;
    }
    if ((char)plVar3[7] == '\x01') {
                    /* try { // try from 006365d8 to 007365e7 has its CatchHandler @ 00636974 */
      memcpy(__dest,__src,__n);
      goto LAB_006364bc;
    }
    if ((char)plVar3[7] == '\0') {
      FUN_0061fea0(plVar3);
    }
    (**(code **)(*plVar3 + 0x38))(plVar3,__src,puVar4,__dest);
    puVar4 = local_8 + -0x18;
    if (puVar4 == PTR_DAT_007e5de8) goto LAB_006364cc;
  }
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar5 = *(int *)(local_8 + -8);
    *(int *)(local_8 + -8) = iVar5 + -1;
  }
  else {
    piVar6 = (int *)(local_8 + -8);
    do {
      iVar5 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar5 < 1) {
    operator_delete(puVar4);
  }
LAB_006364cc:
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar8;
  return auVar9;
}


