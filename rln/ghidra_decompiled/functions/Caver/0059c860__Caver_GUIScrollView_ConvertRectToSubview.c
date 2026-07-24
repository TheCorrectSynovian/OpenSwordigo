/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059c860
 * Function: Caver::GUIScrollView::ConvertRectToSubview
 * Signature: undefined __thiscall ConvertRectToSubview(GUIScrollView * this, Rectangle * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::ConvertRectToSubview(Caver::Rectangle const&, Caver::GUIView const*) const
    */

void __thiscall
Caver::GUIScrollView::ConvertRectToSubview(GUIScrollView *this,Rectangle *param_1,GUIView *param_2)

{
  long lVar1;
  undefined8 *in_x8;
  float fVar2;
  float fVar3;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *(undefined8 *)param_1;
  GUIView::ConvertPointToSubview((Vector2 *)this,(GUIView *)&local_40);
  fVar2 = *(float *)(this + 0x100);
                    /* catch() { ... } // from try @ 0059af98 with catch @ 0059c8a4
                       catch() { ... } // from try @ 0059b130 with catch @ 0059c8a4
                       catch() { ... } // from try @ 0059b144 with catch @ 0059c8a4 */
  fVar3 = *(float *)(this + 300);
                    /* catch() { ... } // from try @ 0059b23c with catch @ 0059c8a8
                       catch() { ... } // from try @ 0059b250 with catch @ 0059c8a8
                       catch() { ... } // from try @ 0059bd10 with catch @ 0059c8a8 */
                    /* catch() { ... } // from try @ 0059b2d8 with catch @ 0059c8b8
                       catch() { ... } // from try @ 0059b3f4 with catch @ 0059c8b8
                       catch() { ... } // from try @ 0059b504 with catch @ 0059c8b8
                       catch() { ... } // from try @ 0059b5e0 with catch @ 0059c8b8
                       catch() { ... } // from try @ 0059bb54 with catch @ 0059c8b8 */
  in_x8[1] = *(undefined8 *)(param_1 + 8);
  *in_x8 = CONCAT44((float)((ulong)local_48 >> 0x20) - fVar3,(float)local_48 - fVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0059c8dc to 0069c94b has its CatchHandler @ 0059c954 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


