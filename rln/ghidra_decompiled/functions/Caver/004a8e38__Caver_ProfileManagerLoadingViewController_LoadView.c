/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a8e38
 * Function: Caver::ProfileManagerLoadingViewController::LoadView
 * Signature: undefined __thiscall LoadView(ProfileManagerLoadingViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManagerLoadingViewController::LoadView() */

void __thiscall
Caver::ProfileManagerLoadingViewController::LoadView(ProfileManagerLoadingViewController *this)

{
  undefined8 uVar1;
  long lVar2;
  ProfileManagerLoadingView *this_00;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 004a7ff0 with catch @ 004a8e5c */
  this_00 = operator_new(0x120);
  ProfileManagerLoadingView::ProfileManagerLoadingView(this_00);
  boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>
            ((shared_ptr<Caver::ProfileManagerLoadingView> *)&local_48,this_00);
  uVar1 = *(undefined8 *)(this + 0x50);
  plVar3 = *(long **)(this + 0x58);
  *(undefined8 *)(this + 0x50) = local_48;
  *(long **)(this + 0x58) = local_40;
  local_48 = uVar1;
  local_40 = plVar3;
  if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004a7fd0 with catch @ 004a8eb0 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  lVar5 = *(long *)(this + 0x50);
  if (*(int *)(lVar5 + 0x70) != 0x12) {
    plVar3 = *(long **)(lVar5 + 0x58);
    *(undefined4 *)(lVar5 + 0x70) = 0x12;
    if ((plVar3 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar3 + 0x8c))) {
                    /* catch() { ... } // from try @ 004a7fc4 with catch @ 004a8f0c */
      (**(code **)(*plVar3 + 0x58))();
      lVar5 = *(long *)(this + 0x50);
    }
  }
  plVar3 = *(long **)(this + 0x58);
  if (plVar3 != (long *)0x0) {
    plVar3[1] = plVar3[1] + 2;
  }
  plVar6 = *(long **)(this + 0x20);
  *(long *)(this + 0x18) = lVar5;
  *(long **)(this + 0x20) = plVar3;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  puVar4 = *(undefined8 **)(this + 0x40);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,this);
  }
  if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = plVar3[2];
                    /* catch() { ... } // from try @ 004a7fb0 with catch @ 004a8fbc */
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 004a7f88 with catch @ 004a8fc4 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


