/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e6be0
 * Function: Caver::PurchaseView::AnimateIn
 * Signature: undefined __cdecl AnimateIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseView::AnimateIn() */

void Caver::PurchaseView::AnimateIn(void)

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
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 004e6c20 to 005e6c27 has its CatchHandler @ 004e6c60 */
  GUIAnimation::AlphaAnimation(in_x0,0.0,1.0,DAT_00683f68);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations((GUIView *)in_x0);
  GUIView::AddAnimation((GUIView *)in_x0,(shared_ptr *)&local_68);
  plVar2 = local_60;
                    /* catch() { ... } // from try @ 004e6b24 with catch @ 004e6c54 */
                    /* catch() { ... } // from try @ 004e6b78 with catch @ 004e6c58 */
                    /* catch() { ... } // from try @ 004e6bcc with catch @ 004e6c5c */
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 004e6c20 with catch @ 004e6c60 */
                    /* catch() { ... } // from try @ 004e6c7c with catch @ 004e6c68 */
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = plVar2[2];
                    /* try { // try from 004e6c78 to 005e6c7b has its CatchHandler @ 004e6c8c */
    plVar2[2] = lVar7 + -1;
                    /* try { // try from 004e6c7c to 005e6c9f has its CatchHandler @ 004e6c68 */
    if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 004e6c78 with catch @ 004e6c8c */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x118);
  plVar2 = *(long **)(in_x0 + 0x120);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
  GUIAnimation::FrameAnimation(aGStack_78,(Rectangle *)(pGVar1 + 0x74),in_x2,fVar4);
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
  pGVar1 = *(GUIView **)(in_x0 + 0xf0);
  plVar2 = *(long **)(in_x0 + 0xf8);
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
  lVar7 = *(long *)(in_x0 + 0x100);
  if (*(long *)(in_x0 + 0x108) != lVar7) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      pGVar1 = *(GUIView **)(lVar7 + lVar8);
      plVar2 = (long *)((undefined8 *)(lVar7 + lVar8))[1];
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 1;
      }
      Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
      GUIAnimation::FrameAnimation(aGStack_78,(Rectangle *)(pGVar1 + 0x74),in_x2,fVar4);
      *(undefined1 *)(local_68 + 0xb8) = 0;
      GUIView::RemoveAllAnimations(pGVar1);
      pGVar6 = (GUIAnimation *)GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
      plVar5 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
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
      lVar7 = *(long *)(in_x0 + 0x100);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar9 < (ulong)(*(long *)(in_x0 + 0x108) - lVar7 >> 4));
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x128);
  plVar2 = *(long **)(in_x0 + 0x130);
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
  pGVar1 = *(GUIView **)(in_x0 + 0x138);
  plVar2 = *(long **)(in_x0 + 0x140);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  GUIAnimation::ScaleAnimation(pGVar6,0.0,1.0,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  *(undefined4 *)(local_68 + 0x58) = 0x3e4ccccd;
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


