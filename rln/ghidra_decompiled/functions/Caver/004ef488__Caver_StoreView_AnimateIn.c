/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ef488
 * Function: Caver::StoreView::AnimateIn
 * Signature: undefined __cdecl AnimateIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreView::AnimateIn() */

void Caver::StoreView::AnimateIn(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  long *plVar4;
  GUIAnimation *in_x0;
  Rectangle *in_x2;
  long lVar5;
  GUIView *this;
  long lVar6;
  ulong uVar7;
  GUIAnimation aGStack_88 [16];
  long local_78;
  long *local_70;
  shared_ptr asStack_68 [8];
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  GUIAnimation::AlphaAnimation(in_x0,0.0,1.0,0.25);
  GUIView::RemoveAllAnimations((GUIView *)in_x0);
  GUIView::AddAnimation((GUIView *)in_x0,asStack_68);
  fVar3 = DAT_0068798c;
  fVar2 = DAT_00683f68;
  lVar5 = *(long *)(in_x0 + 0x140);
  if (*(long *)(in_x0 + 0x148) != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      this = *(GUIView **)(lVar5 + lVar6);
      Rectangle::TranslatedRectangle((Vector2 *)(this + 0x74));
      GUIAnimation::FrameAnimation(aGStack_88,(Rectangle *)(this + 0x74),in_x2,fVar2);
      *(float *)(local_78 + 0x58) = (float)(int)uVar7 * fVar3 + fVar3;
      GUIView::RemoveAllAnimations(this);
      GUIView::AddAnimation(this,(shared_ptr *)&local_78);
      plVar4 = local_70;
      if ((local_70 != (long *)0x0) &&
         (lVar5 = local_70[1], local_70[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*local_70 + 0x10))(local_70);
        lVar5 = plVar4[2];
        plVar4[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar5 = *(long *)(in_x0 + 0x140);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar7 < (ulong)(*(long *)(in_x0 + 0x148) - lVar5 >> 4));
  }
  if ((local_60 != (long *)0x0) && (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar5 = local_60[2];
    local_60[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


