/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cd734
 * Function: Caver::DraggableOverlayItem::TouchBegan
 * Signature: undefined __thiscall TouchBegan(DraggableOverlayItem * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DraggableOverlayItem::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::DraggableOverlayItem::TouchBegan(DraggableOverlayItem *this,FWTouch *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x260) = *(undefined8 *)param_1;
  FWTouch::LocationInView(param_1,(GUIView *)this);
  *(undefined8 *)(this + 0x268) = local_30;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


