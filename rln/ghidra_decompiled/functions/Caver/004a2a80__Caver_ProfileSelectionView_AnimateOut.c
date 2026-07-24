/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a2a80
 * Function: Caver::ProfileSelectionView::AnimateOut
 * Signature: undefined __cdecl AnimateOut(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionView::AnimateOut() */

void Caver::ProfileSelectionView::AnimateOut(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  long *plVar4;
  long in_x0;
  Rectangle *in_x2;
  int iVar5;
  long lVar6;
  long lVar7;
  Vector2 *this;
  GUIView *this_00;
  ProfilePanelView *this_01;
  long lVar8;
  Rectangle aRStack_78 [16];
  long local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar5 = *(int *)(in_x0 + 0x110);
  if (0 < iVar5) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      ProfilePanelView::AnimateOut(*(ProfilePanelView **)(*(long *)(in_x0 + 0x118) + lVar7));
      iVar5 = *(int *)(in_x0 + 0x110);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
                    /* catch() { ... } // from try @ 004a2158 with catch @ 004a2adc */
    } while (lVar8 < iVar5);
  }
  if (*(long *)(in_x0 + 0x120) != 0) {
    this = (Vector2 *)(*(long *)(in_x0 + 0x120) + 0x74);
    Rectangle::TranslatedRectangle(this);
    GUIAnimation::FrameAnimation((GUIAnimation *)this,aRStack_78,in_x2,DAT_00683f68);
    *(undefined4 *)(local_68 + 0x58) = 0;
    *(undefined1 *)(local_68 + 0xb8) = 0;
    this_00 = *(GUIView **)(in_x0 + 0x120);
    GUIView::RemoveAllAnimations(this_00);
    GUIView::AddAnimation(this_00,(shared_ptr *)&local_68);
    plVar4 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar8 = local_60[1], local_60[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar8 = plVar4[2];
      plVar4[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    iVar5 = *(int *)(in_x0 + 0x110);
  }
  fVar3 = DAT_00688b50;
  fVar2 = DAT_00683f68;
  if (0 < iVar5) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      this_01 = *(ProfilePanelView **)(*(long *)(in_x0 + 0x118) + lVar7);
      ProfilePanelView::AnimateIn(this_01);
      Rectangle::TranslatedRectangle((Vector2 *)(this_01 + 0x74));
      GUIAnimation::FrameAnimation((GUIAnimation *)(this_01 + 0x74),aRStack_78,in_x2,fVar2);
      *(float *)(local_68 + 0x58) = (float)(int)lVar8 * fVar3 + fVar3;
      *(undefined1 *)(local_68 + 0xb8) = 0;
      GUIView::RemoveAllAnimations((GUIView *)this_01);
      GUIView::AddAnimation((GUIView *)this_01,(shared_ptr *)&local_68);
      plVar4 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar6 = plVar4[2];
        plVar4[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < *(int *)(in_x0 + 0x110));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


