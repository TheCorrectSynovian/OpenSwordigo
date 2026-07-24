/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cd798
 * Function: Caver::DraggableOverlayItem::TouchMoved
 * Signature: undefined __thiscall TouchMoved(DraggableOverlayItem * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DraggableOverlayItem::TouchMoved(Caver::FWTouch const&) */

void __thiscall Caver::DraggableOverlayItem::TouchMoved(DraggableOverlayItem *this,FWTouch *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)param_1 == *(long *)(this + 0x260)) {
    FWTouch::LocationInView(param_1,(GUIView *)this);
    local_48 = CONCAT44((float)((ulong)local_50 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(this + 0x268) >> 0x20),
                        (float)local_50 - (float)*(undefined8 *)(this + 0x268));
    GUIView::ConvertPointToView((Vector2 *)this,(GUIView *)&local_48);
    uStack_30 = *(undefined8 *)(this + 0x7c);
    local_38 = local_40;
    GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_38);
    puVar2 = *(undefined8 **)(this + 0xf0);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


