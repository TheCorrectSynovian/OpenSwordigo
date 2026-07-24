/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0548
 * Function: Caver::GUIView::DraggableItemDidLeaveView
 * Signature: undefined __cdecl DraggableItemDidLeaveView(GUIDraggableItem * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::DraggableItemDidLeaveView(Caver::GUIDraggableItem*) */

void Caver::GUIView::DraggableItemDidLeaveView(GUIDraggableItem *param_1)

{
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a0558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0xa8))();
    return;
  }
  return;
}


