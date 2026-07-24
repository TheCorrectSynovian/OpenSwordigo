/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00504a8c
 * Function: Caver::GuidePurchaseView::AnimateIn
 * Signature: undefined __cdecl AnimateIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseView::AnimateIn() */

void Caver::GuidePurchaseView::AnimateIn(void)

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
  GUIAnimation aGStack_78 [16];
  long local_68;
  long *local_60;
  long local_58;
  
  fVar4 = DAT_00683f68;
                    /* catch() { ... } // from try @ 00504a80 with catch @ 00504a90 */
                    /* try { // try from 00504a94 to 00604a9b has its CatchHandler @ 00504aa4 */
                    /* try { // try from 00504a9c to 00604aa7 has its CatchHandler @ 00504a5c */
                    /* catch() { ... } // from try @ 00504a94 with catch @ 00504aa4 */
                    /* try { // try from 00504aa8 to 00604aef has its CatchHandler @ 00504aa8
                       catch(type#1 @ 00000000) { ... } // from try @ 00504aa8 with catch @ 00504aa8
                       catch(type#1 @ 00000000) { ... } // from try @ 00504b0c with catch @ 00504aa8
                       catch(type#1 @ 00000000) { ... } // from try @ 00504bc8 with catch @ 00504aa8
                        */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  GUIAnimation::AlphaAnimation(in_x0,0.0,1.0,DAT_00683f68);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations((GUIView *)in_x0);
                    /* try { // try from 00504af0 to 00604b0b has its CatchHandler @ 00504bbc */
  GUIView::AddAnimation((GUIView *)in_x0,(shared_ptr *)&local_68);
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
                    /* try { // try from 00504b0c to 00604bbf has its CatchHandler @ 00504aa8 */
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
  GUIAnimation::FrameAnimation(aGStack_78,(Rectangle *)(pGVar1 + 0x74),in_x2,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations(pGVar1);
  GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  plVar5 = local_60;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00504af0 with catch @ 00504bbc
                        */
                    /* try { // try from 00504bc0 to 00604bc7 has its CatchHandler @ 00504bd0 */
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
                    /* try { // try from 00504bc8 to 00604bd3 has its CatchHandler @ 00504aa8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00504bc0 with catch @ 00504bd0
                        */
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = plVar5[2];
    plVar5[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 00504c10 with catch @ 00504bec */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 00504c0c to 00604c0f has its CatchHandler @ 00504c20 */
                    /* try { // try from 00504c10 to 00604c33 has its CatchHandler @ 00504bec */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
                    /* catch() { ... } // from try @ 00504c0c with catch @ 00504c20 */
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
  GUIAnimation::FrameAnimation(aGStack_78,(Rectangle *)(pGVar1 + 0x74),in_x2,fVar4);
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
  lVar7 = *(long *)(in_x0 + 0x108);
  if (*(long *)(in_x0 + 0x110) != lVar7) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      pGVar1 = *(GUIView **)(lVar7 + lVar8);
      plVar2 = (long *)((undefined8 *)(lVar7 + lVar8))[1];
                    /* catch() { ... } // from try @ 00505120 with catch @ 005050f0 */
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 1;
      }
                    /* try { // try from 0050510c to 0060511f has its CatchHandler @ 00505144 */
                    /* try { // try from 00505120 to 00605147 has its CatchHandler @ 005050f0 */
      Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
      GUIAnimation::FrameAnimation(aGStack_78,(Rectangle *)(pGVar1 + 0x74),in_x2,fVar4);
                    /* catch() { ... } // from try @ 0050510c with catch @ 00505144 */
      *(undefined1 *)(local_68 + 0xb8) = 0;
      GUIView::RemoveAllAnimations(pGVar1);
      pGVar6 = (GUIAnimation *)GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
      plVar5 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005051c4 with catch @ 0050517c */
        pGVar6 = (GUIAnimation *)(**(code **)(*local_60 + 0x10))(local_60);
        lVar7 = plVar5[2];
        plVar5[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          pGVar6 = (GUIAnimation *)(**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
                    /* try { // try from 005051a8 to 006051ab has its CatchHandler @ 005051b8 */
                    /* catch() { ... } // from try @ 005051a8 with catch @ 005051b8 */
      if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 005051bc to 006051c3 has its CatchHandler @ 005051cc */
                    /* try { // try from 005051c4 to 006051cf has its CatchHandler @ 0050517c */
        pGVar6 = (GUIAnimation *)(**(code **)(*plVar2 + 0x10))(plVar2);
                    /* catch() { ... } // from try @ 005051bc with catch @ 005051cc */
        lVar7 = plVar2[2];
                    /* try { // try from 005051d0 to 00605247 has its CatchHandler @ 005051d0
                       catch() { ... } // from try @ 005051d0 with catch @ 005051d0
                       catch() { ... } // from try @ 0050524c with catch @ 005051d0
                       catch() { ... } // from try @ 005052a0 with catch @ 005051d0
                       catch() { ... } // from try @ 00505334 with catch @ 005051d0
                       catch() { ... } // from try @ 00505390 with catch @ 005051d0 */
        plVar2[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          pGVar6 = (GUIAnimation *)(**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      lVar7 = *(long *)(in_x0 + 0x108);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar9 < (ulong)(*(long *)(in_x0 + 0x110) - lVar7 >> 4));
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x130);
  plVar2 = *(long **)(in_x0 + 0x138);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  GUIAnimation::ScaleAnimation(pGVar6,0.0,1.0,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  *(undefined4 *)(local_68 + 0x58) = 0x3e4ccccd;
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
  GUIAnimation::ScaleAnimation(pGVar6,0.0,1.0,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  *(undefined4 *)(local_68 + 0x58) = 0x3e4ccccd;
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
  pGVar1 = *(GUIView **)(in_x0 + 0x150);
  plVar2 = *(long **)(in_x0 + 0x158);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  GUIAnimation::AlphaAnimation(pGVar6,0.0,1.0,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  *(undefined4 *)(local_68 + 0x58) = 0x3f000000;
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
  GUIAnimation::AlphaAnimation(pGVar6,0.0,1.0,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  *(undefined4 *)(local_68 + 0x58) = 0x3f000000;
  GUIView::RemoveAllAnimations(pGVar1);
  GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
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
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


