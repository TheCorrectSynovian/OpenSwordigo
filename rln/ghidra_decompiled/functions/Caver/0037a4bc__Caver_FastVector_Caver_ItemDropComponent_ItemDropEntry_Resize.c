/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037a4bc
 * Function: Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize
 * Signature: undefined __thiscall Resize(FastVector<Caver::ItemDropComponent::ItemDropEntry> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize(int) */

void __thiscall
Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize
          (FastVector<Caver::ItemDropComponent::ItemDropEntry> *this,int param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  long lVar8;
  undefined *puVar9;
  ulong *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong *puVar13;
  int *piVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong *puVar20;
  int iVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  
  lVar8 = tpidr_el0;
  lVar12 = *(long *)(lVar8 + 0x28);
  iVar21 = *(int *)this;
  if (param_1 < *(int *)this) {
    *(int *)this = param_1;
    iVar21 = param_1;
  }
  puVar9 = PTR_DAT_007e5de8;
  puVar3 = PTR_pthread_create_007e4e78;
  if (param_1 == 0) {
    plVar19 = *(long **)(this + 8);
    if (plVar19 != (long *)0x0) {
      lVar24 = plVar19[-1];
      if (lVar24 != 0) {
        plVar23 = plVar19 + lVar24 * 4;
        do {
          while( true ) {
            plVar1 = plVar23 + -3;
            plVar23 = plVar23 + -4;
            puVar11 = (undefined *)(*plVar1 + -0x18);
            if (puVar11 != puVar9) {
              piVar14 = (int *)(*plVar1 + -8);
              if (puVar3 == (undefined *)0x0) {
                iVar21 = *piVar14;
                *piVar14 = iVar21 + -1;
              }
              else {
                do {
                  iVar21 = *piVar14;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                  if (bVar6) {
                    *piVar14 = iVar21 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              if (iVar21 < 1) {
                operator_delete(puVar11);
              }
            }
            puVar11 = (undefined *)(*plVar23 + -0x18);
            if (puVar11 != puVar9) break;
LAB_0037a758:
            if (plVar23 == plVar19) goto LAB_0037a7e0;
          }
          piVar14 = (int *)(*plVar23 + -8);
          if (puVar3 == (undefined *)0x0) {
            iVar21 = *piVar14;
            *piVar14 = iVar21 + -1;
          }
          else {
            do {
              iVar21 = *piVar14;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar6) {
                *piVar14 = iVar21 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (0 < iVar21) goto LAB_0037a758;
          operator_delete(puVar11);
        } while (plVar23 != plVar19);
      }
LAB_0037a7e0:
      operator_delete__(plVar19 + -1);
      *(undefined8 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
    goto LAB_0037a7f0;
  }
  if (*(int *)(this + 4) == param_1) goto LAB_0037a7f0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (long)param_1;
  uVar18 = -(ulong)((uint)param_1 >> 0x1f) & 0xffffffe000000000 | (ulong)(uint)param_1 << 5;
  uVar2 = uVar18 + 8;
  if (SUB168(auVar7 * ZEXT816(0x20),8) != 0 || 0xfffffffffffffff7 < uVar18) {
    uVar2 = 0xffffffffffffffff;
  }
  puVar10 = operator_new__(uVar2);
  puVar20 = puVar10 + 1;
  *puVar10 = (long)param_1;
  uVar2 = (uVar18 - 0x20 >> 5) + 1;
  puVar13 = puVar20;
  if (uVar2 < 2) {
LAB_0037a5a0:
    puVar13 = puVar13 + -1;
    puVar3 = PTR_DAT_007e5de8 + 0x18;
    do {
      puVar13[2] = (ulong)puVar3;
      puVar13[1] = (ulong)puVar3;
      puVar13 = puVar13 + 4;
    } while ((ulong *)((long)puVar10 + uVar18) != puVar13);
  }
  else {
    uVar15 = uVar2 & 0xffffffffffffffe;
    puVar13 = puVar20 + uVar15 * 4;
    puVar3 = PTR_DAT_007e5de8 + 0x18;
    puVar16 = puVar10 + 5;
    uVar17 = uVar15;
    do {
      puVar16[-3] = (ulong)puVar3;
      puVar16[-4] = (ulong)puVar3;
      puVar16[1] = (ulong)puVar3;
      *puVar16 = (ulong)puVar3;
      uVar17 = uVar17 - 2;
      puVar16 = puVar16 + 8;
    } while (uVar17 != 0);
    if (uVar2 != uVar15) goto LAB_0037a5a0;
  }
  plVar19 = *(long **)(this + 8);
  if (plVar19 != (long *)0x0) {
    if (0 < iVar21) {
      lVar24 = 0;
      lVar22 = 0;
      do {
        lVar4 = (long)plVar19 + lVar22;
        FUN_0066a6a8((long)puVar10 + lVar22 + 8,lVar4);
        FUN_0066a6a8((long)puVar10 + lVar22 + 0x10,lVar4 + 8);
        lVar24 = lVar24 + 1;
        *(undefined4 *)((long)puVar10 + lVar22 + 0x20) = *(undefined4 *)(lVar4 + 0x18);
        *(undefined8 *)((long)puVar10 + lVar22 + 0x18) = *(undefined8 *)(lVar4 + 0x10);
        plVar19 = *(long **)(this + 8);
        lVar22 = lVar22 + 0x20;
      } while (lVar24 < *(int *)this);
      if (plVar19 == (long *)0x0) goto LAB_0037a700;
    }
    puVar9 = PTR_DAT_007e5de8;
    puVar3 = PTR_pthread_create_007e4e78;
    lVar24 = plVar19[-1];
    if (lVar24 != 0) {
      plVar23 = plVar19 + lVar24 * 4;
      do {
        while( true ) {
          plVar1 = plVar23 + -3;
          plVar23 = plVar23 + -4;
          puVar11 = (undefined *)(*plVar1 + -0x18);
          if (puVar11 != puVar9) {
            piVar14 = (int *)(*plVar1 + -8);
            if (puVar3 == (undefined *)0x0) {
              iVar21 = *piVar14;
              *piVar14 = iVar21 + -1;
            }
            else {
              do {
                iVar21 = *piVar14;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                if (bVar6) {
                  *piVar14 = iVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if (iVar21 < 1) {
              operator_delete(puVar11);
            }
          }
          puVar11 = (undefined *)(*plVar23 + -0x18);
          if (puVar11 != puVar9) break;
LAB_0037a670:
          if (plVar23 == plVar19) goto LAB_0037a6f8;
        }
        piVar14 = (int *)(*plVar23 + -8);
        if (puVar3 == (undefined *)0x0) {
          iVar21 = *piVar14;
          *piVar14 = iVar21 + -1;
        }
        else {
          do {
            iVar21 = *piVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar6) {
              *piVar14 = iVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (0 < iVar21) goto LAB_0037a670;
        operator_delete(puVar11);
      } while (plVar23 != plVar19);
    }
LAB_0037a6f8:
    operator_delete__(plVar19 + -1);
  }
LAB_0037a700:
  *(int *)(this + 4) = param_1;
  *(ulong **)(this + 8) = puVar20;
LAB_0037a7f0:
  if (*(long *)(lVar8 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


