/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00493f74
 * Function: Caver::MainMenuView::AnimateButtonsIn
 * Signature: undefined __cdecl AnimateButtonsIn(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::AnimateButtonsIn(float) */

void Caver::MainMenuView::AnimateButtonsIn(float param_1)

{
  long lVar1;
  float fVar2;
  long *plVar3;
  long in_x0;
  Rectangle *in_x2;
  long lVar4;
  GUIView *this;
  long lVar5;
  ulong uVar6;
  GUIAnimation aGStack_88 [16];
  long local_78;
  long *local_70;
  long local_68;
  
  fVar2 = DAT_0068798c;
                    /* catch() { ... } // from try @ 00493ea4 with catch @ 00493f80 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(in_x0 + 0x178);
  if (*(long *)(in_x0 + 0x180) != lVar4) {
                    /* catch() { ... } // from try @ 00493e90 with catch @ 00493fb8 */
    lVar5 = 0;
    uVar6 = 0;
    do {
                    /* catch() { ... } // from try @ 00493e60 with catch @ 00493fc8 */
      this = *(GUIView **)(lVar4 + lVar5);
      Rectangle::TranslatedRectangle((Vector2 *)(this + 0x74));
      GUIAnimation::FrameAnimation(aGStack_88,(Rectangle *)(this + 0x74),in_x2,0.25);
      *(float *)(local_78 + 0x58) = (float)uVar6 * fVar2 + param_1;
      GUIView::RemoveAllAnimations(this);
      GUIView::AddAnimation(this,(shared_ptr *)&local_78);
      plVar3 = local_70;
                    /* catch() { ... } // from try @ 00493e4c with catch @ 0049403c */
      if ((local_70 != (long *)0x0) &&
         (lVar4 = local_70[1], local_70[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 00494060 to 005940bf has its CatchHandler @ 004940c8 */
        (**(code **)(*local_70 + 0x10))(local_70);
        lVar4 = plVar3[2];
        plVar3[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      lVar4 = *(long *)(in_x0 + 0x178);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < (ulong)(*(long *)(in_x0 + 0x180) - lVar4 >> 4));
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 004940c0 to 005940cb has its CatchHandler @ 00493db4 */
                    /* catch() { ... } // from try @ 00494060 with catch @ 004940c8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


