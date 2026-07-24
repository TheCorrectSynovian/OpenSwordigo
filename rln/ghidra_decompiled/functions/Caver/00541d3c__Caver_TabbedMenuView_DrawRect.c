/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00541d3c
 * Function: Caver::TabbedMenuView::DrawRect
 * Signature: undefined __thiscall DrawRect(TabbedMenuView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::TabbedMenuView::DrawRect
          (TabbedMenuView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
                    /* try { // try from 00541d68 to 00641d73 has its CatchHandler @ 00541d80 */
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
                    /* catch() { ... } // from try @ 00541d68 with catch @ 00541d80 */
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  return;
}


