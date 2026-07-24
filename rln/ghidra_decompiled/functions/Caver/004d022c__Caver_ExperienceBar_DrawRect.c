/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d022c
 * Function: Caver::ExperienceBar::DrawRect
 * Signature: undefined __thiscall DrawRect(ExperienceBar * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ExperienceBar::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::ExperienceBar::DrawRect
          (ExperienceBar *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
                    /* try { // try from 004d022c to 005d022f has its CatchHandler @ 004d0240 */
                    /* catch() { ... } // from try @ 004d022c with catch @ 004d0240 */
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
                    /* try { // try from 004d0268 to 005d026b has its CatchHandler @ 004d02a8 */
  RenderingContext::SetIdentityMatrix(param_1);
  FontText::Draw((FontText *)(this + 0x128),param_1);
  FontText::Draw((FontText *)(this + 0x218),param_1);
                    /* try { // try from 004d0294 to 005d029b has its CatchHandler @ 004d02a4 */
  FontText::Draw((FontText *)(this + 0x308),param_1);
  return;
}


