/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00475368
 * Function: Caver::AchievementNotificationView::AnimateOutAfterDelay
 * Signature: undefined __cdecl AnimateOutAfterDelay(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementNotificationView::AnimateOutAfterDelay(float) */

void Caver::AchievementNotificationView::AnimateOutAfterDelay(float param_1)

{
  long lVar1;
  GUIView *in_x0;
  Rectangle *in_x2;
  long lVar2;
  long *plVar3;
  Rectangle aRStack_58 [16];
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Rectangle::TranslatedRectangle((Vector2 *)(in_x0 + 0x74));
  GUIAnimation::FrameAnimation((GUIAnimation *)(in_x0 + 0x74),aRStack_58,in_x2,0.5);
  *(float *)(local_48 + 0x58) = param_1;
  *(undefined1 *)(local_48 + 0xb9) = 1;
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  plVar3 = *(long **)(in_x0 + 0x138);
  *(long *)(in_x0 + 0x130) = local_48;
  *(long **)(in_x0 + 0x138) = local_40;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  GUIView::RemoveAllAnimations(in_x0);
  GUIView::AddAnimation(in_x0,(shared_ptr *)&local_48);
  if ((local_40 != (long *)0x0) && (lVar2 = local_40[1], local_40[1] = lVar2 + -1, lVar2 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar2 = local_40[2];
    local_40[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


