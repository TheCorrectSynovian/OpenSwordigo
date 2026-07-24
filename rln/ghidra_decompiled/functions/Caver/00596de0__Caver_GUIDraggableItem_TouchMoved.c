/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596de0
 * Function: Caver::GUIDraggableItem::TouchMoved
 * Signature: undefined __thiscall TouchMoved(GUIDraggableItem * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIDraggableItem::TouchMoved(Caver::FWTouch const&) */

void __thiscall Caver::GUIDraggableItem::TouchMoved(GUIDraggableItem *this,FWTouch *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 local_58;
  undefined1 local_50 [8];
  long *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GUIView::BringSubviewToFront(*(GUIView **)(this + 0x58),(GUIView *)this);
  FWTouch::LocationInView(param_1,*(GUIView **)(this + 0x58));
  local_40 = *(long **)(this + 0x8c);
  local_48 = (long *)CONCAT44((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) + local_50._4_4_,
                              (float)*(undefined8 *)(this + 0x84) + local_50._0_4_);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_48);
  plVar3 = *(long **)(this + 0x58);
  if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0xe8);
    local_58 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(this + 0x8c) >> 0x20) * 0.5,
                        (float)*(undefined8 *)(this + 0x84) +
                        (float)*(undefined8 *)(this + 0x8c) * 0.5);
    GUIView::ConvertPointToView((Vector2 *)this,(GUIView *)&local_58);
    (*pcVar4)(&local_48,plVar3,local_50);
    plVar3 = *(long **)(this + 0xf0);
                    /* try { // try from 00596ea0 to 00696ec7 has its CatchHandler @ 00597048 */
    if (local_48 != plVar3) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xa8))(plVar3,this);
      }
      if (local_40 != (long *)0x0) {
        local_40[1] = local_40[1] + 1;
      }
      plVar3 = *(long **)(this + 0xf8);
      *(long **)(this + 0xf0) = local_48;
      *(long **)(this + 0xf8) = local_40;
                    /* try { // try from 00596ee4 to 00696eeb has its CatchHandler @ 00596ef4 */
      if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 00596eec to 0069706b has its CatchHandler @ 00595fd8 */
                    /* catch() { ... } // from try @ 00596a60 with catch @ 00596ef4
                       catch() { ... } // from try @ 00596ee4 with catch @ 00596ef4 */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar2 = plVar3[2];
                    /* catch() { ... } // from try @ 00596624 with catch @ 00596f00
                       catch() { ... } // from try @ 00596664 with catch @ 00596f00 */
        plVar3[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      plVar3 = *(long **)(this + 0xf0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xa0))(plVar3,this);
      }
    }
    plVar3 = local_40;
                    /* catch() { ... } // from try @ 005965b0 with catch @ 00596f38
                       catch() { ... } // from try @ 005965f0 with catch @ 00596f38 */
    if ((local_40 != (long *)0x0) &&
       (lVar2 = local_40[1], local_40[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 00596410 with catch @ 00596f70
                       catch() { ... } // from try @ 0059649c with catch @ 00596f70 */
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


