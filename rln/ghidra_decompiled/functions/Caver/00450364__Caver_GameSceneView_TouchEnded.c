/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00450364
 * Function: Caver::GameSceneView::TouchEnded
 * Signature: undefined __cdecl TouchEnded(FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::TouchEnded(Caver::FWTouch const&) */

void Caver::GameSceneView::TouchEnded(FWTouch *param_1)

{
                    /* catch() { ... } // from try @ 00450350 with catch @ 00450364 */
  Scene::TouchEnded(*(FWTouch **)(*(long *)(param_1 + 0xf0) + 0x20));
  return;
}


