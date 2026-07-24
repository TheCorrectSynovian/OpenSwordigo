/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003759b8
 * Function: Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector
 * Signature: undefined __thiscall ~FastVector(FastVector<Caver::ItemDropComponent::ItemDropEntry> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector() */

void __thiscall
Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector
          (FastVector<Caver::ItemDropComponent::ItemDropEntry> *this)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR_pthread_create_007e4e78;
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  plVar12 = *(long **)(this + 8);
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[-1];
    if (lVar9 != 0) {
      plVar13 = plVar12 + lVar9 * 4;
      do {
        while( true ) {
          plVar1 = plVar13 + -3;
          plVar13 = plVar13 + -4;
          puVar7 = (undefined *)(*plVar1 + -0x18);
          if (puVar7 != puVar6) {
            piVar10 = (int *)(*plVar1 + -8);
            if (puVar5 == (undefined *)0x0) {
              iVar11 = *piVar10;
              *piVar10 = iVar11 + -1;
            }
            else {
              do {
                iVar11 = *piVar10;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar3) {
                  *piVar10 = iVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar11 < 1) {
              operator_delete(puVar7);
            }
          }
          puVar7 = (undefined *)(*plVar13 + -0x18);
          if (puVar7 != puVar6) break;
LAB_00375a28:
          if (plVar13 == plVar12) goto LAB_00375ab0;
        }
        piVar10 = (int *)(*plVar13 + -8);
        if (puVar5 == (undefined *)0x0) {
          iVar11 = *piVar10;
          *piVar10 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *piVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (0 < iVar11) goto LAB_00375a28;
        operator_delete(puVar7);
      } while (plVar13 != plVar12);
    }
LAB_00375ab0:
    operator_delete__(plVar12 + -1);
  }
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


