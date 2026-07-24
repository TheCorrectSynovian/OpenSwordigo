/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cc32c
 * Function: Caver::DebugInfoOverlay::DrawRect
 * Signature: undefined __thiscall DrawRect(DebugInfoOverlay * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DebugInfoOverlay::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::DebugInfoOverlay::DrawRect
          (DebugInfoOverlay *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  if (*(int *)(this + 0x164) != 0) {
    GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
    return;
  }
  *(int *)(this + 0x14c) = *(int *)(this + 0x14c) + 1;
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  return;
}


