/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051f064
 * Function: Caver::MapMenuPage::DrawRect
 * Signature: undefined __thiscall DrawRect(MapMenuPage * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::MapMenuPage::DrawRect
          (MapMenuPage *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  RenderingContext::SetBlendingEnabled(param_1,true);
  RenderingContext::SetDefaultBlendFunc(param_1);
  RenderingContext::UseProgram(param_1,0);
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  return;
}


