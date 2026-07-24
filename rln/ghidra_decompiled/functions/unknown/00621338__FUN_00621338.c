/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621338
 * Function: FUN_00621338
 * Signature: undefined FUN_00621338(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00621338(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined1 auStack_8 [8];
  undefined8 *puVar12;
  
  if (param_1 != param_2) {
                    /* try { // try from 0062135c to 00721363 has its CatchHandler @ 00621f3c */
    uVar2 = *(uint *)(param_2 + 0xc0);
    if ((int)uVar2 < 9) {
      puVar13 = (undefined8 *)(param_1 + 0x40);
    }
    else {
      puVar13 = operator_new__(-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4);
      iVar3 = *(int *)(param_2 + 0xc0);
                    /* try { // try from 006214f0 to 00721553 has its CatchHandler @ 00622484 */
      lVar18 = 0;
      puVar11 = puVar13;
      if ((long)iVar3 != 0) {
        do {
          lVar18 = lVar18 + 1;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11 = puVar11 + 2;
        } while (iVar3 != lVar18);
      }
    }
    lVar18 = *(long *)(param_2 + 0x28);
    if (lVar18 != 0) {
                    /* try { // try from 0062137c to 00721383 has its CatchHandler @ 0062238c */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        *(int *)(lVar18 + 0x14) = *(int *)(lVar18 + 0x14) + 1;
      }
      else {
                    /* try { // try from 00621384 to 00721397 has its CatchHandler @ 00622388 */
        piVar1 = (int *)(lVar18 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
                    /* try { // try from 00621398 to 007213fb has its CatchHandler @ 006224f4 */
    FUN_006220f0(param_1,0);
    pvVar9 = *(void **)(param_1 + 200);
    if (pvVar9 != (void *)(param_1 + 0x40)) {
      if (pvVar9 != (void *)0x0) {
        operator_delete__(pvVar9);
      }
      *(undefined8 *)(param_1 + 200) = 0;
    }
    FUN_00622158(param_1);
    iVar3 = *(int *)(param_2 + 0xc0);
    *(long *)(param_1 + 0x28) = lVar18;
    if (0 < iVar3) {
      puVar10 = *(undefined8 **)(param_2 + 200);
      puVar11 = puVar10;
      puVar14 = puVar13;
      do {
        puVar12 = puVar11 + 2;
        uVar15 = puVar11[1];
        *puVar14 = *puVar11;
        puVar14[1] = uVar15;
        puVar11 = puVar12;
        puVar14 = puVar14 + 2;
      } while (puVar12 != puVar10 + ((ulong)(iVar3 - 1) + 1) * 2);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar15 = *(undefined8 *)(param_2 + 0xd8);
                    /* try { // try from 00621408 to 0072140f has its CatchHandler @ 00621f0c */
    uVar16 = *(undefined8 *)(param_2 + 8);
    cVar6 = *(char *)(param_2 + 0xe1);
    *(undefined8 **)(param_1 + 200) = puVar13;
    *(int *)(param_1 + 0xc0) = iVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar16;
    *(undefined8 *)(param_1 + 0xd8) = uVar15;
    if (cVar6 == '\0') {
                    /* try { // try from 00621428 to 0072142f has its CatchHandler @ 00622384 */
      plVar17 = *(long **)(param_2 + 0xf0);
      if (plVar17 == (long *)0x0) goto LAB_00621580;
                    /* try { // try from 00621430 to 00721443 has its CatchHandler @ 00622380 */
      if ((char)plVar17[7] == '\0') {
        FUN_0061fea0(plVar17);
        uVar8 = (**(code **)(*plVar17 + 0x30))(plVar17,0x20);
      }
      else {
        uVar8 = *(undefined1 *)((long)plVar17 + 0x59);
      }
      *(undefined1 *)(param_2 + 0xe0) = uVar8;
                    /* try { // try from 00621444 to 007214a7 has its CatchHandler @ 006224bc */
      *(undefined1 *)(param_2 + 0xe1) = 1;
    }
    else {
      uVar8 = *(undefined1 *)(param_2 + 0xe0);
    }
    if (*(char *)(param_1 + 0xe1) == '\0') {
      plVar17 = *(long **)(param_1 + 0xf0);
      if (plVar17 == (long *)0x0) {
LAB_00621580:
                    /* WARNING: Subroutine does not return */
        FUN_006652c8();
      }
      if ((char)plVar17[7] == '\0') {
        FUN_0061fea0(plVar17);
                    /* try { // try from 00621560 to 00721567 has its CatchHandler @ 00621eac */
        (**(code **)(*plVar17 + 0x30))(plVar17,0x20);
      }
      *(undefined1 *)(param_1 + 0xe1) = 1;
    }
    *(undefined1 *)(param_1 + 0xe0) = uVar8;
    FUN_0063b7dc(auStack_8,param_2 + 0xd0);
    FUN_0063c028(param_1 + 0xd0,auStack_8);
    FUN_0063c0c8(auStack_8);
    FUN_006211bc(param_1,param_1 + 0xd0);
    FUN_006220f0(param_1,2);
    uVar2 = *(uint *)(param_2 + 0x1c);
                    /* try { // try from 006214b4 to 007214bb has its CatchHandler @ 00621edc */
    *(uint *)(param_1 + 0x1c) = uVar2;
    uVar5 = *(uint *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0xe8) == 0) {
      uVar5 = uVar5 | 1;
      *(uint *)(param_1 + 0x20) = uVar5;
    }
    if ((uVar5 & uVar2) != 0) {
                    /* try { // try from 00621588 to 0072158f has its CatchHandler @ 00622474 */
                    /* WARNING: Subroutine does not return */
      FUN_00665ad8("basic_ios::clear");
    }
  }
                    /* try { // try from 006214d4 to 007214db has its CatchHandler @ 0062237c */
                    /* try { // try from 006214dc to 007214ef has its CatchHandler @ 00622378 */
  return param_1;
}


