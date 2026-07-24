/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e4c44
 * Function: Caver::TargetFrame::DrawRect
 * Signature: undefined __thiscall DrawRect(TargetFrame * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TargetFrame::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::TargetFrame::DrawRect
          (TargetFrame *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  FontText::Draw((FontText *)(this + 0x120),param_1);
  FontText::Draw((FontText *)(this + 0x210),param_1);
  return;
}


