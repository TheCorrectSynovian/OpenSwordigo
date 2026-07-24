/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00591d10
 * Function: Caver::GUIAlertView::TouchEnded
 * Signature: undefined __thiscall TouchEnded(GUIAlertView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::GUIAlertView::TouchEnded(GUIAlertView *this,FWTouch *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  Vector2 aVStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x1b0) == *(long *)param_1) {
    lVar4 = *(long *)(this + 0x130);
                    /* catch() { ... } // from try @ 0058fc80 with catch @ 00591d5c */
    GUIView::ConvertPointFromView((Vector2 *)this,(GUIView *)(param_1 + 8));
                    /* catch() { ... } // from try @ 0058fc54 with catch @ 00591d60 */
    uVar2 = Rectangle::PointInside((Rectangle *)(lVar4 + 0x74),aVStack_40);
    if (((uVar2 & 1) != 0) && (puVar3 = *(undefined8 **)(this + 0x118), puVar3 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar3)(puVar3,this,*(undefined4 *)(this + 0x1a8));
    }
    *(undefined8 *)(this + 0x1b0) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


