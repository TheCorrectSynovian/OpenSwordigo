/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bd700
 * Function: Caver::MapZone::~MapZone
 * Signature: undefined __thiscall ~MapZone(MapZone * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapZone::~MapZone() */

void __thiscall Caver::MapZone::~MapZone(MapZone *this)

{
  void *pvVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  void *pvVar11;
  long *plVar12;
  
  puVar5 = PTR_DAT_007e5de8;
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  puVar6 = (undefined *)(*(long *)(this + 0x30) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar9 = (int *)(*(long *)(this + 0x30) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  pvVar11 = *(void **)(this + 0x10);
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar11 != pvVar1) {
    do {
      plVar12 = *(long **)((long)pvVar11 + 8);
      if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)
         ) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar8 = plVar12[2];
        plVar12[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      pvVar11 = (void *)((long)pvVar11 + 0x10);
    } while (pvVar1 != pvVar11);
    pvVar11 = *(void **)(this + 0x10);
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  puVar6 = (undefined *)(*(long *)(this + 8) + -0x18);
  if (puVar6 != puVar5) {
    piVar9 = (int *)(*(long *)(this + 8) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  puVar6 = (undefined *)(*(long *)this + -0x18);
  if (puVar6 != puVar5) {
    piVar9 = (int *)(*(long *)this + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


