/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0560
 * Function: Caver::GUIView::DraggableItemDidDropIntoView
 * Signature: undefined __cdecl DraggableItemDidDropIntoView(GUIDraggableItem * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::DraggableItemDidDropIntoView(Caver::GUIDraggableItem*) */

void Caver::GUIView::DraggableItemDidDropIntoView(GUIDraggableItem *param_1)

{
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0xb0))();
    return;
  }
  return;
}


