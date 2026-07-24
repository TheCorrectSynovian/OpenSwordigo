/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039bc24
 * Function: Caver::Model::~Model
 * Signature: undefined __thiscall ~Model(Model * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Model::~Model() */

void __thiscall Caver::Model::~Model(Model *this)

{
  void *pvVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  void *pvVar11;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  plVar10 = *(long **)(this + 0x28);
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  pvVar11 = *(void **)(this + 8);
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar11 != pvVar1) {
    do {
      plVar10 = *(long **)((long)pvVar11 + 8);
      if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar7 = plVar10[2];
        plVar10[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      pvVar11 = (void *)((long)pvVar11 + 0x10);
    } while (pvVar1 != pvVar11);
    pvVar11 = *(void **)(this + 8);
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  puVar5 = (undefined *)(*(long *)this + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)this + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


