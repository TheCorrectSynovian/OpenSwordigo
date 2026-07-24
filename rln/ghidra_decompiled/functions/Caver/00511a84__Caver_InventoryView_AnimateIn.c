/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00511a84
 * Function: Caver::InventoryView::AnimateIn
 * Signature: undefined __cdecl AnimateIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryView::AnimateIn() */

void Caver::InventoryView::AnimateIn(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  long *plVar4;
  long in_x0;
  Rectangle *in_x2;
  long lVar5;
  GUIView *pGVar6;
  long lVar7;
  long lVar8;
  GUIAnimation aGStack_78 [16];
  long local_68;
  long *local_60;
  long local_58;
  
  fVar3 = DAT_0068798c;
  fVar2 = DAT_00683f68;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(in_x0 + 0x128)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      Rectangle::TranslatedRectangle
                ((Vector2 *)(*(long *)(*(long *)(in_x0 + 0x130) + lVar7) + 0x74));
      GUIAnimation::FrameAnimation
                (aGStack_78,(Rectangle *)(*(long *)(*(long *)(in_x0 + 0x130) + lVar7) + 0x74),in_x2,
                 fVar2);
      *(float *)(local_68 + 0x58) = (float)(int)lVar8 * fVar3;
      pGVar6 = *(GUIView **)(*(long *)(in_x0 + 0x130) + lVar7);
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
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < *(int *)(in_x0 + 0x128));
  }
  if (*(long *)(in_x0 + 0x138) != 0) {
    Rectangle::TranslatedRectangle((Vector2 *)(*(long *)(in_x0 + 0x138) + 0x74));
    GUIAnimation::FrameAnimation
              (aGStack_78,(Rectangle *)(*(long *)(in_x0 + 0x138) + 0x74),in_x2,DAT_00683f68);
    *(undefined4 *)(local_68 + 0x58) = 0x3e99999a;
    pGVar6 = *(GUIView **)(in_x0 + 0x138);
    GUIView::RemoveAllAnimations(pGVar6);
    GUIView::AddAnimation(pGVar6,(shared_ptr *)&local_68);
    if ((local_60 != (long *)0x0) &&
       (lVar8 = local_60[1], local_60[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar8 = local_60[2];
      local_60[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))(local_60);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


