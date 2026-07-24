/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004640f4
 * Function: Caver::GameSceneView::overlayEffect
 * Signature: undefined __thiscall overlayEffect(GameSceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::overlayEffect() */

void __thiscall Caver::GameSceneView::overlayEffect(GameSceneView *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  GUIEffect *pGVar4;
  GUIEffect *local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 004640f4 to 00564123 has its CatchHandler @ 00464088 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 004640e0 with catch @ 00464118 */
  lVar3 = *(long *)(this + 0x160);
                    /* catch() { ... } // from try @ 004640c8 with catch @ 0046411c */
  if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 004640b0 with catch @ 00464120 */
                    /* catch() { ... } // from try @ 004641b0 with catch @ 00464124 */
    pGVar4 = operator_new(0x70);
    GUIEffect::GUIEffect(pGVar4);
    local_48 = pGVar4;
    boost::detail::shared_count::shared_count<Caver::GUIEffect>((shared_count *)&local_40,pGVar4);
    boost::detail::sp_enable_shared_from_this(&local_48,pGVar4,pGVar4);
                    /* try { // try from 00464154 to 00564167 has its CatchHandler @ 004641e0 */
    pGVar4 = *(GUIEffect **)(this + 0x160);
    plVar1 = *(long **)(this + 0x168);
    *(GUIEffect **)(this + 0x160) = local_48;
    *(long **)(this + 0x168) = local_40;
                    /* try { // try from 0046416c to 0056417f has its CatchHandler @ 004641dc */
    local_48 = pGVar4;
    local_40 = plVar1;
    if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[1], plVar1[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00464184 to 00564197 has its CatchHandler @ 004641d8 */
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar3 = plVar1[2];
      plVar1[2] = lVar3 + -1;
                    /* try { // try from 0046419c to 005641af has its CatchHandler @ 004641d4 */
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
                    /* try { // try from 004641b0 to 005641e3 has its CatchHandler @ 00464124 */
    GUIEffect::SetFrame(*(GUIEffect **)(this + 0x160),(Rectangle *)(this + 0x84));
    lVar3 = *(long *)(this + 0x160);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0046419c with catch @ 004641d4 */
                    /* catch() { ... } // from try @ 00464184 with catch @ 004641d8 */
                    /* catch() { ... } // from try @ 0046416c with catch @ 004641dc */
                    /* catch() { ... } // from try @ 00464154 with catch @ 004641e0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004641e4 to 00564213 has its CatchHandler @ 004641e4
                       catch() { ... } // from try @ 004641e4 with catch @ 004641e4
                       catch() { ... } // from try @ 00464828 with catch @ 004641e4 */
  __stack_chk_fail(lVar3);
}


