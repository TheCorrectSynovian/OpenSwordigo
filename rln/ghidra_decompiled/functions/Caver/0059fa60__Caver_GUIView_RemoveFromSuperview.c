/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059fa60
 * Function: Caver::GUIView::RemoveFromSuperview
 * Signature: undefined __thiscall RemoveFromSuperview(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::RemoveFromSuperview() */

void __thiscall Caver::GUIView::RemoveFromSuperview(GUIView *this)

{
  long lVar1;
  GUIWindow *this_00;
  ulong uVar2;
  GUIView *pGVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x58) == 0) goto LAB_0059fb60;
  this_00 = (GUIWindow *)(**(code **)(*(long *)this + 0xf0))(this);
  if (this_00 != (GUIWindow *)0x0) {
    for (pGVar3 = *(GUIView **)(this_00 + 0x110); pGVar3 != (GUIView *)0x0;
        pGVar3 = *(GUIView **)(pGVar3 + 0x58)) {
      if (pGVar3 == this) {
        local_48 = 0;
        local_40 = (long *)0x0;
        GUIWindow::SetFirstResponder(this_00,(shared_ptr *)&local_48);
        plVar5 = local_40;
        if ((local_40 != (long *)0x0) &&
           (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0059fa10 with catch @ 0059fae4 */
          (**(code **)(*local_40 + 0x10))(local_40);
          lVar4 = plVar5[2];
          plVar5[2] = lVar4 + -1;
          if (lVar4 + -1 == 0) {
                    /* try { // try from 0059fb08 to 0069fb2f has its CatchHandler @ 0059fb34 */
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
        plVar5 = *(long **)(this + 0x58);
        goto LAB_0059fb14;
      }
    }
  }
  goto LAB_0059fb44;
  while (plVar5 = (long *)plVar5[0xb], plVar5 != (long *)0x0) {
LAB_0059fb14:
    uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 0059fb08 with catch @ 0059fb34 */
                    /* catch() { ... } // from try @ 0059f97c with catch @ 0059fb38 */
      (**(code **)(*plVar5 + 200))(plVar5);
      break;
    }
  }
LAB_0059fb44:
                    /* catch() { ... } // from try @ 005a0094 with catch @ 0059fb4c
                       catch() { ... } // from try @ 005a04b0 with catch @ 0059fb4c */
  this[0x50] = (GUIView)0x1;
  *(undefined8 *)(this + 0x58) = 0;
  (**(code **)(*(long *)this + 0x80))(this);
LAB_0059fb60:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0059fb7c to 0069fb8f has its CatchHandler @ 005a0520 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


