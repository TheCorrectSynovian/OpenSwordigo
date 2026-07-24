/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00450358
 * Function: Caver::GameSceneView::TouchMoved
 * Signature: undefined __cdecl TouchMoved(FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::TouchMoved(Caver::FWTouch const&) */

void Caver::GameSceneView::TouchMoved(FWTouch *param_1)

{
  Scene::TouchMoved(*(FWTouch **)(*(long *)(param_1 + 0xf0) + 0x20));
  return;
}


