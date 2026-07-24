/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037a824
 * Function: Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize
 * Signature: undefined __thiscall Resize(FastVector<Caver::ItemDropComponent::ItemDrop> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize(int) */

void __thiscall
Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize
          (FastVector<Caver::ItemDropComponent::ItemDrop> *this,int param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  long lVar7;
  undefined *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong *puVar12;
  int *piVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong *puVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  
  lVar7 = tpidr_el0;
  lVar11 = *(long *)(lVar7 + 0x28);
  iVar20 = *(int *)this;
  if (param_1 < *(int *)this) {
    *(int *)this = param_1;
    iVar20 = param_1;
  }
  puVar8 = PTR_DAT_007e5de8;
  puVar3 = PTR_pthread_create_007e4e78;
  if (param_1 == 0) {
    plVar18 = *(long **)(this + 8);
    if (plVar18 != (long *)0x0) {
      lVar23 = plVar18[-1];
      if (lVar23 != 0) {
        plVar22 = plVar18 + lVar23 * 2;
        do {
          while( true ) {
            plVar1 = plVar22 + -1;
            plVar22 = plVar22 + -2;
            puVar10 = (undefined *)(*plVar1 + -0x18);
            if (puVar10 != puVar8) {
              piVar13 = (int *)(*plVar1 + -8);
              if (puVar3 == (undefined *)0x0) {
                iVar20 = *piVar13;
                *piVar13 = iVar20 + -1;
              }
              else {
                do {
                  iVar20 = *piVar13;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                  if (bVar5) {
                    *piVar13 = iVar20 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              if (iVar20 < 1) {
                operator_delete(puVar10);
              }
            }
            puVar10 = (undefined *)(*plVar22 + -0x18);
            if (puVar10 != puVar8) break;
LAB_0037aab0:
            if (plVar22 == plVar18) goto LAB_0037ab38;
          }
          piVar13 = (int *)(*plVar22 + -8);
          if (puVar3 == (undefined *)0x0) {
            iVar20 = *piVar13;
            *piVar13 = iVar20 + -1;
          }
          else {
            do {
              iVar20 = *piVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar5) {
                *piVar13 = iVar20 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (0 < iVar20) goto LAB_0037aab0;
          operator_delete(puVar10);
        } while (plVar22 != plVar18);
      }
LAB_0037ab38:
      operator_delete__(plVar18 + -1);
      *(undefined8 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
    goto LAB_0037ab48;
  }
  if (*(int *)(this + 4) == param_1) goto LAB_0037ab48;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (long)param_1;
  uVar17 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
  uVar2 = uVar17 + 8;
  if (SUB168(auVar6 * ZEXT816(0x10),8) != 0 || 0xfffffffffffffff7 < uVar17) {
    uVar2 = 0xffffffffffffffff;
  }
  puVar9 = operator_new__(uVar2);
  puVar19 = puVar9 + 1;
  *puVar9 = (long)param_1;
  uVar2 = (uVar17 - 0x10 >> 4) + 1;
  puVar12 = puVar19;
  if (uVar2 < 4) {
LAB_0037a908:
    puVar12 = puVar12 + -1;
    puVar3 = PTR_DAT_007e5de8 + 0x18;
    do {
      puVar12[2] = (ulong)puVar3;
      puVar12[1] = (ulong)puVar3;
      puVar12 = puVar12 + 2;
    } while ((ulong *)((long)puVar9 + uVar17) != puVar12);
  }
  else {
    uVar14 = uVar2 & 0x1ffffffffffffffc;
    puVar12 = puVar19 + uVar14 * 2;
    puVar3 = PTR_DAT_007e5de8 + 0x18;
    puVar15 = puVar9 + 5;
    uVar16 = uVar14;
    do {
      puVar15[-3] = (ulong)puVar3;
      puVar15[-4] = (ulong)puVar3;
      puVar15[-1] = (ulong)puVar3;
      puVar15[-2] = (ulong)puVar3;
      puVar15[1] = (ulong)puVar3;
      *puVar15 = (ulong)puVar3;
      puVar15[3] = (ulong)puVar3;
      puVar15[2] = (ulong)puVar3;
      uVar16 = uVar16 - 4;
      puVar15 = puVar15 + 8;
    } while (uVar16 != 0);
    if (uVar2 != uVar14) goto LAB_0037a908;
  }
  plVar18 = *(long **)(this + 8);
  if (plVar18 != (long *)0x0) {
    if (0 < iVar20) {
      lVar21 = 0;
      lVar23 = 0;
      do {
        FUN_0066a6a8((long)puVar9 + lVar21 + 8,(long)plVar18 + lVar21);
        FUN_0066a6a8((long)puVar9 + lVar21 + 0x10,(long)plVar18 + lVar21 + 8);
        plVar18 = *(long **)(this + 8);
        lVar23 = lVar23 + 1;
        lVar21 = lVar21 + 0x10;
      } while (lVar23 < *(int *)this);
      if (plVar18 == (long *)0x0) goto LAB_0037aa58;
    }
    puVar8 = PTR_DAT_007e5de8;
    puVar3 = PTR_pthread_create_007e4e78;
    lVar23 = plVar18[-1];
    if (lVar23 != 0) {
      plVar22 = plVar18 + lVar23 * 2;
      do {
        while( true ) {
          plVar1 = plVar22 + -1;
          plVar22 = plVar22 + -2;
          puVar10 = (undefined *)(*plVar1 + -0x18);
          if (puVar10 != puVar8) {
            piVar13 = (int *)(*plVar1 + -8);
            if (puVar3 == (undefined *)0x0) {
              iVar20 = *piVar13;
              *piVar13 = iVar20 + -1;
            }
            else {
              do {
                iVar20 = *piVar13;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar5) {
                  *piVar13 = iVar20 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if (iVar20 < 1) {
              operator_delete(puVar10);
            }
          }
          puVar10 = (undefined *)(*plVar22 + -0x18);
          if (puVar10 != puVar8) break;
LAB_0037a9c8:
          if (plVar22 == plVar18) goto LAB_0037aa50;
        }
        piVar13 = (int *)(*plVar22 + -8);
        if (puVar3 == (undefined *)0x0) {
          iVar20 = *piVar13;
          *piVar13 = iVar20 + -1;
        }
        else {
          do {
            iVar20 = *piVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar5) {
              *piVar13 = iVar20 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (0 < iVar20) goto LAB_0037a9c8;
        operator_delete(puVar10);
      } while (plVar22 != plVar18);
    }
LAB_0037aa50:
    operator_delete__(plVar18 + -1);
  }
LAB_0037aa58:
  *(int *)(this + 4) = param_1;
  *(ulong **)(this + 8) = puVar19;
LAB_0037ab48:
  if (*(long *)(lVar7 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


