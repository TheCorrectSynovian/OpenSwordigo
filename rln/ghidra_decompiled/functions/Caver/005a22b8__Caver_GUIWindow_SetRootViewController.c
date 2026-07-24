/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a22b8
 * Function: Caver::GUIWindow::SetRootViewController
 * Signature: undefined __thiscall SetRootViewController(GUIWindow * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::SetRootViewController(boost::shared_ptr<Caver::GUIViewController> const&) */

void __thiscall Caver::GUIWindow::SetRootViewController(GUIWindow *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005a22d8 to 006a22ff has its CatchHandler @ 005a2370 */
  plVar4 = *(long **)(this + 0x100);
  if (plVar4 != (long *)0x0) {
    lVar7 = plVar4[3];
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar7 = plVar4[3];
      plVar4 = (long *)plVar4[4];
    }
    else {
      plVar4 = (long *)plVar4[4];
    }
    if ((plVar4 != (long *)0x0) && (plVar4[1] == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* try { // try from 005a232c to 006a2353 has its CatchHandler @ 005a237c */
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if (lVar7 != 0) {
      plVar5 = *(long **)(this + 0x100);
      plVar4 = (long *)plVar5[3];
      if (plVar4 == (long *)0x0) {
                    /* catch() { ... } // from try @ 005a200c with catch @ 005a2370
                       catch() { ... } // from try @ 005a21fc with catch @ 005a2370
                       catch() { ... } // from try @ 005a22d8 with catch @ 005a2370 */
        (**(code **)(*plVar5 + 0x18))(plVar5);
        plVar4 = (long *)plVar5[3];
      }
                    /* catch() { ... } // from try @ 005a232c with catch @ 005a237c */
      plVar5 = (long *)plVar5[4];
      if (plVar5 != (long *)0x0) {
        plVar5[1] = plVar5[1] + 1;
      }
      (**(code **)(*plVar4 + 0x78))();
      if ((plVar5 != (long *)0x0) && (lVar7 = plVar5[1], plVar5[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar7 = plVar5[2];
        plVar5[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
          uVar1 = *(undefined8 *)param_1;
          lVar7 = *(long *)(param_1 + 8);
          goto joined_r0x005a23d4;
        }
      }
    }
  }
  uVar1 = *(undefined8 *)param_1;
  lVar7 = *(long *)(param_1 + 8);
joined_r0x005a23d4:
  if (lVar7 != 0) {
    *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
  }
  plVar4 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(long *)(this + 0x108) = lVar7;
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x100);
  lVar7 = plVar4[3];
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
                    /* catch() { ... } // from try @ 005a24f0 with catch @ 005a2494
                       catch() { ... } // from try @ 005a25a8 with catch @ 005a2494 */
    lVar7 = plVar4[3];
    plVar4 = (long *)plVar4[4];
  }
  else {
    plVar4 = (long *)plVar4[4];
  }
  if ((plVar4 != (long *)0x0) && (plVar4[1] == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if (lVar7 != 0) {
    plVar4 = *(long **)(this + 0x100);
    local_58 = plVar4[3];
    pcVar6 = *(code **)(*(long *)this + 0x60);
    if (local_58 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_58 = plVar4[3];
    }
    local_50 = (long *)plVar4[4];
    if (local_50 != (long *)0x0) {
                    /* try { // try from 005a24e4 to 006a24ef has its CatchHandler @ 005a255c */
      local_50[1] = local_50[1] + 1;
    }
                    /* try { // try from 005a24f0 to 006a257f has its CatchHandler @ 005a2494 */
    (*pcVar6)(this,&local_58);
    plVar4 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar7 = local_50[1], local_50[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar7 = plVar4[2];
      plVar4[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005a2580 to 006a25a7 has its CatchHandler @ 005a25b0 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005a24e4 with catch @ 005a255c */
  return;
}


