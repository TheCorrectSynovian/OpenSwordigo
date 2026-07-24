/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00484358
 * Function: Caver::OfflineAchievementsView::AnimateOut
 * Signature: undefined __cdecl AnimateOut(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsView::AnimateOut() */

void Caver::OfflineAchievementsView::AnimateOut(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  long *plVar4;
  GUIAnimation *in_x0;
  GUIAnimation *this;
  Rectangle *in_x2;
  long lVar5;
  GUIView *pGVar6;
  long lVar7;
  ulong uVar8;
  Rectangle aRStack_78 [16];
  long local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = in_x0;
  if (*(long *)(in_x0 + 0xf0) == 0) {
LAB_004843fc:
    if (*(long *)(in_x0 + 0x148) == 0) goto LAB_004844a8;
LAB_00484404:
    GUIAnimation::AlphaAnimation(this,1.0,0.0,DAT_0068798c);
    *(undefined1 *)(local_68 + 0xb8) = 0;
    pGVar6 = *(GUIView **)(in_x0 + 0x148);
    GUIView::RemoveAllAnimations(pGVar6);
    this = (GUIAnimation *)GUIView::AddAnimation(pGVar6,(shared_ptr *)&local_68);
    plVar4 = local_60;
                    /* catch() { ... } // from try @ 00484218 with catch @ 00484440 */
    if ((local_60 == (long *)0x0) ||
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 != 0)) goto LAB_004844a8;
    this = (GUIAnimation *)(**(code **)(*local_60 + 0x10))(local_60);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_004844a8;
                    /* catch() { ... } // from try @ 004841f4 with catch @ 00484478 */
                    /* catch() { ... } // from try @ 00484190 with catch @ 0048447c */
    this = (GUIAnimation *)(**(code **)(*plVar4 + 0x18))(plVar4);
    lVar5 = *(long *)(in_x0 + 0x158);
  }
  else {
    GUIAnimation::AlphaAnimation(in_x0,1.0,0.0,DAT_0068798c);
    *(undefined1 *)(local_68 + 0xb8) = 0;
    pGVar6 = *(GUIView **)(in_x0 + 0xf0);
    GUIView::RemoveAllAnimations(pGVar6);
    this = (GUIAnimation *)GUIView::AddAnimation(pGVar6,(shared_ptr *)&local_68);
    plVar4 = local_60;
    if ((local_60 == (long *)0x0) ||
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 != 0)) goto LAB_004843fc;
                    /* catch() { ... } // from try @ 0048424c with catch @ 004843e4 */
    this = (GUIAnimation *)(**(code **)(*local_60 + 0x10))(local_60);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_004843fc;
    this = (GUIAnimation *)(**(code **)(*plVar4 + 0x18))(plVar4);
    if (*(long *)(in_x0 + 0x148) != 0) goto LAB_00484404;
LAB_004844a8:
    lVar5 = *(long *)(in_x0 + 0x158);
  }
  if (lVar5 != 0) {
    GUIAnimation::AlphaAnimation(this,1.0,0.0,DAT_0068798c);
    *(undefined1 *)(local_68 + 0xb8) = 0;
    pGVar6 = *(GUIView **)(in_x0 + 0x158);
    GUIView::RemoveAllAnimations(pGVar6);
                    /* catch() { ... } // from try @ 0048415c with catch @ 004844e0 */
    GUIView::AddAnimation(pGVar6,(shared_ptr *)&local_68);
    plVar4 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar4[2];
      plVar4[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        lVar5 = *(long *)(in_x0 + 0x100);
        goto joined_r0x004845fc;
      }
    }
  }
  lVar5 = *(long *)(in_x0 + 0x100);
joined_r0x004845fc:
  if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 00484138 with catch @ 0048454c */
    Rectangle::TranslatedRectangle((Vector2 *)(lVar5 + 0x74));
    GUIAnimation::FrameAnimation((GUIAnimation *)(lVar5 + 0x74),aRStack_78,in_x2,DAT_00684318);
    *(undefined4 *)(local_68 + 0x58) = 0;
    *(undefined1 *)(local_68 + 0xb8) = 0;
    pGVar6 = *(GUIView **)(in_x0 + 0x100);
    GUIView::RemoveAllAnimations(pGVar6);
    GUIView::AddAnimation(pGVar6,(shared_ptr *)&local_68);
    plVar4 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar4[2];
      plVar4[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  fVar3 = DAT_00688b50;
  fVar2 = DAT_00684318;
  lVar5 = *(long *)(in_x0 + 0x130);
  if (*(long *)(in_x0 + 0x138) != lVar5) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      pGVar6 = *(GUIView **)(lVar5 + lVar7);
      Rectangle::TranslatedRectangle((Vector2 *)(pGVar6 + 0x74));
      GUIAnimation::FrameAnimation((GUIAnimation *)(pGVar6 + 0x74),aRStack_78,in_x2,fVar2);
      *(float *)(local_68 + 0x58) = (float)(int)uVar8 * fVar3 + fVar3;
      *(undefined1 *)(local_68 + 0xb8) = 0;
      GUIView::RemoveAllAnimations(pGVar6);
      GUIView::AddAnimation(pGVar6,(shared_ptr *)&local_68);
      plVar4 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
                    /* try { // try from 004846cc to 00584707 has its CatchHandler @ 004846cc
                       catch() { ... } // from try @ 004846cc with catch @ 004846cc
                       catch() { ... } // from try @ 0048470c with catch @ 004846cc */
        lVar5 = plVar4[2];
        plVar4[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar5 = *(long *)(in_x0 + 0x130);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar8 < (ulong)(*(long *)(in_x0 + 0x138) - lVar5 >> 4));
  }
                    /* try { // try from 00484708 to 0058470b has its CatchHandler @ 0048475c */
                    /* try { // try from 0048470c to 0058476f has its CatchHandler @ 004846cc */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


