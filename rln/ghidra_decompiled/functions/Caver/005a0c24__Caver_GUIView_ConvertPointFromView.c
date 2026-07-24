/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0c24
 * Function: Caver::GUIView::ConvertPointFromView
 * Signature: undefined __cdecl ConvertPointFromView(Vector2 * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ConvertPointFromView(Caver::Vector2 const&, Caver::GUIView*) const */

void Caver::GUIView::ConvertPointFromView(Vector2 *param_1,GUIView *param_2)

{
  long lVar1;
  long *plVar2;
  long in_x2;
  undefined8 *in_x8;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 005a0b8c with catch @ 005a0c28 */
                    /* catch() { ... } // from try @ 005a0b44 with catch @ 005a0c38 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005a0afc with catch @ 005a0c48 */
  *in_x8 = *(undefined8 *)param_2;
  if (in_x2 != 0) {
    while( true ) {
      plVar2 = *(long **)(in_x2 + 0x58);
      if (plVar2 == (long *)0x0) break;
                    /* catch() { ... } // from try @ 005a0a6c with catch @ 005a0c68 */
      (**(code **)(*plVar2 + 0x108))(&local_40);
      *in_x8 = local_40;
                    /* catch() { ... } // from try @ 005a0a24 with catch @ 005a0c78 */
      in_x2 = *(long *)(in_x2 + 0x58);
    }
  }
  while( true ) {
    plVar2 = *(long **)(param_1 + 0x58);
                    /* catch() { ... } // from try @ 005a0904 with catch @ 005a0cb8 */
    if (plVar2 == (long *)0x0) break;
                    /* catch() { ... } // from try @ 005a0994 with catch @ 005a0c98 */
    (**(code **)(*plVar2 + 0x100))(&local_40);
                    /* catch() { ... } // from try @ 005a094c with catch @ 005a0ca8 */
    *in_x8 = local_40;
    param_1 = *(Vector2 **)(param_1 + 0x58);
  }
                    /* catch() { ... } // from try @ 005a08bc with catch @ 005a0cc8 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005a0898 with catch @ 005a0cd8 */
  return;
}


