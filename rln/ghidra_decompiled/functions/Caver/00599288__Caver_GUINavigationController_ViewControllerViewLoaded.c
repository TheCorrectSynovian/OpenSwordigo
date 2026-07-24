/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00599288
 * Function: Caver::GUINavigationController::ViewControllerViewLoaded
 * Signature: undefined __thiscall ViewControllerViewLoaded(GUINavigationController * this, GUIViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUINavigationController::ViewControllerViewLoaded(Caver::GUIViewController*) */

void __thiscall
Caver::GUINavigationController::ViewControllerViewLoaded
          (GUINavigationController *this,GUIViewController *param_1)

{
  long lVar1;
  long *plVar2;
  GUIView *this_00;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 auStack_68 [8];
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 0059928c to 006992b3 has its CatchHandler @ 00599b94 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005992b4 to 006992bb has its CatchHandler @ 0059a448 */
                    /* try { // try from 005992bc to 006992cf has its CatchHandler @ 0059a010 */
  if (*(GUIViewController **)(this + 0x50) == param_1) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
                    /* try { // try from 005992fc to 0069930b has its CatchHandler @ 0059a544 */
      (**(code **)(*(long *)param_1 + 0x18))(param_1);
      lVar3 = *(long *)(param_1 + 0x18);
    }
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 != (long *)0x0) {
      plVar5[1] = plVar5[1] + 1;
    }
    if (*(int *)(lVar3 + 0x70) != 0x12) {
      plVar2 = *(long **)(lVar3 + 0x58);
      *(undefined4 *)(lVar3 + 0x70) = 0x12;
                    /* try { // try from 00599344 to 0069936b has its CatchHandler @ 00599b44 */
      if ((plVar2 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar2 + 0x8c))) {
        (**(code **)(*plVar2 + 0x58))();
      }
    }
    if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* try { // try from 0059938c to 006993b3 has its CatchHandler @ 0059a544 */
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    plVar5 = *(long **)(this + 0x18);
    if (plVar5 == (long *)0x0) {
      (**(code **)(*(long *)this + 0x18))(this);
      plVar5 = *(long **)(this + 0x18);
    }
    plVar2 = *(long **)(this + 0x20);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    local_58 = *(long *)(param_1 + 0x18);
    pcVar6 = *(code **)(*plVar5 + 0x70);
                    /* try { // try from 005993d4 to 006993d7 has its CatchHandler @ 00599b30 */
    if (local_58 == 0) {
      (**(code **)(*(long *)param_1 + 0x18))(param_1);
      local_58 = *(long *)(param_1 + 0x18);
    }
    local_50 = *(long **)(param_1 + 0x20);
                    /* try { // try from 005993f8 to 006993fb has its CatchHandler @ 00599b2c */
    if (local_50 != (long *)0x0) {
                    /* try { // try from 00599400 to 0069940b has its CatchHandler @ 0059a814 */
      local_50[1] = local_50[1] + 1;
    }
                    /* try { // try from 00599410 to 00699417 has its CatchHandler @ 00599fac */
    (*pcVar6)(plVar5,0,&local_58);
    plVar5 = local_50;
                    /* try { // try from 00599418 to 0069942b has its CatchHandler @ 00599fa8 */
                    /* try { // try from 0059942c to 0069943f has its CatchHandler @ 0059a3e0 */
    if ((local_50 != (long *)0x0) &&
       (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
                    /* try { // try from 00599440 to 0069944f has its CatchHandler @ 00599f78 */
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
                    /* try { // try from 00599470 to 00699473 has its CatchHandler @ 0059a3e0 */
    if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar3 = plVar2[2];
                    /* try { // try from 00599488 to 0069949b has its CatchHandler @ 00599f74 */
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* try { // try from 0059949c to 006994a7 has its CatchHandler @ 00599f14 */
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    (**(code **)(*(long *)param_1 + 0x38))(param_1);
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 == (long *)0x0) {
      (**(code **)(*(long *)param_1 + 0x18))(param_1);
      plVar5 = *(long **)(param_1 + 0x18);
    }
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 005994e0 to 006994e7 has its CatchHandler @ 00599f10 */
      plVar2[1] = plVar2[1] + 1;
    }
                    /* try { // try from 005994ec to 006994f3 has its CatchHandler @ 0059a814 */
    lVar3 = (**(code **)(*plVar5 + 0xf0))();
                    /* try { // try from 005994f4 to 006994ff has its CatchHandler @ 0059a824 */
    if ((plVar2 != (long *)0x0) && (lVar4 = plVar2[1], plVar2[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar4 = plVar2[2];
      plVar2[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if (lVar3 != 0) {
      this_00 = *(GUIView **)(param_1 + 0x18);
      if (this_00 == (GUIView *)0x0) {
                    /* try { // try from 00599548 to 00699577 has its CatchHandler @ 00599de0 */
        (**(code **)(*(long *)param_1 + 0x18))(param_1);
        this_00 = *(GUIView **)(param_1 + 0x18);
      }
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 != (long *)0x0) {
        plVar5[1] = plVar5[1] + 1;
      }
      GUIView::FindAndSetSubviewFirstResponder(this_00);
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar3 = plVar5[2];
                    /* try { // try from 00599598 to 006995bf has its CatchHandler @ 0059a824 */
        plVar5[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
    }
    if (*(long **)(this + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x60) + 0x138))(auStack_68);
      if ((local_60 != (long *)0x0) &&
         (lVar3 = local_60[1], local_60[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar3 = local_60[2];
        local_60[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
                    /* try { // try from 00599608 to 0069961b has its CatchHandler @ 00599ed0 */
          (**(code **)(*local_60 + 0x18))(local_60);
        }
      }
      plVar5 = *(long **)(this + 0x68);
      *(undefined8 *)(this + 0x60) = 0;
      *(undefined8 *)(this + 0x68) = 0;
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 0059963c to 00699647 has its CatchHandler @ 00599b20 */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005992d0 to 006992e3 has its CatchHandler @ 00599fb0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


