/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0dd0
 * Function: Caver::GUIView::ConvertPointFromSubview
 * Signature: undefined __cdecl ConvertPointFromSubview(Vector2 * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ConvertPointFromSubview(Caver::Vector2 const&, Caver::GUIView const*) const */

void Caver::GUIView::ConvertPointFromSubview(Vector2 *param_1,GUIView *param_2)

{
  long in_x2;
  undefined8 *in_x8;
  
  *in_x8 = CONCAT44(((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                    (float)((ulong)*(undefined8 *)(in_x2 + 0x84) >> 0x20)) +
                    (float)((ulong)*(undefined8 *)(in_x2 + 0x74) >> 0x20),
                    ((float)*(undefined8 *)param_2 - (float)*(undefined8 *)(in_x2 + 0x84)) +
                    (float)*(undefined8 *)(in_x2 + 0x74));
  return;
}


