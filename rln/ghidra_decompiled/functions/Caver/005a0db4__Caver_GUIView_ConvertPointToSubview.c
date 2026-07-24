/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0db4
 * Function: Caver::GUIView::ConvertPointToSubview
 * Signature: undefined __cdecl ConvertPointToSubview(Vector2 * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ConvertPointToSubview(Caver::Vector2 const&, Caver::GUIView const*) const */

void Caver::GUIView::ConvertPointToSubview(Vector2 *param_1,GUIView *param_2)

{
  long in_x2;
  undefined8 *in_x8;
  
  *in_x8 = CONCAT44(((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                    (float)((ulong)*(undefined8 *)(in_x2 + 0x74) >> 0x20)) +
                    (float)((ulong)*(undefined8 *)(in_x2 + 0x84) >> 0x20),
                    ((float)*(undefined8 *)param_2 - (float)*(undefined8 *)(in_x2 + 0x74)) +
                    (float)*(undefined8 *)(in_x2 + 0x84));
  return;
}


