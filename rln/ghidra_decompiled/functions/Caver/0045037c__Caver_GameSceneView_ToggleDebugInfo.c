/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045037c
 * Function: Caver::GameSceneView::ToggleDebugInfo
 * Signature: undefined __thiscall ToggleDebugInfo(GameSceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::ToggleDebugInfo() */

void __thiscall Caver::GameSceneView::ToggleDebugInfo(GameSceneView *this)

{
  undefined8 uVar1;
  long lVar2;
  DebugInfoOverlay *pDVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 00450390 to 00550393 has its CatchHandler @ 004503a4 */
  lVar2 = tpidr_el0;
                    /* try { // try from 00450394 to 005503b7 has its CatchHandler @ 00450378 */
  local_38 = *(long *)(lVar2 + 0x28);
  pDVar3 = *(DebugInfoOverlay **)(this + 0x110);
                    /* catch() { ... } // from try @ 00450390 with catch @ 004503a4 */
  if (pDVar3 == (DebugInfoOverlay *)0x0) {
    pDVar3 = operator_new(0x168);
    DebugInfoOverlay::DebugInfoOverlay(pDVar3);
                    /* try { // try from 004503b8 to 005503cf has its CatchHandler @ 004503b8
                       catch() { ... } // from try @ 004503b8 with catch @ 004503b8
                       catch() { ... } // from try @ 004503d4 with catch @ 004503b8 */
    boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>
              ((shared_ptr<Caver::DebugInfoOverlay> *)&local_48,pDVar3);
    uVar1 = *(undefined8 *)(this + 0x110);
    plVar6 = *(long **)(this + 0x118);
                    /* try { // try from 004503d0 to 005503d3 has its CatchHandler @ 004503e4 */
                    /* try { // try from 004503d4 to 005503f7 has its CatchHandler @ 004503b8 */
    *(undefined8 *)(this + 0x110) = local_48;
    *(long **)(this + 0x118) = local_40;
                    /* catch() { ... } // from try @ 004503d0 with catch @ 004503e4 */
    if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 004503f8 to 0055040f has its CatchHandler @ 004503f8
                       catch() { ... } // from try @ 004503f8 with catch @ 004503f8
                       catch() { ... } // from try @ 00450414 with catch @ 004503f8 */
      local_48 = uVar1;
      local_40 = plVar6;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar4 = plVar6[2];
      plVar6[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
                    /* try { // try from 00450410 to 00550413 has its CatchHandler @ 00450424 */
                    /* try { // try from 00450414 to 00550437 has its CatchHandler @ 004503f8 */
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
                    /* catch() { ... } // from try @ 00450410 with catch @ 00450424 */
    local_48 = *(undefined8 *)(this + 0x110);
    pcVar5 = *(code **)(*(long *)this + 0x60);
    local_40 = *(long **)(this + 0x118);
                    /* try { // try from 00450438 to 0055044f has its CatchHandler @ 00450438
                       catch() { ... } // from try @ 00450438 with catch @ 00450438
                       catch() { ... } // from try @ 00450454 with catch @ 00450438 */
    if (local_40 != (long *)0x0) {
      local_40[1] = local_40[1] + 1;
    }
                    /* try { // try from 00450450 to 00550453 has its CatchHandler @ 00450464 */
    (*pcVar5)(this,&local_48);
    plVar6 = local_40;
                    /* try { // try from 00450454 to 00550477 has its CatchHandler @ 00450438 */
                    /* catch() { ... } // from try @ 00450450 with catch @ 00450464 */
    if ((local_40 != (long *)0x0) &&
       (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 00450478 to 0055048f has its CatchHandler @ 00450478
                       catch() { ... } // from try @ 00450478 with catch @ 00450478
                       catch() { ... } // from try @ 00450494 with catch @ 00450478 */
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar4 = plVar6[2];
      plVar6[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
                    /* try { // try from 00450490 to 00550493 has its CatchHandler @ 004504a4 */
                    /* try { // try from 00450494 to 005504b7 has its CatchHandler @ 00450478 */
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
                    /* catch() { ... } // from try @ 00450490 with catch @ 004504a4 */
    GUIView::SetFrame(*(GUIView **)(this + 0x110),(Rectangle *)(this + 0x84));
    pDVar3 = *(DebugInfoOverlay **)(this + 0x110);
  }
  if (*(int *)(pDVar3 + 0x164) == 1) {
                    /* try { // try from 004504b8 to 005504cf has its CatchHandler @ 004504b8
                       catch() { ... } // from try @ 004504b8 with catch @ 004504b8
                       catch() { ... } // from try @ 004504d4 with catch @ 004504b8 */
    (**(code **)(*(long *)pDVar3 + 0x78))();
    plVar6 = *(long **)(this + 0x118);
    *(undefined8 *)(this + 0x110) = 0;
    *(undefined8 *)(this + 0x118) = 0;
                    /* try { // try from 004504d0 to 005504d3 has its CatchHandler @ 004504e4 */
                    /* try { // try from 004504d4 to 005504f7 has its CatchHandler @ 004504b8 */
    if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004504d0 with catch @ 004504e4 */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar4 = plVar6[2];
                    /* try { // try from 004504f8 to 0055050f has its CatchHandler @ 004504f8
                       catch() { ... } // from try @ 004504f8 with catch @ 004504f8
                       catch() { ... } // from try @ 00450514 with catch @ 004504f8 */
      plVar6[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
                    /* try { // try from 00450510 to 00550513 has its CatchHandler @ 00450524 */
      }
    }
  }
  else {
                    /* try { // try from 00450514 to 00550537 has its CatchHandler @ 004504f8 */
    DebugInfoOverlay::Toggle(pDVar3);
  }
                    /* catch() { ... } // from try @ 00450510 with catch @ 00450524 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00450538 to 0055054f has its CatchHandler @ 00450538
                       catch() { ... } // from try @ 00450538 with catch @ 00450538
                       catch() { ... } // from try @ 00450554 with catch @ 00450538 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


