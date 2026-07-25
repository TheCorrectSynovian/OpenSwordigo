/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F56B0
 * Mangled: ._ZN5Caver20GameInterfaceBuilder11PlainButtonERKN5boost13intrusive_ptrINS_7TextureEEES6_
 * Demangled: Caver::GameInterfaceBuilder::PlainButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 9
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *
 * Callees: 1
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F56B8 string=0x00000000001F56BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameInterfaceBuilder::PlainButton()
{
  JUMPOUT(0x33F5BC);
}

