/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d47f4
 * Function: Caver::GameOverlayView::SetCurrentSkill
 * Signature: undefined __thiscall SetCurrentSkill(GameOverlayView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::SetCurrentSkill(boost::shared_ptr<Caver::Skill> const&) */

void __thiscall Caver::GameOverlayView::SetCurrentSkill(GameOverlayView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  GUIButton *this_00;
  long local_50;
  long *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)param_1;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  }
  plVar9 = *(long **)(this + 0x1b0);
  *(undefined8 *)(this + 0x1a8) = uVar1;
  *(long *)(this + 0x1b0) = lVar6;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004d4864 with catch @ 004d4850 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
                    /* try { // try from 004d4860 to 005d4863 has its CatchHandler @ 004d4874 */
    plVar9[2] = lVar6 + -1;
                    /* try { // try from 004d4864 to 005d4887 has its CatchHandler @ 004d4850 */
    if (lVar6 + -1 == 0) {
                    /* catch() { ... } // from try @ 004d4860 with catch @ 004d4874 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  this_00 = *(GUIButton **)(this + 400);
  if (*(long *)(this + 0x1a8) == 0) {
    local_48[0] = (long *)0x0;
    GUIButton::SetImage(this_00,(intrusive_ptr *)local_48);
    if ((local_48[0] != (long *)0x0) &&
       (iVar8 = (int)local_48[0][1] + -1, *(int *)(local_48[0] + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*local_48[0] + 8))();
    }
  }
  else {
    FUN_0066a528(&local_50);
    FUN_0035a030(local_48,"ui_skill_",&local_50);
    GUIButton::SetImage(this_00,(string *)local_48);
    puVar4 = PTR_DAT_007e5de8;
    if (local_48[0] + -3 != (long *)PTR_DAT_007e5de8) {
      plVar9 = local_48[0] + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = (int)*plVar9;
        *(int *)plVar9 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = (int)*plVar9;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_48[0] + -3);
      }
    }
    if ((undefined *)(local_50 + -0x18) != puVar4) {
      piVar7 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar5) {
            *piVar7 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
  }
  if (this[0x1a0] == (GameOverlayView)0x0) {
    bVar5 = *(long *)(this + 0x1a8) == 0;
  }
  else {
    bVar5 = true;
  }
  *(bool *)(*(long *)(this + 400) + 0xe4) = bVar5;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


