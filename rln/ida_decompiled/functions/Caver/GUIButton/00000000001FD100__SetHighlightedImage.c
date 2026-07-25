/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD100
 * Mangled: ._ZN5Caver9GUIButton19SetHighlightedImageERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUIButton::SetHighlightedImage(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 4
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *
 * Callees: 1
 *   0x0000000000495D00  Caver::GUIButton::SetHighlightedImage(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD108 string=0x00000000001FD10C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIButton::SetHighlightedImage()
{
  return _ZN5Caver9GUIButton19SetHighlightedImageERKN5boost13intrusive_ptrINS_7TextureEEE();
}

