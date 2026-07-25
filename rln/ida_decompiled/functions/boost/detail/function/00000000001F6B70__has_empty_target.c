/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6B70
 * Mangled: ._ZN5boost6detail8function16has_empty_targetEz
 * Demangled: boost::detail::function::has_empty_target(...)
 *
 * Callers: 45
 *   0x000000000034E1A0  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *   0x00000000003656F4  Caver::GuidePurchaseViewController::LoadView(void)
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *   0x0000000000370748  Caver::PortalViewController::LoadView(void)
 *   0x0000000000374B20  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *   0x0000000000385748  Caver::OfflineAchievementsViewController::LoadView(void)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000038D4E4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(boost::shared_ptr<Caver::GUIEffectView> const*,Caver::GUIEffectView *)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *   0x0000000000397B98  Caver::OnlineMenuViewController::LoadView(void)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003C5664  Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003E1704  Caver::OverlayMenuButton::FadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E1EC0  Caver::OverlayMenuButton::FadeInAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E4378  Caver::TargetFrame::Update(float)
 *   0x00000000003E8354  Caver::PurchaseViewController::LoadView(void)
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003EA4EC  Caver::PurchaseViewController::FetchProduct(std::string const&)
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x00000000003F2524  Caver::StoreViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x00000000004069EC  Caver::GuideToggleView::GuideToggleView(void)
 *   0x000000000040BD50  Caver::InventoryItemPanel::AddToggleLabelsAnimation(void)
 *   0x000000000040C508  Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000042A9C8  Caver::NewMenuView::NewMenuView(void)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *   0x000000000048F638  Caver::GUIAlertView::AddAnimations(bool)
 *   0x0000000000490A78  Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *   0x000000000049B24C  boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,boost::detail::function::function_buffer &,boost::detail::function::function_obj_tag)
 *   0x00000000004BC92C  Caver::ProfileManager_Android::ShowCloudLoadingView(void)
 *
 * Callees: 1
 *   0x0000000000350B80  boost::detail::function::has_empty_target(...)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6B78 string=0x00000000001F6B7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::function::has_empty_target()
{
  return _ZN5boost6detail8function16has_empty_targetEz();
}

