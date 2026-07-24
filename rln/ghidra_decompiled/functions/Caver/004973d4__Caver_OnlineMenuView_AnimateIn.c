/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004973d4
 * Function: Caver::OnlineMenuView::AnimateIn
 * Signature: undefined __cdecl AnimateIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineMenuView::AnimateIn() */

void Caver::OnlineMenuView::AnimateIn(void)

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
  GUIAnimation aGStack_78 [16];
  long local_68;
  long *local_60;
  long local_58;
  
  fVar2 = DAT_0068798c;
                    /* try { // try from 004973f0 to 005973fb has its CatchHandler @ 004974f8 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(in_x0 + 0xf0);
  if (*(long *)(in_x0 + 0xf8) != lVar4) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      this = *(GUIView **)(lVar4 + lVar5);
                    /* try { // try from 0049743c to 00597447 has its CatchHandler @ 004974c8 */
      Rectangle::TranslatedRectangle((Vector2 *)(this + 0x74));
      GUIAnimation::FrameAnimation(aGStack_78,(Rectangle *)(this + 0x74),in_x2,0.25);
                    /* try { // try from 00497468 to 0059746b has its CatchHandler @ 004974c4 */
                    /* try { // try from 0049746c to 005974eb has its CatchHandler @ 00497398 */
      *(float *)(local_68 + 0x58) = (float)uVar6 * fVar2;
      GUIView::RemoveAllAnimations(this);
      GUIView::AddAnimation(this,(shared_ptr *)&local_68);
      plVar3 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar4 = local_60[1], local_60[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar4 = plVar3[2];
        plVar3[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
                    /* catch() { ... } // from try @ 00497468 with catch @ 004974c4 */
                    /* catch() { ... } // from try @ 0049743c with catch @ 004974c8 */
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      lVar4 = *(long *)(in_x0 + 0xf0);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < (ulong)(*(long *)(in_x0 + 0xf8) - lVar4 >> 4));
  }
                    /* try { // try from 004974ec to 0059751b has its CatchHandler @ 00497524 */
                    /* catch() { ... } // from try @ 004973f0 with catch @ 004974f8 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


