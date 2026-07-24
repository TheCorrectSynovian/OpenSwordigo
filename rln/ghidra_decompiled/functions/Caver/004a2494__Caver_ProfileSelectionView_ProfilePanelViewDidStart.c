/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a2494
 * Function: Caver::ProfileSelectionView::ProfilePanelViewDidStart
 * Signature: undefined __thiscall ProfilePanelViewDidStart(ProfileSelectionView * this, ProfilePanelView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionView::ProfilePanelViewDidStart(Caver::ProfilePanelView*) */

void __thiscall
Caver::ProfileSelectionView::ProfilePanelViewDidStart
          (ProfileSelectionView *this,ProfilePanelView *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_38;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004a24b4 to 005a2adf has its CatchHandler @ 004a2128 */
  puVar3 = *(undefined8 **)(this + 0xf8);
  if (puVar3 != (undefined8 *)0x0) {
    local_38 = *(undefined8 *)(param_1 + 0x168);
    pcVar5 = *(code **)*puVar3;
    local_30 = *(long **)(param_1 + 0x170);
    if (local_30 != (long *)0x0) {
      local_30[1] = local_30[1] + 1;
    }
    (*pcVar5)(puVar3,this,&local_38);
    plVar2 = local_30;
    if ((local_30 != (long *)0x0) &&
       (lVar4 = local_30[1], local_30[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_30 + 0x10))(local_30);
      lVar4 = plVar2[2];
      plVar2[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


