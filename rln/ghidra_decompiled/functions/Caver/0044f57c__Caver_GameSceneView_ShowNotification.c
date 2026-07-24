/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044f57c
 * Function: Caver::GameSceneView::ShowNotification
 * Signature: undefined __thiscall ShowNotification(GameSceneView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&) */

void __thiscall Caver::GameSceneView::ShowNotification(GameSceneView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  GUIView *this_00;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 0044f584 to 0054f59b has its CatchHandler @ 0044f584
                       catch() { ... } // from try @ 0044f584 with catch @ 0044f584
                       catch() { ... } // from try @ 0044f5a0 with catch @ 0044f584 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0044f59c to 0054f59f has its CatchHandler @ 0044f5b0 */
                    /* try { // try from 0044f5a0 to 0054f5c3 has its CatchHandler @ 0044f584 */
  if (*(long **)(this + 0x120) != (long *)0x0) {
                    /* catch() { ... } // from try @ 0044f59c with catch @ 0044f5b0 */
    (**(code **)(**(long **)(this + 0x120) + 0x78))();
  }
  uVar1 = *(undefined8 *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
                    /* try { // try from 0044f5c4 to 0054f5db has its CatchHandler @ 0044f5c4
                       catch() { ... } // from try @ 0044f5c4 with catch @ 0044f5c4
                       catch() { ... } // from try @ 0044f5e0 with catch @ 0044f5c4 */
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0x128);
  *(undefined8 *)(this + 0x120) = uVar1;
  *(long *)(this + 0x128) = lVar3;
                    /* try { // try from 0044f5dc to 0054f5df has its CatchHandler @ 0044f5f0 */
                    /* try { // try from 0044f5e0 to 0054f603 has its CatchHandler @ 0044f5c4 */
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0044f5dc with catch @ 0044f5f0 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
                    /* try { // try from 0044f604 to 0054f61b has its CatchHandler @ 0044f604
                       catch() { ... } // from try @ 0044f604 with catch @ 0044f604
                       catch() { ... } // from try @ 0044f620 with catch @ 0044f604 */
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
                    /* try { // try from 0044f61c to 0054f61f has its CatchHandler @ 0044f630 */
                    /* try { // try from 0044f620 to 0054f643 has its CatchHandler @ 0044f604 */
  this_00 = *(GUIView **)param_1;
                    /* catch() { ... } // from try @ 0044f61c with catch @ 0044f630 */
                    /* try { // try from 0044f644 to 0054f65b has its CatchHandler @ 0044f644
                       catch() { ... } // from try @ 0044f644 with catch @ 0044f644
                       catch() { ... } // from try @ 0044f660 with catch @ 0044f644 */
                    /* try { // try from 0044f65c to 0054f65f has its CatchHandler @ 0044f670 */
                    /* try { // try from 0044f660 to 0054f683 has its CatchHandler @ 0044f644 */
  Vector2::Rounded();
                    /* catch() { ... } // from try @ 0044f65c with catch @ 0044f670 */
  local_40 = *(long **)(*(long *)param_1 + 0x8c);
                    /* try { // try from 0044f684 to 0054f69b has its CatchHandler @ 0044f684
                       catch() { ... } // from try @ 0044f684 with catch @ 0044f684
                       catch() { ... } // from try @ 0044f6a0 with catch @ 0044f684 */
  GUIView::SetFrame(this_00,(Rectangle *)&local_48);
  local_48 = *(undefined8 *)param_1;
  pcVar4 = *(code **)(*(long *)this + 0x60);
  local_40 = *(long **)(param_1 + 8);
                    /* try { // try from 0044f69c to 0054f69f has its CatchHandler @ 0044f6b0 */
                    /* try { // try from 0044f6a0 to 0054f6c3 has its CatchHandler @ 0044f684 */
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
                    /* catch() { ... } // from try @ 0044f69c with catch @ 0044f6b0 */
  (*pcVar4)(this,&local_48);
  plVar5 = local_40;
                    /* try { // try from 0044f6c4 to 0054f6db has its CatchHandler @ 0044f6c4
                       catch() { ... } // from try @ 0044f6c4 with catch @ 0044f6c4
                       catch() { ... } // from try @ 0044f6e0 with catch @ 0044f6c4 */
  if ((local_40 != (long *)0x0) && (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* try { // try from 0044f6dc to 0054f6df has its CatchHandler @ 0044f6f0 */
                    /* try { // try from 0044f6e0 to 0054f703 has its CatchHandler @ 0044f6c4 */
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
                    /* catch() { ... } // from try @ 0044f6dc with catch @ 0044f6f0 */
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
                    /* try { // try from 0044f704 to 0054f71b has its CatchHandler @ 0044f704
                       catch() { ... } // from try @ 0044f704 with catch @ 0044f704
                       catch() { ... } // from try @ 0044f720 with catch @ 0044f704 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 0044f71c to 0054f71f has its CatchHandler @ 0044f730 */
                    /* try { // try from 0044f720 to 0054f743 has its CatchHandler @ 0044f704 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


