/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4920
 * Mangled: ._ZN5Caver13GUIBubbleView21PresentFromRectInViewERKNS_9RectangleEPNS_7GUIViewE
 * Demangled: Caver::GUIBubbleView::PresentFromRectInView(Caver::Rectangle const&,Caver::GUIView *)
 *
 * Callers: 3
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x0000000000411444  Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4928 string=0x00000000001F492C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIBubbleView::PresentFromRectInView()
{
  JUMPOUT(0x494978);
}

