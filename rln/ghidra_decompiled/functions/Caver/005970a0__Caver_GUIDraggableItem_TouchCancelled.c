/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005970a0
 * Function: Caver::GUIDraggableItem::TouchCancelled
 * Signature: undefined __cdecl TouchCancelled(FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIDraggableItem::TouchCancelled(Caver::FWTouch const&) */

void Caver::GUIDraggableItem::TouchCancelled(FWTouch *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005970a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x78))();
  return;
}


