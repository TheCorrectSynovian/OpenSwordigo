/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a05c8
 * Function: Caver::GUIView::BecomeFirstResponder
 * Signature: undefined __thiscall BecomeFirstResponder(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::BecomeFirstResponder() */

undefined8 __thiscall Caver::GUIView::BecomeFirstResponder(GUIView *this)

{
  long lVar1;
  GUIWindow *this_00;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  long *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (GUIWindow *)(**(code **)(*(long *)this + 0xf0))();
  plVar3 = *(long **)(this + 0x10);
  if ((plVar3 == (long *)0x0) || (plVar3[1] == 0)) {
    local_40 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_40);
  }
  else {
    local_50 = *(undefined8 *)(this + 8);
    lVar2 = plVar3[1] + 1;
    plVar3[1] = lVar2;
    local_48 = plVar3;
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    GUIWindow::SetFirstResponder(this_00,(shared_ptr *)&local_50);
    plVar3 = local_48;
    if ((local_48 != (long *)0x0) &&
       (lVar2 = local_48[1], local_48[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


