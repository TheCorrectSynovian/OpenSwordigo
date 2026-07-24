/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044f784
 * Function: Caver::GameSceneView::ShowItemInfoPopup
 * Signature: undefined __thiscall ShowItemInfoPopup(GameSceneView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::ShowItemInfoPopup(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::GameSceneView::ShowItemInfoPopup(GameSceneView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ItemInfoPopupView *this_00;
  GUIView *this_01;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 0044f784 to 0054f79b has its CatchHandler @ 0044f784
                       catch() { ... } // from try @ 0044f784 with catch @ 0044f784
                       catch() { ... } // from try @ 0044f7a0 with catch @ 0044f784 */
  lVar2 = tpidr_el0;
                    /* try { // try from 0044f79c to 0054f79f has its CatchHandler @ 0044f7b0 */
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0044f7a0 to 0054f7c3 has its CatchHandler @ 0044f784 */
                    /* catch() { ... } // from try @ 0044f79c with catch @ 0044f7b0 */
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 0x78))();
    plVar5 = *(long **)(this + 0x138);
                    /* try { // try from 0044f7c4 to 0054f7db has its CatchHandler @ 0044f7c4
                       catch() { ... } // from try @ 0044f7c4 with catch @ 0044f7c4
                       catch() { ... } // from try @ 0044f7e0 with catch @ 0044f7c4 */
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x138) = 0;
    if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 0044f7dc to 0054f7df has its CatchHandler @ 0044f7f0 */
                    /* try { // try from 0044f7e0 to 0054f803 has its CatchHandler @ 0044f7c4 */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar3 = plVar5[2];
                    /* catch() { ... } // from try @ 0044f7dc with catch @ 0044f7f0 */
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* try { // try from 0044f804 to 0054f81b has its CatchHandler @ 0044f804
                       catch() { ... } // from try @ 0044f804 with catch @ 0044f804
                       catch() { ... } // from try @ 0044f820 with catch @ 0044f804 */
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  this_00 = operator_new(0x140);
  ItemInfoPopupView::ItemInfoPopupView(this_00);
                    /* try { // try from 0044f81c to 0054f81f has its CatchHandler @ 0044f830 */
                    /* try { // try from 0044f820 to 0054f843 has its CatchHandler @ 0044f804 */
  boost::shared_ptr<Caver::ItemInfoPopupView>::shared_ptr<Caver::ItemInfoPopupView>
            ((shared_ptr<Caver::ItemInfoPopupView> *)&local_48,this_00);
  uVar1 = *(undefined8 *)(this + 0x130);
  plVar5 = *(long **)(this + 0x138);
                    /* catch() { ... } // from try @ 0044f81c with catch @ 0044f830 */
  *(undefined8 *)(this + 0x130) = local_48;
  *(long **)(this + 0x138) = local_40;
  local_48 = uVar1;
  local_40 = plVar5;
                    /* try { // try from 0044f844 to 0054f85b has its CatchHandler @ 0044f844
                       catch() { ... } // from try @ 0044f844 with catch @ 0044f844
                       catch() { ... } // from try @ 0044f860 with catch @ 0044f844 */
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 0044f85c to 0054f85f has its CatchHandler @ 0044f870 */
                    /* try { // try from 0044f860 to 0054f883 has its CatchHandler @ 0044f844 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
                    /* catch() { ... } // from try @ 0044f85c with catch @ 0044f870 */
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
                    /* try { // try from 0044f884 to 0054f89b has its CatchHandler @ 0044f884
                       catch() { ... } // from try @ 0044f884 with catch @ 0044f884
                       catch() { ... } // from try @ 0044f8a0 with catch @ 0044f884 */
  ItemInfoPopupView::InitWithItem(*(ItemInfoPopupView **)(this + 0x130),param_1);
  this_01 = *(GUIView **)(this + 0x130);
                    /* try { // try from 0044f89c to 0054f89f has its CatchHandler @ 0044f8b0 */
                    /* try { // try from 0044f8a0 to 0054f8c3 has its CatchHandler @ 0044f884 */
  local_40 = *(long **)(this_01 + 0x8c);
                    /* catch() { ... } // from try @ 0044f89c with catch @ 0044f8b0 */
                    /* try { // try from 0044f8c4 to 0054f8db has its CatchHandler @ 0044f8c4
                       catch() { ... } // from try @ 0044f8c4 with catch @ 0044f8c4
                       catch() { ... } // from try @ 0044f8e0 with catch @ 0044f8c4 */
  local_48 = CONCAT44(((*(float *)(this + 0x88) + *(float *)(this + 0x90) + -10.0) -
                      *(float *)(this_01 + 0x90) * 0.5) - *(float *)(this_01 + 0x90) * 0.5,
                      (*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5) -
                      *(float *)(this_01 + 0x8c) * 0.5);
                    /* try { // try from 0044f8dc to 0054f8df has its CatchHandler @ 0044f8f0 */
                    /* try { // try from 0044f8e0 to 0054f903 has its CatchHandler @ 0044f8c4 */
  GUIView::SetFrame(this_01,(Rectangle *)&local_48);
  local_48 = *(undefined8 *)(this + 0x130);
  pcVar4 = *(code **)(*(long *)this + 0x60);
                    /* catch() { ... } // from try @ 0044f8dc with catch @ 0044f8f0 */
  local_40 = *(long **)(this + 0x138);
  if (local_40 != (long *)0x0) {
                    /* try { // try from 0044f904 to 0054f91b has its CatchHandler @ 0044f904
                       catch() { ... } // from try @ 0044f904 with catch @ 0044f904
                       catch() { ... } // from try @ 0044f920 with catch @ 0044f904 */
    local_40[1] = local_40[1] + 1;
  }
  (*pcVar4)(this,&local_48);
  plVar5 = local_40;
                    /* try { // try from 0044f91c to 0054f91f has its CatchHandler @ 0044f930 */
                    /* try { // try from 0044f920 to 0054f943 has its CatchHandler @ 0044f904 */
  if ((local_40 != (long *)0x0) && (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 0044f91c with catch @ 0044f930 */
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = plVar5[2];
                    /* try { // try from 0044f944 to 0054f95b has its CatchHandler @ 0044f944
                       catch() { ... } // from try @ 0044f944 with catch @ 0044f944
                       catch() { ... } // from try @ 0044f960 with catch @ 0044f944 */
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 0044f95c to 0054f95f has its CatchHandler @ 0044f970 */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
                    /* try { // try from 0044f960 to 0054f983 has its CatchHandler @ 0044f944 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0044f95c with catch @ 0044f970 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0044f984 to 0054f99b has its CatchHandler @ 0044f984
                       catch() { ... } // from try @ 0044f984 with catch @ 0044f984
                       catch() { ... } // from try @ 0044f9a0 with catch @ 0044f984 */
  __stack_chk_fail();
}


