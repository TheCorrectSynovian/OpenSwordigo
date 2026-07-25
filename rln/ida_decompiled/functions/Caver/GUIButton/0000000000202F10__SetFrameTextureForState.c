/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202F10
 * Mangled: ._ZN5Caver9GUIButton23SetFrameTextureForStateENS_10GUIControl5StateERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 16
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000034E1A0  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x0000000000495E34  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202F18 string=0x0000000000202F1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIButton::SetFrameTextureForState()
{
  return _ZN5Caver9GUIButton23SetFrameTextureForStateENS_10GUIControl5StateERKN5boost13intrusive_ptrINS_7TextureEEE();
}

