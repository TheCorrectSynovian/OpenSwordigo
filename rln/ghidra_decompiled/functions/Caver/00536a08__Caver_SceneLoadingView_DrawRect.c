/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00536a08
 * Function: Caver::SceneLoadingView::DrawRect
 * Signature: undefined __thiscall DrawRect(SceneLoadingView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneLoadingView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::SceneLoadingView::DrawRect
          (SceneLoadingView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  LoadingView::DrawRect((RenderingContext *)this,(Rectangle *)param_1,(Matrix4 *)param_2);
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  return;
}


