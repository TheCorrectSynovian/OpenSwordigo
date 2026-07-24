/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044fab4
 * Function: Caver::GameSceneView::SetMenuButtonHighlighted
 * Signature: undefined __thiscall SetMenuButtonHighlighted(GameSceneView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::SetMenuButtonHighlighted(bool) */

void __thiscall Caver::GameSceneView::SetMenuButtonHighlighted(GameSceneView *this,bool param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x100) + 0x1c8);
                    /* try { // try from 0044fac4 to 0054fadb has its CatchHandler @ 0044fac4
                       catch() { ... } // from try @ 0044fac4 with catch @ 0044fac4
                       catch() { ... } // from try @ 0044fae0 with catch @ 0044fac4 */
  if (param_1 != (bool)*(char *)(lVar1 + 0x1d8)) {
    *(bool *)(lVar1 + 0x1d8) = param_1;
    if (param_1) {
      param_1 = true;
      *(undefined8 *)(lVar1 + 0x1d0) = 0;
                    /* try { // try from 0044fadc to 0054fadf has its CatchHandler @ 0044faf0 */
    }
    else {
                    /* try { // try from 0044fae0 to 0054fb03 has its CatchHandler @ 0044fac4 */
      param_1 = false;
    }
  }
  *(bool *)(*(long *)(*(long *)(this + 0xf0) + 8) + 0x198) = param_1;
                    /* catch() { ... } // from try @ 0044fadc with catch @ 0044faf0 */
  return;
}


