/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0754
 * Function: Caver::GUIView::ResignFirstResponder
 * Signature: undefined __thiscall ResignFirstResponder(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ResignFirstResponder() */

undefined8 __thiscall Caver::GUIView::ResignFirstResponder(GUIView *this)

{
  long lVar1;
  long lVar2;
  GUIWindow *this_00;
  ulong uVar3;
  long *plVar4;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)this + 0xf0))();
  if ((lVar2 != 0) && (*(GUIView **)(lVar2 + 0x110) == this)) {
    this_00 = (GUIWindow *)(**(code **)(*(long *)this + 0xf0))(this);
    local_48 = 0;
    local_40 = (long *)0x0;
    GUIWindow::SetFirstResponder(this_00,(shared_ptr *)&local_48);
    plVar4 = local_40;
    if ((local_40 != (long *)0x0) &&
       (lVar2 = local_40[1], local_40[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar2 = plVar4[2];
      plVar4[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    plVar4 = *(long **)(this + 0x58);
    do {
      uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar4 + 200))(plVar4);
        break;
      }
      plVar4 = (long *)plVar4[0xb];
    } while (plVar4 != (long *)0x0);
  }
                    /* catch() { ... } // from try @ 005a0bfc with catch @ 005a0838
                       catch() { ... } // from try @ 005a1044 with catch @ 005a0838 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


