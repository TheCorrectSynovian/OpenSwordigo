/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8f94
 * Function: Caver::Mesh::~Mesh
 * Signature: undefined __thiscall ~Mesh(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Mesh::~Mesh() */

void __thiscall Caver::Mesh::~Mesh(Mesh *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (*(void **)(this + 0x128) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x128));
  }
  if (*(void **)(this + 0x120) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x120));
  }
  if (*(void **)(this + 0x110) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x110));
  }
  plVar4 = *(long **)(this + 0x100);
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[2], plVar4[2] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x18))();
  }
  plVar4 = *(long **)(this + 0xf0);
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  puVar5 = (undefined *)(*(long *)(this + 0xe0) + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)(this + 0xe0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar5);
      plVar4 = *(long **)(this + 0xd8);
      goto joined_r0x003b90f8;
    }
  }
  plVar4 = *(long **)(this + 0xd8);
joined_r0x003b90f8:
  if ((plVar4 != (long *)0x0) &&
     (iVar9 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


