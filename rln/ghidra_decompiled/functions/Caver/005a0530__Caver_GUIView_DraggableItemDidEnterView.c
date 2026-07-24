/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0530
 * Function: Caver::GUIView::DraggableItemDidEnterView
 * Signature: undefined __cdecl DraggableItemDidEnterView(GUIDraggableItem * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::DraggableItemDidEnterView(Caver::GUIDraggableItem*) */

void Caver::GUIView::DraggableItemDidEnterView(GUIDraggableItem *param_1)

{
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a0540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0xa0))();
    return;
  }
  return;
}


