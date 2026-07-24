/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596ffc
 * Function: Caver::GUIDraggableItem::TouchEnded
 * Signature: undefined __thiscall TouchEnded(GUIDraggableItem * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIDraggableItem::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::GUIDraggableItem::TouchEnded(GUIDraggableItem *this,FWTouch *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FWTouch::LocationInView(param_1,*(GUIView **)(this + 0x58));
  local_30 = *(undefined8 *)(this + 0x8c);
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) +
                      (float)((ulong)local_40 >> 0x20),
                      (float)*(undefined8 *)(this + 0x84) + (float)local_40);
                    /* catch() { ... } // from try @ 00596ea0 with catch @ 00597048 */
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_38);
  plVar2 = *(long **)(this + 0xf0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0xb0))(plVar2,this);
  }
  (**(code **)(*(long *)this + 0x78))(this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


