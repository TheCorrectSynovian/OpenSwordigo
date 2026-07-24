/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a7768
 * Function: Caver::GUIEffectView::DrawRect
 * Signature: undefined __thiscall DrawRect(GUIEffectView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffectView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GUIEffectView::DrawRect
          (GUIEffectView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  GUIEffect::Draw((GUIEffect *)(this + 0xf0),param_1);
                    /* catch() { ... } // from try @ 005a7840 with catch @ 005a77d4 */
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  return;
}


