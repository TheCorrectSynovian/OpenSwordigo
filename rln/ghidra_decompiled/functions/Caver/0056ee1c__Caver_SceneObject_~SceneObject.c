/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056ee1c
 * Function: Caver::SceneObject::~SceneObject
 * Signature: undefined __thiscall ~SceneObject(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::~SceneObject() */

void __thiscall Caver::SceneObject::~SceneObject(SceneObject *this)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  void *pvVar11;
  long *plVar12;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  puVar6 = PTR_vtable_007e56a0 + 0x70;
  *(undefined **)this = PTR_vtable_007e56a0 + 0x10;
  *(undefined **)(this + 0x10) = puVar6;
  RemoveFromAllGroups(this,false);
  SceneGridEntry::~SceneGridEntry((SceneGridEntry *)(this + 0xf8));
  if (*(void **)(this + 0xe0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xe0));
  }
                    /* catch() { ... } // from try @ 0056eb84 with catch @ 0056ee74 */
  plVar12 = *(long **)(this + 0xc0);
  plVar1 = *(long **)(this + 200);
                    /* catch() { ... } // from try @ 0056eb00 with catch @ 0056ee78 */
  if (plVar12 != plVar1) {
    do {
      plVar5 = (long *)*plVar12;
                    /* catch() { ... } // from try @ 0056ecd8 with catch @ 0056ee88 */
      if ((plVar5 != (long *)0x0) &&
         (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar12 = plVar12 + 1;
    } while (plVar1 != plVar12);
    plVar12 = *(long **)(this + 0xc0);
  }
  if (plVar12 != (long *)0x0) {
    operator_delete(plVar12);
  }
  plVar12 = *(long **)(this + 0x60);
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
                    /* catch() { ... } // from try @ 0056ecc0 with catch @ 0056eef0 */
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
                    /* try { // try from 0056ef10 to 0066f083 has its CatchHandler @ 0056f150 */
  puVar6 = (undefined *)(*(long *)(this + 0x50) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar9 = (int *)(*(long *)(this + 0x50) + -8);
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
      plVar12 = *(long **)(this + 0x48);
      goto joined_r0x0056efec;
    }
  }
  plVar12 = *(long **)(this + 0x48);
joined_r0x0056efec:
  if ((plVar12 != (long *)0x0) &&
     (iVar10 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar10, iVar10 == 0)) {
                    /* catch() { ... } // from try @ 0056ec4c with catch @ 0056ef3c */
    (**(code **)(*plVar12 + 8))();
  }
  plVar12 = *(long **)(this + 0x38);
  if ((plVar12 != (long *)0x0) &&
     (iVar10 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar12 + 8))();
  }
  pvVar11 = *(void **)(this + 0x28);
  if (pvVar11 != (void *)0x0) {
    if (*(void **)((long)pvVar11 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar11 + 8));
    }
    operator_delete(pvVar11);
  }
  if (*(long *)(lVar4 + 0x28) == lVar7) {
                    /* catch() { ... } // from try @ 0056ec34 with catch @ 0056efa4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


