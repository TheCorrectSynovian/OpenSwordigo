/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00483dd0
 * Function: Caver::OfflineAchievementsView::AnimateIn
 * Signature: undefined __cdecl AnimateIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsView::AnimateIn() */

void Caver::OfflineAchievementsView::AnimateIn(void)

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
  GUIAnimation aGStack_78 [16];
  long local_68;
  long *local_60;
  long local_58;
  
                    /* try { // try from 00483de8 to 00583deb has its CatchHandler @ 00483e28 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = in_x0;
  if (*(long *)(in_x0 + 0xf0) == 0) {
LAB_00483e7c:
    if (*(long *)(in_x0 + 0x148) == 0) goto LAB_00483f30;
LAB_00483e84:
    GUIAnimation::AlphaAnimation(this,0.0,1.0,DAT_00683484);
    *(undefined4 *)(local_68 + 0x58) = 0x3ecccccd;
    pGVar6 = *(GUIView **)(in_x0 + 0x148);
    GUIView::RemoveAllAnimations(pGVar6);
    this = (GUIAnimation *)GUIView::AddAnimation(pGVar6,(shared_ptr *)&local_68);
    plVar4 = local_60;
    if ((local_60 == (long *)0x0) ||
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 != 0)) goto LAB_00483f30;
    this = (GUIAnimation *)(**(code **)(*local_60 + 0x10))(local_60);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_00483f30;
    this = (GUIAnimation *)(**(code **)(*plVar4 + 0x18))(plVar4);
    lVar5 = *(long *)(in_x0 + 0x158);
  }
  else {
                    /* try { // try from 00483e0c to 00583e0f has its CatchHandler @ 00483e20 */
                    /* try { // try from 00483e10 to 00583e17 has its CatchHandler @ 00483e64 */
                    /* try { // try from 00483e18 to 00583e4b has its CatchHandler @ 004839e0 */
    GUIAnimation::AlphaAnimation(in_x0,0.0,1.0,DAT_00683484);
                    /* catch() { ... } // from try @ 00483e0c with catch @ 00483e20 */
                    /* catch() { ... } // from try @ 00483de8 with catch @ 00483e28 */
    *(undefined4 *)(local_68 + 0x58) = 0x3ecccccd;
    pGVar6 = *(GUIView **)(in_x0 + 0xf0);
    GUIView::RemoveAllAnimations(pGVar6);
    this = (GUIAnimation *)GUIView::AddAnimation(pGVar6,(shared_ptr *)&local_68);
    plVar4 = local_60;
                    /* try { // try from 00483e4c to 00583e5b has its CatchHandler @ 00483e60 */
    if ((local_60 == (long *)0x0) ||
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 != 0)) goto LAB_00483e7c;
                    /* catch() { ... } // from try @ 00483e4c with catch @ 00483e60 */
                    /* catch() { ... } // from try @ 00483d68 with catch @ 00483e64
                       catch() { ... } // from try @ 00483e10 with catch @ 00483e64 */
    this = (GUIAnimation *)(**(code **)(*local_60 + 0x10))(local_60);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_00483e7c;
    this = (GUIAnimation *)(**(code **)(*plVar4 + 0x18))(plVar4);
    if (*(long *)(in_x0 + 0x148) != 0) goto LAB_00483e84;
LAB_00483f30:
    lVar5 = *(long *)(in_x0 + 0x158);
  }
  if (lVar5 != 0) {
    GUIAnimation::AlphaAnimation(this,0.0,1.0,DAT_00683484);
    *(undefined4 *)(local_68 + 0x58) = 0x3ecccccd;
    pGVar6 = *(GUIView **)(in_x0 + 0x158);
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
        lVar5 = *(long *)(in_x0 + 0x100);
        goto joined_r0x00484088;
      }
    }
  }
  lVar5 = *(long *)(in_x0 + 0x100);
joined_r0x00484088:
  if (lVar5 != 0) {
    Rectangle::TranslatedRectangle((Vector2 *)(lVar5 + 0x74));
    GUIAnimation::FrameAnimation
              (aGStack_78,(Rectangle *)(*(long *)(in_x0 + 0x100) + 0x74),in_x2,DAT_00683f68);
    *(undefined4 *)(local_68 + 0x58) = 0;
    pGVar6 = *(GUIView **)(in_x0 + 0x100);
    GUIView::RemoveAllAnimations(pGVar6);
    GUIView::AddAnimation(pGVar6,(shared_ptr *)&local_68);
    plVar4 = local_60;
                    /* try { // try from 00484030 to 005840c3 has its CatchHandler @ 00484030
                       catch() { ... } // from try @ 00484030 with catch @ 00484030
                       catch() { ... } // from try @ 004840c8 with catch @ 00484030 */
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
  fVar3 = DAT_0068798c;
  fVar2 = DAT_00683f68;
  lVar5 = *(long *)(in_x0 + 0x130);
  if (*(long *)(in_x0 + 0x138) != lVar5) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      pGVar6 = *(GUIView **)(lVar5 + lVar7);
                    /* try { // try from 004840c4 to 005840c7 has its CatchHandler @ 004840f8 */
                    /* try { // try from 004840c8 to 0058410b has its CatchHandler @ 00484030 */
      Rectangle::TranslatedRectangle((Vector2 *)(pGVar6 + 0x74));
                    /* catch() { ... } // from try @ 004840c4 with catch @ 004840f8 */
      GUIAnimation::FrameAnimation(aGStack_78,(Rectangle *)(pGVar6 + 0x74),in_x2,fVar2);
                    /* try { // try from 0048410c to 00584137 has its CatchHandler @ 0048410c
                       catch() { ... } // from try @ 0048410c with catch @ 0048410c
                       catch() { ... } // from try @ 00484288 with catch @ 0048410c */
      *(float *)(local_68 + 0x58) = (float)(int)uVar8 * fVar3 + fVar3;
      GUIView::RemoveAllAnimations(pGVar6);
      GUIView::AddAnimation(pGVar6,(shared_ptr *)&local_68);
      plVar4 = local_60;
                    /* try { // try from 00484138 to 0058414b has its CatchHandler @ 0048454c */
      if ((local_60 != (long *)0x0) &&
         (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar5 = plVar4[2];
                    /* try { // try from 0048415c to 00584167 has its CatchHandler @ 004844e0 */
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
                    /* try { // try from 00484190 to 005841cb has its CatchHandler @ 0048447c */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


