/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044fb34
 * Function: Caver::GameSceneView::SetCinematicModeEnabled
 * Signature: undefined __thiscall SetCinematicModeEnabled(GameSceneView * this, bool param_1, bool param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::SetCinematicModeEnabled(bool, bool, bool) */

void __thiscall
Caver::GameSceneView::SetCinematicModeEnabled
          (GameSceneView *this,bool param_1,bool param_2,bool param_3)

{
  long lVar1;
  GUIEffect *pGVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  GUIEffect *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0044fb28 with catch @ 0044fb64 */
  this[0x180] = (GameSceneView)param_1;
  this[0x140] = (GameSceneView)param_3;
  if (param_1) {
    GameOverlayView::CancelInput(*(GameOverlayView **)(this + 0x100));
                    /* try { // try from 0044fb78 to 0054fb8f has its CatchHandler @ 0044fb78
                       catch() { ... } // from try @ 0044fb78 with catch @ 0044fb78
                       catch() { ... } // from try @ 0044fb94 with catch @ 0044fb78 */
    *(undefined1 *)(*(long *)(this + 0x100) + 0xe4) = 1;
    pGVar2 = *(GUIEffect **)(this + 0x188);
    if (pGVar2 == (GUIEffect *)0x0) {
                    /* try { // try from 0044fb90 to 0054fb93 has its CatchHandler @ 0044fba4 */
      pGVar2 = operator_new(0x70);
                    /* try { // try from 0044fb94 to 0054fbb7 has its CatchHandler @ 0044fb78 */
      GUIEffect::GUIEffect(pGVar2);
      local_48 = pGVar2;
                    /* catch() { ... } // from try @ 0044fb90 with catch @ 0044fba4 */
      boost::detail::shared_count::shared_count<Caver::GUIEffect>((shared_count *)&local_40,pGVar2);
                    /* try { // try from 0044fbb8 to 0054fbcf has its CatchHandler @ 0044fbb8
                       catch() { ... } // from try @ 0044fbb8 with catch @ 0044fbb8
                       catch() { ... } // from try @ 0044fbd4 with catch @ 0044fbb8 */
      boost::detail::sp_enable_shared_from_this(&local_48,pGVar2,pGVar2);
      pGVar2 = *(GUIEffect **)(this + 0x188);
      plVar3 = *(long **)(this + 400);
                    /* try { // try from 0044fbd0 to 0054fbd3 has its CatchHandler @ 0044fbe4 */
      *(GUIEffect **)(this + 0x188) = local_48;
      *(long **)(this + 400) = local_40;
                    /* try { // try from 0044fbd4 to 0054fbf7 has its CatchHandler @ 0044fbb8 */
      local_48 = pGVar2;
      local_40 = plVar3;
                    /* catch() { ... } // from try @ 0044fbd0 with catch @ 0044fbe4 */
      if ((plVar3 != (long *)0x0) && (lVar4 = plVar3[1], plVar3[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 0044fbf8 to 0054fc0f has its CatchHandler @ 0044fbf8
                       catch() { ... } // from try @ 0044fbf8 with catch @ 0044fbf8
                       catch() { ... } // from try @ 0044fc14 with catch @ 0044fbf8 */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar4 = plVar3[2];
        plVar3[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
                    /* try { // try from 0044fc10 to 0054fc13 has its CatchHandler @ 0044fc24 */
                    /* try { // try from 0044fc14 to 0054fc37 has its CatchHandler @ 0044fbf8 */
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
                    /* catch() { ... } // from try @ 0044fc10 with catch @ 0044fc24 */
      GUIEffect::SetFrame(*(GUIEffect **)(this + 0x188),(Rectangle *)(this + 0x84));
      pGVar2 = *(GUIEffect **)(this + 0x188);
    }
    fVar5 = DAT_00684430;
                    /* try { // try from 0044fc38 to 0054fc4f has its CatchHandler @ 0044fc38
                       catch() { ... } // from try @ 0044fc38 with catch @ 0044fc38
                       catch() { ... } // from try @ 0044fc54 with catch @ 0044fc38 */
    if (!param_2) {
      fVar5 = 0.0;
    }
    GUIEffect::ShowBars(pGVar2,fVar5);
  }
  else {
    plVar3 = *(long **)(this + 0x148);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 0044fc50 to 0054fc53 has its CatchHandler @ 0044fc64 */
                    /* try { // try from 0044fc54 to 0054fc77 has its CatchHandler @ 0044fc38 */
      *(undefined1 *)((long)plVar3 + 0xe4) = 1;
      (**(code **)(*plVar3 + 0x78))();
    }
                    /* catch() { ... } // from try @ 0044fc50 with catch @ 0044fc64 */
    this[0x158] = (GameSceneView)0x0;
    *(undefined1 *)(*(long *)(this + 0x100) + 0xe4) = 0;
    if (*(GUIEffect **)(this + 0x188) != (GUIEffect *)0x0) {
      fVar5 = DAT_00684430;
                    /* try { // try from 0044fc78 to 0054fc8f has its CatchHandler @ 0044fc78
                       catch() { ... } // from try @ 0044fc78 with catch @ 0044fc78
                       catch() { ... } // from try @ 0044fc94 with catch @ 0044fc78 */
      if (!param_2) {
        fVar5 = 0.0;
      }
      GUIEffect::HideBars(*(GUIEffect **)(this + 0x188),fVar5);
    }
  }
                    /* try { // try from 0044fc90 to 0054fc93 has its CatchHandler @ 0044fca4 */
                    /* try { // try from 0044fc94 to 0054fcb7 has its CatchHandler @ 0044fc78 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0044fc90 with catch @ 0044fca4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


