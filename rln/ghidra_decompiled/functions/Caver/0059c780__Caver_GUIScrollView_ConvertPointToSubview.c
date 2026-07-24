/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059c780
 * Function: Caver::GUIScrollView::ConvertPointToSubview
 * Signature: undefined __thiscall ConvertPointToSubview(GUIScrollView * this, Vector2 * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::ConvertPointToSubview(Caver::Vector2 const&, Caver::GUIView const*) const
    */

void __thiscall
Caver::GUIScrollView::ConvertPointToSubview(GUIScrollView *this,Vector2 *param_1,GUIView *param_2)

{
  long lVar1;
  undefined8 *in_x8;
  long lVar2;
  undefined8 local_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  GUIView::ConvertPointToSubview((Vector2 *)this,(GUIView *)param_1);
  *in_x8 = CONCAT44((float)((ulong)local_40 >> 0x20) - *(float *)(this + 300),
                    (float)local_40 - *(float *)(this + 0x100));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


