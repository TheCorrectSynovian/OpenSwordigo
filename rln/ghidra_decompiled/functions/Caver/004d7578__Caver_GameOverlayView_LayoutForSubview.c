/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d7578
 * Function: Caver::GameOverlayView::LayoutForSubview
 * Signature: undefined __cdecl LayoutForSubview(string * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::LayoutForSubview(std::string const&, Caver::GUIView*) */

void Caver::GameOverlayView::LayoutForSubview(string *param_1,GUIView *param_2)

{
  long lVar1;
  Rectangle *in_x2;
  Rectangle *pRVar2;
  undefined8 *in_x8;
  long lVar3;
  float fVar4;
  Rectangle aRStack_68 [16];
  long local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 004d7580 to 005d75a7 has its CatchHandler @ 004d7550 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 004d756c with catch @ 004d75a4 */
  pRVar2 = in_x2;
  GUIViewLayout::SubviewWithIdentifier(*(string **)(param_1 + 0x278));
  LayoutBoundsForSubview((GameOverlayView *)param_1,(string *)param_2);
  if (local_58 == 0) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = *(float *)(local_58 + 0x6c);
  }
  GUIViewLayout::LayoutForViewWithFrameInBounds
            ((GUIViewLayout *)(in_x2 + 0x74),aRStack_68,pRVar2,fVar4);
  FUN_0066a6a8(*in_x8,param_2);
  if ((local_50 != (long *)0x0) && (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
                    /* catch() { ... } // from try @ 004d768c with catch @ 004d7620 */
    lVar3 = local_50[2];
    local_50[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


