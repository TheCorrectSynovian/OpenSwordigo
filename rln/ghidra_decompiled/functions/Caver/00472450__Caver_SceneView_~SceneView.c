/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00472450
 * Function: Caver::SceneView::~SceneView
 * Signature: undefined __thiscall ~SceneView(SceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneView::~SceneView() */

void __thiscall Caver::SceneView::~SceneView(SceneView *this)

{
                    /* catch() { ... } // from try @ 004722b0 with catch @ 00472460 */
  ~SceneView(this);
  operator_delete(this);
  return;
}


