/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596d2c
 * Function: Caver::GUIDraggableItem::SetLocationInSuperview
 * Signature: undefined __thiscall SetLocationInSuperview(GUIDraggableItem * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIDraggableItem::SetLocationInSuperview(Caver::Vector2 const&) */

void __thiscall
Caver::GUIDraggableItem::SetLocationInSuperview(GUIDraggableItem *this,Vector2 *param_1)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0059602c with catch @ 00596d4c */
                    /* catch() { ... } // from try @ 00596848 with catch @ 00596d50 */
  local_30 = *(undefined8 *)(this + 0x8c);
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) +
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      (float)*(undefined8 *)(this + 0x84) + (float)*(undefined8 *)param_1);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


