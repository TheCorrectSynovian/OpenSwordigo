/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059c970
 * Function: Caver::GUIScrollView::ConvertRectFromSubviewUsingFrame
 * Signature: undefined __cdecl ConvertRectFromSubviewUsingFrame(Rectangle * param_1, GUIView * param_2, Rectangle * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::ConvertRectFromSubviewUsingFrame(Caver::Rectangle const&, Caver::GUIView
   const*, Caver::Rectangle const&) const */

void Caver::GUIScrollView::ConvertRectFromSubviewUsingFrame
               (Rectangle *param_1,GUIView *param_2,Rectangle *param_3)

{
  long lVar1;
  Vector2 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GUIView::ConvertRectFromSubviewUsingFrame(param_1,param_2,param_3);
  Rectangle::TranslatedRectangle(aVStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


