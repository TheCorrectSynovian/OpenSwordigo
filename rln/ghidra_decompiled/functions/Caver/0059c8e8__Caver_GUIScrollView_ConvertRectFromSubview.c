/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059c8e8
 * Function: Caver::GUIScrollView::ConvertRectFromSubview
 * Signature: undefined __thiscall ConvertRectFromSubview(GUIScrollView * this, Rectangle * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::ConvertRectFromSubview(Caver::Rectangle const&, Caver::GUIView const*)
   const */

void __thiscall
Caver::GUIScrollView::ConvertRectFromSubview
          (GUIScrollView *this,Rectangle *param_1,GUIView *param_2)

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
  GUIView::ConvertPointFromSubview((Vector2 *)this,(GUIView *)&local_40);
  fVar2 = *(float *)(this + 0x100);
  fVar3 = *(float *)(this + 300);
  in_x8[1] = *(undefined8 *)(param_1 + 8);
  *in_x8 = CONCAT44(fVar3 + (float)((ulong)local_48 >> 0x20),fVar2 + (float)local_48);
                    /* try { // try from 0059c94c to 0069c957 has its CatchHandler @ 0059ac98 */
                    /* catch() { ... } // from try @ 0059bed0 with catch @ 0059c954
                       catch() { ... } // from try @ 0059c080 with catch @ 0059c954
                       catch() { ... } // from try @ 0059c8dc with catch @ 0059c954 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0059c958 to 0069c9ef has its CatchHandler @ 0059c958
                       catch() { ... } // from try @ 0059c958 with catch @ 0059c958
                       catch() { ... } // from try @ 0059ca18 with catch @ 0059c958
                       catch() { ... } // from try @ 0059ca60 with catch @ 0059c958 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


