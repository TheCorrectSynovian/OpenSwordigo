/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00543540
 * Function: Caver::TabView::DrawRect
 * Signature: undefined __thiscall DrawRect(TabView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::TabView::DrawRect
          (TabView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
                    /* catch() { ... } // from try @ 005431cc with catch @ 00543554 */
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  RenderingContext::UseProgram(param_1,3);
  Sprite::Draw((Sprite *)(this + 0x1b0),param_1);
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  return;
}


