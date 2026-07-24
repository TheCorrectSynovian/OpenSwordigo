/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a27cc
 * Function: Caver::ProfileSelectionView::AnimateIn
 * Signature: undefined __cdecl AnimateIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionView::AnimateIn() */

void Caver::ProfileSelectionView::AnimateIn(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  long *plVar4;
  long in_x0;
  Rectangle *in_x2;
  long lVar5;
  long lVar6;
  GUIView *this;
  ProfilePanelView *this_00;
  long lVar7;
  GUIAnimation aGStack_78 [16];
  long local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(in_x0 + 0x120) != 0) {
                    /* catch() { ... } // from try @ 004a244c with catch @ 004a2808 */
    Rectangle::TranslatedRectangle((Vector2 *)(*(long *)(in_x0 + 0x120) + 0x74));
                    /* catch() { ... } // from try @ 004a2428 with catch @ 004a2840 */
    GUIAnimation::FrameAnimation
              (aGStack_78,(Rectangle *)(*(long *)(in_x0 + 0x120) + 0x74),in_x2,DAT_00683f68);
                    /* catch() { ... } // from try @ 004a23cc with catch @ 004a2844 */
    *(undefined4 *)(local_68 + 0x58) = 0;
    this = *(GUIView **)(in_x0 + 0x120);
    GUIView::RemoveAllAnimations(this);
    GUIView::AddAnimation(this,(shared_ptr *)&local_68);
    plVar4 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar4[2];
      plVar4[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 004a23a0 with catch @ 004a28a0 */
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  fVar3 = DAT_0068798c;
  fVar2 = DAT_00683f68;
  if (0 < *(int *)(in_x0 + 0x110)) {
    lVar7 = 0;
    lVar5 = 0;
    do {
      this_00 = *(ProfilePanelView **)(*(long *)(in_x0 + 0x118) + lVar7);
                    /* catch() { ... } // from try @ 004a237c with catch @ 004a28d8 */
                    /* catch() { ... } // from try @ 004a2320 with catch @ 004a28dc */
      ProfilePanelView::AnimateIn(this_00);
      Rectangle::TranslatedRectangle((Vector2 *)(this_00 + 0x74));
      GUIAnimation::FrameAnimation(aGStack_78,(Rectangle *)(this_00 + 0x74),in_x2,fVar2);
      *(float *)(local_68 + 0x58) = (float)(int)lVar5 * fVar3 + fVar3;
                    /* catch() { ... } // from try @ 004a22ec with catch @ 004a2938 */
      GUIView::RemoveAllAnimations((GUIView *)this_00);
      GUIView::AddAnimation((GUIView *)this_00,(shared_ptr *)&local_68);
      plVar4 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004a22c8 with catch @ 004a2970 */
        (**(code **)(*local_60 + 0x10))(local_60);
                    /* catch() { ... } // from try @ 004a226c with catch @ 004a2974 */
        lVar6 = plVar4[2];
        plVar4[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar5 < *(int *)(in_x0 + 0x110));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 004a2238 with catch @ 004a29d0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


