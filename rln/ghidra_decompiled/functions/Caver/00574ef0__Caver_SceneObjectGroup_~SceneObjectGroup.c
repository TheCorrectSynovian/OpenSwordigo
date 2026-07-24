/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00574ef0
 * Function: Caver::SceneObjectGroup::~SceneObjectGroup
 * Signature: undefined __thiscall ~SceneObjectGroup(SceneObjectGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::~SceneObjectGroup() */

void __thiscall Caver::SceneObjectGroup::~SceneObjectGroup(SceneObjectGroup *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00574f0c to 00674f17 has its CatchHandler @ 005750b4 */
  puVar4 = PTR_vtable_007e7568 + 0x60;
  *(undefined **)this = PTR_vtable_007e7568 + 0x10;
  *(undefined **)(this + 0x10) = puVar4;
                    /* try { // try from 00574f34 to 00674f5b has its CatchHandler @ 00575138 */
  if (0 < *(int *)(this + 0x38)) {
    lVar8 = 0;
    do {
      SceneObject::RemoveGroup(*(SceneObject **)(*(long *)(this + 0x40) + lVar8 * 8),this);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(this + 0x38));
  }
  *(undefined4 *)(this + 0x38) = 0;
  if (*(void **)(this + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x40));
  }
  plVar9 = *(long **)(this + 0x30);
                    /* try { // try from 00574f74 to 00674f9b has its CatchHandler @ 00575134 */
  if ((plVar9 != (long *)0x0) && (lVar8 = plVar9[1], plVar9[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar8 = plVar9[2];
    plVar9[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  puVar4 = (undefined *)(*(long *)(this + 0x20) + -0x18);
  if (puVar4 != PTR_DAT_007e5de8) {
    piVar6 = (int *)(*(long *)(this + 0x20) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(puVar4);
    }
  }
                    /* try { // try from 00574fd4 to 0067500f has its CatchHandler @ 00575280 */
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


