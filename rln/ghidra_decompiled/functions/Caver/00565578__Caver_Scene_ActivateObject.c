/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00565578
 * Function: Caver::Scene::ActivateObject
 * Signature: undefined __thiscall ActivateObject(Scene * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&) */

void __thiscall Caver::Scene::ActivateObject(Scene *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 005655f0 with catch @ 00565580
                       catch() { ... } // from try @ 00565694 with catch @ 00565580 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005655ec to 006655ef has its CatchHandler @ 0056564c */
                    /* try { // try from 005655f0 to 0066566b has its CatchHandler @ 00565580 */
  if ((*(int *)(*(SceneObject **)param_1 + 0xec) != *(int *)(this + 0x310)) &&
     ((uVar3 = SceneObject::isHidden(*(SceneObject **)param_1), (uVar3 & 1) == 0 ||
      (this[10] != (Scene)0x0)))) {
    lVar5 = *(long *)param_1;
    if (*(char *)(lVar5 + 0xf0) == '\0') {
      *(undefined1 *)(lVar5 + 0xf0) = 1;
      pvVar4 = operator_new(0x18);
      lVar5 = *(long *)param_1;
      *(long *)((long)pvVar4 + 0x10) = lVar5;
      if (lVar5 != 0) {
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      }
      FUN_0062a9ac(pvVar4,this + 0x110);
      SceneObject::RegisterComponentInterfaces
                (*(SceneObject **)param_1,(ComponentManager *)(this + 0x1e0));
                    /* catch() { ... } // from try @ 005655ec with catch @ 0056564c */
      SceneObject::HandleMessage(*(SceneObject **)param_1,5,(void *)0x0);
      lVar5 = *(long *)param_1;
    }
    lVar8 = 0;
    *(undefined4 *)(lVar5 + 0xec) = *(undefined4 *)(this + 0x310);
    piVar6 = *(int **)(lVar5 + 0x28);
    if (piVar6 != (int *)0x0) goto LAB_00565680;
                    /* try { // try from 00565694 to 0066569f has its CatchHandler @ 00565580 */
    while (lVar8 < 0) {
      while( true ) {
                    /* catch() { ... } // from try @ 0056566c with catch @ 0056569c */
        lVar5 = *(long *)(*(long *)(piVar6 + 2) + lVar8 * 8);
        if (((*(char *)(lVar5 + 0x4b) != '\0') && (*(int *)(lVar5 + 0x4c) != *(int *)(this + 0x310))
            ) && (*(int *)(lVar5 + 0x4c) = *(int *)(this + 0x310), 0 < *(int *)(lVar5 + 0x38))) {
          lVar9 = 0;
          do {
            plVar7 = *(long **)(*(long *)(lVar5 + 0x40) + lVar9 * 8);
            if (plVar7 != (long *)0x0) {
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            }
            local_60 = plVar7;
                    /* try { // try from 005656f4 to 00665727 has its CatchHandler @ 005656f4
                       catch() { ... } // from try @ 005656f4 with catch @ 005656f4
                       catch() { ... } // from try @ 0056572c with catch @ 005656f4
                       catch() { ... } // from try @ 00565a60 with catch @ 005656f4
                       catch() { ... } // from try @ 00565b30 with catch @ 005656f4
                       catch() { ... } // from try @ 00565d28 with catch @ 005656f4
                       catch() { ... } // from try @ 00565dbc with catch @ 005656f4 */
            if ((*(char *)((long)plVar7 + 0xf3) != '\0') &&
               (*(int *)((long)plVar7 + 0xec) != *(int *)(this + 0x310))) {
              ActivateObject(this,(intrusive_ptr *)&local_60);
            }
            iVar1 = (int)plVar7[1] + -1;
            *(int *)(plVar7 + 1) = iVar1;
            if (iVar1 == 0) {
                    /* try { // try from 00565728 to 0066572b has its CatchHandler @ 00565ddc */
                    /* try { // try from 0056572c to 006657eb has its CatchHandler @ 005656f4 */
              (**(code **)(*plVar7 + 8))(plVar7);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar5 + 0x38));
        }
        lVar8 = lVar8 + 1;
        piVar6 = *(int **)(*(long *)param_1 + 0x28);
        if (piVar6 == (int *)0x0) break;
LAB_00565680:
        if (*piVar6 <= lVar8) goto LAB_005655bc;
      }
    }
  }
LAB_005655bc:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


