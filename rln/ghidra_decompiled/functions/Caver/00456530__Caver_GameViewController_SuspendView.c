/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00456530
 * Function: Caver::GameViewController::SuspendView
 * Signature: undefined __thiscall SuspendView(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::SuspendView() */

void __thiscall Caver::GameViewController::SuspendView(GameViewController *this)

{
  long lVar1;
  bool bVar2;
  PauseViewController *this_00;
  GUIWindow *this_01;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 004562f4 with catch @ 00456530 */
                    /* catch() { ... } // from try @ 004562d0 with catch @ 00456534 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0xe9] != (GameViewController)0x0) {
    lVar3 = *(long *)(this + 0x18);
    if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 004562b8 with catch @ 0045656c */
                    /* catch() { ... } // from try @ 00456294 with catch @ 00456570 */
      (**(code **)(*(long *)this + 0x18))(this);
      lVar3 = *(long *)(this + 0x18);
    }
    plVar5 = *(long **)(this + 0x20);
    if (plVar5 != (long *)0x0) {
      plVar5[1] = plVar5[1] + 1;
    }
    if (lVar3 == 0) {
      bVar2 = false;
    }
    else {
      plVar6 = *(long **)(this + 0x38);
      if (plVar6 == (long *)0x0) {
                    /* catch() { ... } // from try @ 004561d4 with catch @ 00456630 */
        bVar2 = *(long *)(this + 0x30) == 0;
      }
      else {
        bVar2 = *(long *)(this + 0x30) == 0;
                    /* catch() { ... } // from try @ 0045627c with catch @ 004565a8 */
        if (plVar6[1] == 0) {
                    /* catch() { ... } // from try @ 00456254 with catch @ 004565ac */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          lVar3 = plVar6[2];
          plVar6[2] = lVar3 + -1;
          if (lVar3 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
      }
    }
                    /* catch() { ... } // from try @ 00456240 with catch @ 004565e4 */
                    /* catch() { ... } // from try @ 00456218 with catch @ 004565e8 */
    if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 00456204 with catch @ 00456620 */
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    if (bVar2) {
      if ((*(char *)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0xe4) == '\0') &&
         (*(char *)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x1a0) == '\0')) {
        SaveGameState(this,true);
      }
      this_00 = operator_new(0x60);
      PauseViewController::PauseViewController(this_00);
      boost::shared_ptr<Caver::PauseViewController>::shared_ptr<Caver::PauseViewController>
                ((shared_ptr<Caver::PauseViewController> *)&local_58,this_00);
      pcVar4 = *(code **)(*(long *)this + 0x50);
      local_68 = local_58;
      local_60 = local_50;
      if (local_50 != (long *)0x0) {
        local_50[1] = local_50[1] + 1;
      }
                    /* catch() { ... } // from try @ 004561c0 with catch @ 004566a4 */
      (*pcVar4)(this,&local_68);
      plVar5 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar3 = local_60[1], local_60[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 004566c8 to 0055688b has its CatchHandler @ 00456894 */
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      plVar5 = (long *)local_58[3];
      if (plVar5 == (long *)0x0) {
        (**(code **)(*local_58 + 0x18))(local_58);
        plVar5 = (long *)local_58[3];
      }
      plVar6 = (long *)local_58[4];
      if (plVar6 != (long *)0x0) {
        plVar6[1] = plVar6[1] + 1;
      }
      this_01 = (GUIWindow *)(**(code **)(*plVar5 + 0xf0))();
      GUIWindow::UpdateModalFade(this_01,false,0.0);
      if ((plVar6 != (long *)0x0) && (lVar3 = plVar6[1], plVar6[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        lVar3 = plVar6[2];
        plVar6[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
      if ((local_50 != (long *)0x0) &&
         (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*local_50 + 0x10))(local_50);
        lVar3 = local_50[2];
        local_50[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*local_50 + 0x18))(local_50);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


