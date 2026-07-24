/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00450370
 * Function: Caver::GameSceneView::TouchCancelled
 * Signature: undefined __cdecl TouchCancelled(FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::TouchCancelled(Caver::FWTouch const&) */

void Caver::GameSceneView::TouchCancelled(FWTouch *param_1)

{
                    /* try { // try from 00450378 to 0055038f has its CatchHandler @ 00450378
                       catch() { ... } // from try @ 00450378 with catch @ 00450378
                       catch() { ... } // from try @ 00450394 with catch @ 00450378 */
  Scene::TouchCancelled(*(FWTouch **)(*(long *)(param_1 + 0xf0) + 0x20));
  return;
}


