/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00497574
 * Function: Caver::OnlineMenuView::AnimateOut
 * Signature: undefined __cdecl AnimateOut(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineMenuView::AnimateOut() */

void Caver::OnlineMenuView::AnimateOut(void)

{
  long lVar1;
  long *plVar2;
  long in_x0;
  Rectangle *in_x2;
  long lVar3;
  GUIView *this;
  long lVar4;
  ulong uVar5;
  Rectangle aRStack_78 [16];
  long local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(in_x0 + 0xf0);
  if (*(long *)(in_x0 + 0xf8) != lVar3) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      this = *(GUIView **)(lVar3 + lVar4);
      Rectangle::TranslatedRectangle((Vector2 *)(this + 0x74));
      GUIAnimation::FrameAnimation((GUIAnimation *)(this + 0x74),aRStack_78,in_x2,0.25);
      *(undefined1 *)(local_68 + 0xb8) = 0;
      GUIView::RemoveAllAnimations(this);
      GUIView::AddAnimation(this,(shared_ptr *)&local_68);
      plVar2 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar3 = local_60[1], local_60[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar3 = plVar2[2];
        plVar2[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      lVar3 = *(long *)(in_x0 + 0xf0);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 < (ulong)(*(long *)(in_x0 + 0xf8) - lVar3 >> 4));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


