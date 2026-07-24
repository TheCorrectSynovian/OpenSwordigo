/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00652e54
 * Function: FUN_00652e54
 * Signature: undefined FUN_00652e54(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00652e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            char param_5,long param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_1400 [4960];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
                    /* try { // try from 00652e5c to 00752e5f has its CatchHandler @ 00652fa8 */
                    /* try { // try from 00652e60 to 00752fbf has its CatchHandler @ 00652d90 */
  FUN_0063b7dc(auStack_10,param_6 + 0xd0);
  plVar4 = (long *)FUN_0064f6ac(auStack_10);
  local_8 = FUN_0063be10();
  iVar3 = FUN_0062ba00(param_1,&local_8,auStack_1400,0,"%.*Lf",0);
  FUN_0066d754(&local_8,(long)iVar3,0,auStack_18);
  if (-1 < *(int *)(local_8 + -8)) {
    FUN_0066c84c(&local_8);
  }
  (**(code **)(*plVar4 + 0x58))(plVar4,auStack_1400,auStack_1400 + iVar3,local_8);
  if (param_5 == '\0') {
                    /* catch() { ... } // from try @ 00652e5c with catch @ 00652fa8 */
                    /* catch() { ... } // from try @ 00652e0c with catch @ 00652fac */
                    /* catch() { ... } // from try @ 00653028 with catch @ 00652fc0
                       catch() { ... } // from try @ 006530d8 with catch @ 00652fc0
                       catch() { ... } // from try @ 00653224 with catch @ 00652fc0
                       catch() { ... } // from try @ 00653334 with catch @ 00652fc0 */
    auVar7 = FUN_00652738(param_2,param_3,param_4,param_6,param_7,&local_8);
    puVar5 = (undefined *)(local_8 + -0x18);
    if (puVar5 == PTR_DAT_007e6438) goto LAB_00652f78;
  }
  else {
    auVar7 = FUN_0065201c(param_2,param_3,param_4,param_6,param_7,&local_8);
    puVar5 = (undefined *)(local_8 + -0x18);
    if (puVar5 == PTR_DAT_007e6438) goto LAB_00652f78;
  }
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar3 = *(int *)(local_8 + -8);
                    /* try { // try from 0065301c to 00753027 has its CatchHandler @ 006532d0 */
    *(int *)(local_8 + -8) = iVar3 + -1;
  }
  else {
    piVar6 = (int *)(local_8 + -8);
    do {
      iVar3 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar3 < 1) {
    operator_delete(puVar5);
  }
LAB_00652f78:
  FUN_0063c0c8(auStack_10);
  return auVar7;
}


