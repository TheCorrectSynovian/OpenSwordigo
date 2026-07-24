/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c773c
 * Function: Caver::ConfigureOverlayView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(ConfigureOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayView::LayoutSubviews() */

void __thiscall Caver::ConfigureOverlayView::LayoutSubviews(ConfigureOverlayView *this)

{
  long lVar1;
  long lVar2;
  GUIView *pGVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
                    /* try { // try from 004c7768 to 005c777b has its CatchHandler @ 004c7878 */
  pGVar3 = *(GUIView **)(this + 0x108);
                    /* try { // try from 004c777c to 005c7793 has its CatchHandler @ 004c7814 */
                    /* try { // try from 004c7794 to 005c789b has its CatchHandler @ 004c76b8 */
  Vector2::Rounded();
  local_50 = *(long **)(*(long *)(this + 0x108) + 0x7c);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_58);
  pGVar3 = *(GUIView **)(this + 0x118);
  Vector2::Rounded();
  local_50 = *(long **)(*(long *)(this + 0x118) + 0x7c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004c777c with catch @ 004c7814
                        */
  local_58 = local_60;
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_58);
  GameOverlayView::Layout();
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar4 = *(long **)(this + 0x140);
  *(undefined8 *)(this + 0x138) = local_58;
  *(long **)(this + 0x140) = local_50;
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004c7768 with catch @ 004c7878
                        */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = local_50;
                    /* try { // try from 004c789c to 005c7923 has its CatchHandler @ 004c7988 */
  if ((local_50 != (long *)0x0) && (lVar2 = local_50[1], local_50[1] = lVar2 + -1, lVar2 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if (0 < (int)((ulong)(*(long *)(*(long *)(this + 0x138) + 0x10) -
                       *(long *)(*(long *)(this + 0x138) + 8)) >> 4)) {
    lVar5 = 0;
    lVar2 = 0;
    do {
      LayoutItem(this,*(DraggableOverlayItem **)(*(long *)(this + 0x148) + lVar5));
      lVar2 = lVar2 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar2 < (int)((ulong)(*(long *)(*(long *)(this + 0x138) + 0x10) -
                                  *(long *)(*(long *)(this + 0x138) + 8)) >> 4));
  }
                    /* try { // try from 004c7924 to 005c798b has its CatchHandler @ 004c76b8 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


