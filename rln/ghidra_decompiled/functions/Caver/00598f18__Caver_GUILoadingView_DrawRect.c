/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00598f18
 * Function: Caver::GUILoadingView::DrawRect
 * Signature: undefined __thiscall DrawRect(GUILoadingView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILoadingView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GUILoadingView::DrawRect
          (GUILoadingView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
                    /* try { // try from 00598f1c to 00698f43 has its CatchHandler @ 00599be8 */
  if (this[0xec] != (GUILoadingView)0x0) {
                    /* try { // try from 00598f44 to 00698f57 has its CatchHandler @ 0059a108 */
                    /* try { // try from 00598f58 to 00698f67 has its CatchHandler @ 0059a594 */
    (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
    RenderingContext::SetIdentityMatrix(param_1);
    RenderingContext::FillRect(param_1,(Rectangle *)(this + 0x84),(Color *)(this + 0xe9),0.0);
  }
                    /* try { // try from 00598fa0 to 00698fc7 has its CatchHandler @ 00599b98 */
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  return;
}


