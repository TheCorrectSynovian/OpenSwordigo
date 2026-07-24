/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044faf4
 * Function: Caver::GameSceneView::SetSkillToggleButtonHighlighted
 * Signature: undefined __thiscall SetSkillToggleButtonHighlighted(GameSceneView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::SetSkillToggleButtonHighlighted(bool) */

void __thiscall
Caver::GameSceneView::SetSkillToggleButtonHighlighted(GameSceneView *this,bool param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x100) + 0x1b8);
                    /* try { // try from 0044fb04 to 0054fb27 has its CatchHandler @ 0044fb04
                       catch() { ... } // from try @ 0044fb04 with catch @ 0044fb04
                       catch() { ... } // from try @ 0044fb30 with catch @ 0044fb04 */
  if (param_1 != (bool)*(char *)(lVar1 + 0x1d8)) {
    *(bool *)(lVar1 + 0x1d8) = param_1;
    if (param_1) {
      param_1 = true;
      *(undefined8 *)(lVar1 + 0x1d0) = 0;
    }
    else {
      param_1 = false;
    }
  }
                    /* try { // try from 0044fb28 to 0054fb2f has its CatchHandler @ 0044fb64 */
  *(bool *)(*(long *)(*(long *)(this + 0xf0) + 8) + 0x199) = param_1;
                    /* try { // try from 0044fb30 to 0054fb77 has its CatchHandler @ 0044fb04 */
  return;
}


