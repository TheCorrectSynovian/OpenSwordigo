/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e7534
 * Function: Caver::PurchaseView::AnimateOut
 * Signature: undefined __cdecl AnimateOut(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseView::AnimateOut() */

void Caver::PurchaseView::AnimateOut(void)

{
  GUIView *pGVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  long *plVar5;
  GUIAnimation *in_x0;
  GUIAnimation *this;
  Rectangle *in_x2;
  long lVar6;
  long lVar7;
  ulong uVar8;
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
  GUIView::AddAnimation((GUIView *)in_x0,(shared_ptr *)&local_68);
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) && (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar6 = plVar2[2];
    plVar2[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x118);
  plVar2 = *(long **)(in_x0 + 0x120);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
  GUIAnimation::FrameAnimation((GUIAnimation *)(pGVar1 + 0x74),aRStack_78,in_x2,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations(pGVar1);
  GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) && (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar6 = plVar5[2];
    plVar5[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar6 = plVar2[1], plVar2[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar6 = plVar2[2];
    plVar2[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar1 = *(GUIView **)(in_x0 + 0xf0);
  plVar2 = *(long **)(in_x0 + 0xf8);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
  GUIAnimation::FrameAnimation((GUIAnimation *)(pGVar1 + 0x74),aRStack_78,in_x2,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations(pGVar1);
  GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) && (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar6 = plVar5[2];
    plVar5[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar6 = plVar2[1], plVar2[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar6 = plVar2[2];
    plVar2[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  lVar6 = *(long *)(in_x0 + 0x100);
  if (*(long *)(in_x0 + 0x108) != lVar6) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      pGVar1 = *(GUIView **)(lVar6 + lVar7);
      plVar2 = (long *)((undefined8 *)(lVar6 + lVar7))[1];
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 1;
      }
      Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
      GUIAnimation::FrameAnimation((GUIAnimation *)(pGVar1 + 0x74),aRStack_78,in_x2,fVar4);
      *(undefined1 *)(local_68 + 0xb8) = 0;
      GUIView::RemoveAllAnimations(pGVar1);
      GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
      plVar5 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar6 = plVar5[2];
        plVar5[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if ((plVar2 != (long *)0x0) && (lVar6 = plVar2[1], plVar2[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar6 = plVar2[2];
        plVar2[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      lVar6 = *(long *)(in_x0 + 0x100);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar8 < (ulong)(*(long *)(in_x0 + 0x108) - lVar6 >> 4));
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x128);
  plVar2 = *(long **)(in_x0 + 0x130);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  Rectangle::TranslatedRectangle((Vector2 *)(pGVar1 + 0x74));
  GUIAnimation::FrameAnimation((GUIAnimation *)(pGVar1 + 0x74),aRStack_78,in_x2,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations(pGVar1);
  this = (GUIAnimation *)GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) && (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    this = (GUIAnimation *)(**(code **)(*local_60 + 0x10))(local_60);
    lVar6 = plVar5[2];
    plVar5[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      this = (GUIAnimation *)(**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar6 = plVar2[1], plVar2[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    this = (GUIAnimation *)(**(code **)(*plVar2 + 0x10))(plVar2);
    lVar6 = plVar2[2];
    plVar2[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      this = (GUIAnimation *)(**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar1 = *(GUIView **)(in_x0 + 0x138);
  plVar2 = *(long **)(in_x0 + 0x140);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  GUIAnimation::ScaleAnimation(this,1.0,0.0,fVar4);
  *(undefined1 *)(local_68 + 0xb8) = 0;
  GUIView::RemoveAllAnimations(pGVar1);
  GUIView::AddAnimation(pGVar1,(shared_ptr *)&local_68);
  if ((local_60 != (long *)0x0) && (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar6 = local_60[2];
    local_60[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar6 = plVar2[1], plVar2[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar6 = plVar2[2];
    plVar2[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


