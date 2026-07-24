/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0dec
 * Function: Caver::GUIView::ConvertRectToSubview
 * Signature: undefined __cdecl ConvertRectToSubview(Rectangle * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ConvertRectToSubview(Caver::Rectangle const&, Caver::GUIView const*) const */

void Caver::GUIView::ConvertRectToSubview(Rectangle *param_1,GUIView *param_2)

{
  long in_x2;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *in_x8 = CONCAT44(((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                    (float)((ulong)*(undefined8 *)(in_x2 + 0x74) >> 0x20)) +
                    (float)((ulong)*(undefined8 *)(in_x2 + 0x84) >> 0x20),
                    ((float)*(undefined8 *)param_2 - (float)*(undefined8 *)(in_x2 + 0x74)) +
                    (float)*(undefined8 *)(in_x2 + 0x84));
  in_x8[1] = uVar1;
  return;
}


