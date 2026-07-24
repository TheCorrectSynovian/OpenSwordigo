/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a18f4
 * Function: Caver::GUIViewController::PresentModalViewController
 * Signature: undefined __thiscall PresentModalViewController(GUIViewController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewController::PresentModalViewController(boost::shared_ptr<Caver::GUIViewController>
   const&) */

void __thiscall
Caver::GUIViewController::PresentModalViewController(GUIViewController *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  GUIView *this_00;
  long *plVar6;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x30) != 0) {
                    /* try { // try from 005a192c to 006a1977 has its CatchHandler @ 005a21c8 */
    DismissModalViewController(this);
  }
  uVar1 = *(undefined8 *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0x38);
  *(undefined8 *)(this + 0x30) = uVar1;
  *(long *)(this + 0x38) = lVar3;
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
                    /* try { // try from 005a1978 to 006a1997 has its CatchHandler @ 005a1684 */
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar3 = *(long *)(this + 0x18);
      goto joined_r0x005a1984;
    }
  }
  lVar3 = *(long *)(this + 0x18);
joined_r0x005a1984:
  if (lVar3 == 0) {
    (**(code **)(*(long *)this + 0x18))(this);
    lVar3 = *(long *)(this + 0x18);
    plVar5 = *(long **)(this + 0x20);
  }
  else {
    plVar5 = *(long **)(this + 0x20);
  }
  if ((plVar5 != (long *)0x0) && (plVar5[1] == 0)) {
                    /* try { // try from 005a1998 to 006a199b has its CatchHandler @ 005a21c8 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* try { // try from 005a19b8 to 006a19c3 has its CatchHandler @ 005a22b4 */
                    /* try { // try from 005a19c4 to 006a19cb has its CatchHandler @ 005a2298 */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (lVar3 != 0) {
    *(GUIViewController **)(*(long *)(this + 0x30) + 0x28) = this;
    this_00 = *(GUIView **)(this + 0x18);
    if (this_00 == (GUIView *)0x0) {
      (**(code **)(*(long *)this + 0x18))(this);
      this_00 = *(GUIView **)(this + 0x18);
    }
    plVar5 = *(long **)(this + 0x20);
    if (plVar5 != (long *)0x0) {
      plVar5[1] = plVar5[1] + 1;
    }
    plVar6 = *(long **)param_1;
    local_58 = plVar6[3];
    if (local_58 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_58 = plVar6[3];
    }
    local_50 = (long *)plVar6[4];
    if (local_50 != (long *)0x0) {
      local_50[1] = local_50[1] + 1;
    }
    GUIView::PresentModalView(this_00,(shared_ptr *)&local_58,true);
    plVar6 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 005a1ab0 to 006a1ab7 has its CatchHandler @ 005a21d8 */
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar3 = plVar6[2];
      plVar6[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
                    /* try { // try from 005a1ad8 to 006a1aff has its CatchHandler @ 005a21d4 */
    if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* try { // try from 005a1b10 to 006a1b1b has its CatchHandler @ 005a21c8 */
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
                    /* try { // try from 005a1b1c to 006a1b23 has its CatchHandler @ 005a20cc */
                    /* try { // try from 005a1b24 to 006a1b8b has its CatchHandler @ 005a21c8 */
    (**(code **)(**(long **)param_1 + 0x38))();
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


