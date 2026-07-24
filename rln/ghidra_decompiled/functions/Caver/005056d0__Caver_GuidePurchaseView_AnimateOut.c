/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005056d0
 * Function: Caver::GuidePurchaseView::AnimateOut
 * Signature: undefined __cdecl AnimateOut(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseView::AnimateOut() */

void Caver::GuidePurchaseView::AnimateOut(void)

{
  GUIView *pGVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  long *plVar5;
  GUIAnimation *in_x0;
  GUIAnimation *pGVar6;
  Rectangle *in_x2;
  long lVar7;
  long lVar8;
  ulong uVar9;
  Rectangle aRStack_78 [16];
  long local_68;
  long *local_60;
  long local_58;
  
  fVar4 = DAT_00683f68;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  GUIAnimation::AlphaAnimation(in_x0,1.0,0.0,DAT_00683f68);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations((GUIView *)in_x0);
                    /* try { // try from 0050572c to 0060572f has its CatchHandler @ 00505980 */
                    /* try { // try from 00505730 to 00605803 has its CatchHandler @ 005055ac */
  GUIView::AddAnimation((GUIView *)in_x0,(shared_ptr *)&local_68);
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x120);
  plVar2 = *(long **)(in_x0 + 0x128);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
  GUIAnimation::FrameAnimation((GUIAnimation *)(pGVar1 + 0x74),aRStack_78,in_x2,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations(pGVar1);
  GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  plVar5 = local_60;
                    /* try { // try from 00505804 to 00605807 has its CatchHandler @ 00505984 */
                    /* try { // try from 00505808 to 00605997 has its CatchHandler @ 005055ac */
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = plVar5[2];
    plVar5[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar1 = *(GUIView **)(in_x0 + 0xf8);
  plVar2 = *(long **)(in_x0 + 0x100);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
  GUIAnimation::FrameAnimation((GUIAnimation *)(pGVar1 + 0x74),aRStack_78,in_x2,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations(pGVar1);
  GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = plVar5[2];
    plVar5[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 0050572c with catch @ 00505980 */
  lVar7 = *(long *)(in_x0 + 0x108);
                    /* catch() { ... } // from try @ 00505804 with catch @ 00505984 */
  if (*(long *)(in_x0 + 0x110) != lVar7) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      pGVar1 = *(GUIView **)(lVar7 + lVar8);
      plVar2 = (long *)((undefined8 *)(lVar7 + lVar8))[1];
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 1;
      }
                    /* try { // try from 00505d84 to 00605d87 has its CatchHandler @ 00505d98 */
                    /* catch() { ... } // from try @ 00505d84 with catch @ 00505d98 */
      Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
      GUIAnimation::FrameAnimation((GUIAnimation *)(pGVar1 + 0x74),aRStack_78,in_x2,fVar4);
                    /* try { // try from 00505dc0 to 00605dc3 has its CatchHandler @ 00505e00 */
      *(undefined1 *)(local_68 + 0xb8) = 0;
      GUIView::RemoveAllAnimations(pGVar1);
      GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
      plVar5 = local_60;
                    /* try { // try from 00505dec to 00605df3 has its CatchHandler @ 00505dfc */
      if ((local_60 != (long *)0x0) &&
         (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 00505df4 to 00605e03 has its CatchHandler @ 00505d30 */
                    /* catch() { ... } // from try @ 00505dec with catch @ 00505dfc */
                    /* catch() { ... } // from try @ 00505dc0 with catch @ 00505e00 */
        (**(code **)(*local_60 + 0x10))(local_60);
                    /* try { // try from 00505e04 to 00605e53 has its CatchHandler @ 00505e04
                       catch() { ... } // from try @ 00505e04 with catch @ 00505e04
                       catch() { ... } // from try @ 00505e70 with catch @ 00505e04
                       catch() { ... } // from try @ 00505f00 with catch @ 00505e04
                       catch() { ... } // from try @ 00505f60 with catch @ 00505e04
                       catch() { ... } // from try @ 00505fb4 with catch @ 00505e04
                       catch() { ... } // from try @ 005060c8 with catch @ 00505e04 */
        lVar7 = plVar5[2];
        plVar5[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar7 = plVar2[2];
        plVar2[2] = lVar7 + -1;
                    /* try { // try from 00505e54 to 00605e6f has its CatchHandler @ 005060bc */
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      lVar7 = *(long *)(in_x0 + 0x108);
      uVar9 = uVar9 + 1;
                    /* try { // try from 00505e70 to 00605efb has its CatchHandler @ 00505e04 */
      lVar8 = lVar8 + 0x10;
    } while (uVar9 < (ulong)(*(long *)(in_x0 + 0x110) - lVar7 >> 4));
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x130);
  plVar2 = *(long **)(in_x0 + 0x138);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
  GUIAnimation::FrameAnimation((GUIAnimation *)(pGVar1 + 0x74),aRStack_78,in_x2,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations(pGVar1);
  pGVar6 = (GUIAnimation *)GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    pGVar6 = (GUIAnimation *)(**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = plVar5[2];
    plVar5[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      pGVar6 = (GUIAnimation *)(**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    pGVar6 = (GUIAnimation *)(**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      pGVar6 = (GUIAnimation *)(**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x140);
  plVar2 = *(long **)(in_x0 + 0x148);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  GUIAnimation::ScaleAnimation(pGVar6,1.0,0.0,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations(pGVar1);
  GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = plVar5[2];
    plVar5[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x150);
  plVar2 = *(long **)(in_x0 + 0x158);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
  GUIAnimation::FrameAnimation((GUIAnimation *)(pGVar1 + 0x74),aRStack_78,in_x2,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations(pGVar1);
  pGVar6 = (GUIAnimation *)GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    pGVar6 = (GUIAnimation *)(**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = plVar5[2];
    plVar5[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      pGVar6 = (GUIAnimation *)(**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    pGVar6 = (GUIAnimation *)(**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      pGVar6 = (GUIAnimation *)(**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x160);
  plVar2 = *(long **)(in_x0 + 0x168);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
                    /* catch() { ... } // from try @ 00505ca0 with catch @ 00505c70 */
  GUIAnimation::AlphaAnimation(pGVar6,1.0,0.0,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
                    /* try { // try from 00505c8c to 00605c9f has its CatchHandler @ 00505cc4 */
  GUIView::RemoveAllAnimations(pGVar1);
  GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
                    /* try { // try from 00505ca0 to 00605cc7 has its CatchHandler @ 00505c70 */
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 00505c8c with catch @ 00505cc4 */
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = local_60[2];
    local_60[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 00505df4 with catch @ 00505d30 */
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


