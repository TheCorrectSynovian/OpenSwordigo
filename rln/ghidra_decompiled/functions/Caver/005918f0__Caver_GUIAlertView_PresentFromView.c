/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005918f0
 * Function: Caver::GUIAlertView::PresentFromView
 * Signature: undefined __thiscall PresentFromView(GUIAlertView * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIAlertView::PresentFromView(Caver::GUIView*) */

void __thiscall Caver::GUIAlertView::PresentFromView(GUIAlertView *this,GUIView *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *local_50;
  long *plStack_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005905b0 with catch @ 00591918
                       catch() { ... } // from try @ 00590644 with catch @ 00591918 */
                    /* catch() { ... } // from try @ 0059030c with catch @ 0059191c */
  plStack_48 = (long *)_UNK_00696ca8;
  local_50 = _DAT_00696ca0;
  (**(code **)(*(long *)this + 0xf8))(this,&local_50);
  UpdateLayout(this);
  (**(code **)(*(long *)param_1 + 0xf0))(param_1);
                    /* catch() { ... } // from try @ 0058fa7c with catch @ 0059196c */
                    /* catch() { ... } // from try @ 0058f794 with catch @ 005919bc */
  Vector2::Rounded();
  plStack_48 = *(long **)(this + 0x7c);
  local_50 = local_40;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_50);
  plVar3 = *(long **)(this + 0x10);
  if ((plVar3 == (long *)0x0) || (plVar3[1] == 0)) {
                    /* catch() { ... } // from try @ 00590268 with catch @ 00591ac8 */
    local_40 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_40);
  }
  else {
    local_50 = *(undefined **)(this + 8);
    lVar2 = plVar3[1] + 1;
    plVar3[1] = lVar2;
    plStack_48 = plVar3;
                    /* catch() { ... } // from try @ 005904bc with catch @ 00591a0c */
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    GUIView::PresentModalView(param_1,(shared_ptr *)&local_50,false);
    plVar3 = plStack_48;
                    /* catch() { ... } // from try @ 00590480 with catch @ 00591a5c */
                    /* catch() { ... } // from try @ 00590430 with catch @ 00591a60 */
    if ((plStack_48 != (long *)0x0) &&
       (lVar2 = plStack_48[1], plStack_48[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    AddAnimations(this,false);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0059041c with catch @ 00591ac4 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


