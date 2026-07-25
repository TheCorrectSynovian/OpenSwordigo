/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8600
 * Mangled: ._ZN5Caver7GUIView17AddPopupAnimationEv
 * Demangled: Caver::GUIView::AddPopupAnimation(void)
 *
 * Callers: 9
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000003F8230  Caver::AttributePointsView::LayoutSubviews(void)
 *   0x00000000003F874C  Caver::AttributePointsView::UpdatePointState(void)
 *   0x00000000003F87EC  Caver::AttributePointsView::SetInitialPoints(int)
 *   0x00000000003F8914  Caver::AttributePointsView::SetNumPoints(int)
 *   0x00000000003F89D0  Caver::AttributePointsView::SetMaxPoints(int)
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x000000000042F9E8  Caver::PortalView::SetGotoButtonVisible(bool)
 *
 * Callees: 1
 *   0x000000000049FF3C  Caver::GUIView::AddPopupAnimation(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8608 string=0x00000000001F860C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::AddPopupAnimation(Caver::GUIView *this)
{
  return _ZN5Caver7GUIView17AddPopupAnimationEv(this);
}

