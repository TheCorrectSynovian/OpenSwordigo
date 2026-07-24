/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621c18
 * Function: FUN_00621c18
 * Signature: undefined FUN_00621c18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00621c18(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auStack_8 [8];
  undefined8 *puVar11;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 0xc0);
    if ((int)uVar2 < 9) {
      puVar13 = (undefined8 *)(param_1 + 0x40);
    }
    else {
      puVar13 = operator_new__(-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4);
      iVar3 = *(int *)(param_2 + 0xc0);
      lVar17 = 0;
      puVar10 = puVar13;
      if ((long)iVar3 != 0) {
        do {
          lVar17 = lVar17 + 1;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10 = puVar10 + 2;
        } while (iVar3 != lVar17);
      }
    }
    lVar17 = *(long *)(param_2 + 0x28);
    if (lVar17 != 0) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        *(int *)(lVar17 + 0x14) = *(int *)(lVar17 + 0x14) + 1;
      }
      else {
        piVar1 = (int *)(lVar17 + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    FUN_006220f0(param_1,0);
    pvVar8 = *(void **)(param_1 + 200);
    if ((void *)(param_1 + 0x40) != pvVar8) {
      if (pvVar8 != (void *)0x0) {
        operator_delete__(pvVar8);
      }
      *(undefined8 *)(param_1 + 200) = 0;
    }
    FUN_00622158(param_1);
    iVar3 = *(int *)(param_2 + 0xc0);
    *(long *)(param_1 + 0x28) = lVar17;
    if (0 < iVar3) {
      puVar9 = *(undefined8 **)(param_2 + 200);
      puVar10 = puVar9;
      puVar14 = puVar13;
      do {
        puVar11 = puVar10 + 2;
        uVar15 = puVar10[1];
        *puVar14 = *puVar10;
        puVar14[1] = uVar15;
        puVar10 = puVar11;
        puVar14 = puVar14 + 2;
      } while (puVar11 != puVar9 + ((ulong)(iVar3 - 1) + 1) * 2);
    }
    uVar7 = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar15 = *(undefined8 *)(param_2 + 0xd8);
    uVar16 = *(undefined8 *)(param_2 + 8);
    cVar5 = *(char *)(param_2 + 0xe4);
    *(undefined8 **)(param_1 + 200) = puVar13;
    *(int *)(param_1 + 0xc0) = iVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar7;
    *(undefined8 *)(param_1 + 8) = uVar16;
    *(undefined8 *)(param_1 + 0xd8) = uVar15;
    if (cVar5 == '\0') {
      plVar12 = *(long **)(param_2 + 0xf0);
      if (plVar12 == (long *)0x0) goto LAB_00621e2c;
      uVar7 = (**(code **)(*plVar12 + 0x50))(plVar12,0x20);
      *(undefined4 *)(param_2 + 0xe0) = uVar7;
      *(undefined1 *)(param_2 + 0xe4) = 1;
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 0xe0);
    }
    if (*(char *)(param_1 + 0xe4) == '\0') {
      plVar12 = *(long **)(param_1 + 0xf0);
      if (plVar12 == (long *)0x0) {
LAB_00621e2c:
                    /* WARNING: Subroutine does not return */
        FUN_006652c8();
      }
      (**(code **)(*plVar12 + 0x50))(plVar12,0x20);
      *(undefined1 *)(param_1 + 0xe4) = 1;
    }
    *(undefined4 *)(param_1 + 0xe0) = uVar7;
    FUN_0063b7dc(auStack_8,param_2 + 0xd0);
    FUN_0063c028(param_1 + 0xd0,auStack_8);
    FUN_0063c0c8(auStack_8);
    FUN_00621a9c(param_1,param_1 + 0xd0);
    FUN_006220f0(param_1,2);
    uVar2 = *(uint *)(param_2 + 0x1c);
    *(uint *)(param_1 + 0x1c) = uVar2;
    uVar4 = *(uint *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0xe8) == 0) {
      uVar4 = uVar4 | 1;
      *(uint *)(param_1 + 0x20) = uVar4;
    }
    if ((uVar4 & uVar2) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665ad8("basic_ios::clear");
    }
  }
  return param_1;
}


