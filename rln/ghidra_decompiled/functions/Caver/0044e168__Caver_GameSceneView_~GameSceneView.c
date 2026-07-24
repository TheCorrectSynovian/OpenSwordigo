/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044e168
 * Function: Caver::GameSceneView::~GameSceneView
 * Signature: undefined __thiscall ~GameSceneView(GameSceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::~GameSceneView() */

void __thiscall Caver::GameSceneView::~GameSceneView(GameSceneView *this)

{
                    /* try { // try from 0044e170 to 0054e17f has its CatchHandler @ 0044f4b4 */
  ~GameSceneView(this);
                    /* try { // try from 0044e180 to 0054e1d7 has its CatchHandler @ 00447cc4 */
  operator_delete(this);
  return;
}


