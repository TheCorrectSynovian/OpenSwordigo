/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00537080
 * Function: Caver::SceneLoadingView::~SceneLoadingView
 * Signature: undefined __thiscall ~SceneLoadingView(SceneLoadingView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneLoadingView::~SceneLoadingView() */

void __thiscall Caver::SceneLoadingView::~SceneLoadingView(SceneLoadingView *this)

{
  ~SceneLoadingView(this);
                    /* catch() { ... } // from try @ 00537078 with catch @ 00537094 */
                    /* try { // try from 00537098 to 0063709f has its CatchHandler @ 005370a4 */
                    /* try { // try from 005370a0 to 006370bb has its CatchHandler @ 00537034 */
  operator_delete(this);
  return;
}


