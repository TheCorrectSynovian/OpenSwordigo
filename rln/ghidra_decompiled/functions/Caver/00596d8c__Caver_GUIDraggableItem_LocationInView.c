/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596d8c
 * Function: Caver::GUIDraggableItem::LocationInView
 * Signature: undefined __cdecl LocationInView(GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIDraggableItem::LocationInView(Caver::GUIView*) */

void Caver::GUIDraggableItem::LocationInView(GUIView *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  GUIView::ConvertPointToView((Vector2 *)param_1,(GUIView *)&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


