/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00500a80
 * Function: Caver::DraggableMenuItem::DrawRect
 * Signature: undefined __thiscall DrawRect(DraggableMenuItem * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DraggableMenuItem::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::DraggableMenuItem::DrawRect
          (DraggableMenuItem *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  GUITexturedRect::Draw((GUITexturedRect *)(this + 0x110),param_1);
  return;
}


