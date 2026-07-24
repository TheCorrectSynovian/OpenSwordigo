/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00591c84
 * Function: Caver::GUIAlertView::TouchBegan
 * Signature: undefined __thiscall TouchBegan(GUIAlertView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::GUIAlertView::TouchBegan(GUIAlertView *this,FWTouch *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  Vector2 aVStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0058fe24 with catch @ 00591cb0 */
  if (-1 < *(int *)(this + 0x1a8)) {
                    /* catch() { ... } // from try @ 0058fe10 with catch @ 00591cb4 */
    lVar3 = *(long *)(this + 0x130);
                    /* catch() { ... } // from try @ 0058fdbc with catch @ 00591cb8 */
    GUIView::ConvertPointFromView((Vector2 *)this,(GUIView *)(param_1 + 8));
    uVar2 = Rectangle::PointInside((Rectangle *)(lVar3 + 0x74),aVStack_40);
    if ((uVar2 & 1) != 0) {
      *(undefined8 *)(this + 0x1b0) = *(undefined8 *)param_1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0058fc94 with catch @ 00591cf8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


