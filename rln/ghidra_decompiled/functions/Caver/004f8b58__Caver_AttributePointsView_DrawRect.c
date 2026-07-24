/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f8b58
 * Function: Caver::AttributePointsView::DrawRect
 * Signature: undefined __thiscall DrawRect(AttributePointsView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::AttributePointsView::DrawRect
          (AttributePointsView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  if (this[0x540] != (AttributePointsView)0x0) {
    UpdateSprite(this);
    this[0x540] = (AttributePointsView)0x0;
  }
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  RenderingContext::UseProgram(param_1,3);
  RenderingContext::SetBlendingEnabled(param_1,true);
  RenderingContext::SetDefaultBlendFunc(param_1);
  Sprite::Draw((Sprite *)(this + 0x4e8),param_1);
  return;
}


