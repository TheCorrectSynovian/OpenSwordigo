/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052c758
 * Function: Caver::NotificationView::DrawRect
 * Signature: undefined __thiscall DrawRect(NotificationView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NotificationView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::NotificationView::DrawRect
          (NotificationView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
                    /* catch() { ... } // from try @ 0052c72c with catch @ 0052c780 */
  RenderingContext::SetIdentityMatrix(param_1);
                    /* catch() { ... } // from try @ 0052c6e0 with catch @ 0052c794 */
  GUITextBubble::Draw((GUITextBubble *)(this + 0xf0),param_1);
  return;
}


