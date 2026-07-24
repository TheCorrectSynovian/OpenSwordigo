/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047226c
 * Function: Caver::SceneView::DrawRect
 * Signature: undefined __thiscall DrawRect(SceneView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::SceneView::DrawRect
          (SceneView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047228c to 0057229f has its CatchHandler @ 004724cc */
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
                    /* try { // try from 004722b0 to 005722bb has its CatchHandler @ 00472460 */
  RenderingContext::SetIdentityMatrix(param_1);
  if (this[0x1a0] != (SceneView)0x0) {
    RenderingContext::SetDepthTestEnabled(param_1,true);
    glDepthFunc(0x207);
    RenderingContext::SetBlendingEnabled(param_1,true);
                    /* try { // try from 004722e4 to 0057231f has its CatchHandler @ 004723fc */
    RenderingContext::SetDefaultBlendFunc(param_1);
    local_4c = 0;
    RenderingContext::FillRect(param_1,(Rectangle *)(this + 0x84),(Color *)&local_4c,1.0);
    glDepthFunc(0x201);
  }
  (**(code **)(**(long **)(this + 0xf0) + 0x20))(*(long **)(this + 0xf0),param_1,param_3);
                    /* try { // try from 00472320 to 005724cf has its CatchHandler @ 00472260 */
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


