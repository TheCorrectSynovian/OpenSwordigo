/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0e34
 * Function: Caver::GUIView::ConvertRectFromSubviewUsingFrame
 * Signature: undefined __cdecl ConvertRectFromSubviewUsingFrame(Rectangle * param_1, GUIView * param_2, Rectangle * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ConvertRectFromSubviewUsingFrame(Caver::Rectangle const&, Caver::GUIView const*,
   Caver::Rectangle const&) const */

void Caver::GUIView::ConvertRectFromSubviewUsingFrame
               (Rectangle *param_1,GUIView *param_2,Rectangle *param_3)

{
  undefined8 *in_x3;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *in_x8 = CONCAT44(((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_3 + 0x84) >> 0x20)) +
                    (float)((ulong)*in_x3 >> 0x20),
                    ((float)*(undefined8 *)param_2 - (float)*(undefined8 *)(param_3 + 0x84)) +
                    (float)*in_x3);
  in_x8[1] = uVar1;
  return;
}


