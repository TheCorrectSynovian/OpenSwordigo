/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203B40
 * Mangled: ._ZN5Caver7GUIViewC2Ev_0
 * Demangled: Caver::GUIView::GUIView(void)
 *
 * Callers: 63
 *   0x000000000034D7E8  Caver::GameSceneView::GameSceneView(void)
 *   0x0000000000371F64  Caver::SceneView::SceneView(void)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x000000000038935C  Caver::BadgeCountView::BadgeCountView(void)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003A8080  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *   0x00000000003C5664  Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *   0x00000000003CAA00  boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr()
 *   0x00000000003CCB70  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003DA000  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>> const&)
 *   0x00000000003DCAC0  std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIAnimation>*,std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>>,ulong,boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000003DFD28  Caver::ManaBar::ManaBar(void)
 *   0x00000000003E2B10  Caver::TargetFrame::TargetFrame(void)
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x0000000000400394  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>(boost::shared_ptr<Caver::MenuItemSlot> const*,Caver::MenuItemSlot *)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x00000000004069EC  Caver::GuideToggleView::GuideToggleView(void)
 *   0x0000000000407430  Caver::InventoryItemPanel::InventoryItemPanel(void)
 *   0x000000000040D5F4  Caver::InventoryTrinketSlot::InventoryTrinketSlot(void)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x0000000000412CE4  Caver::ItemBuyPopupView::ItemBuyPopupView(void)
 *   0x0000000000415348  Caver::ItemInfoPopupView::ItemInfoPopupView(void)
 *   0x0000000000416B8C  Caver::ItemInfoView::ItemInfoView(void)
 *   0x000000000041B1E0  Caver::LevelUpView::LevelUpView(void)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x00000000004201CC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *   0x000000000042080C  Caver::MapView::MapView(void)
 *   0x00000000004296C0  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x000000000042A9C8  Caver::NewMenuView::NewMenuView(void)
 *   0x000000000042BD20  Caver::NotificationView::NotificationView(void)
 *   0x000000000042C798  Caver::NotificationView::~NotificationView()
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x000000000043BA78  Caver::SkillPickerView::SkillPickerView(void)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x0000000000442974  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabView,Caver::TabView>(boost::shared_ptr<Caver::TabView> const*,Caver::TabView *)
 *   0x0000000000494468  Caver::GUIBubbleView::GUIBubbleView(void)
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x00000000004971E8  Caver::GUIFrameView::GUIFrameView(void)
 *   0x00000000004977D4  Caver::GUILabel::GUILabel(void)
 *   0x00000000004987E8  Caver::GUILoadingView::GUILoadingView(void)
 *   0x000000000049B5CC  Caver::GUIScrollView::GUIScrollView(void)
 *   0x000000000049CB2C  Caver::GUISlider::GUISlider(void)
 *   0x000000000049D874  Caver::GUISwitch::GUISwitch(void)
 *   0x00000000004A1C00  Caver::GUIWindow::GUIWindow(void)
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *   0x00000000004A74F4  Caver::GUIEffectView::GUIEffectView(void)
 *   0x00000000004B9320  Caver::GUITextFieldImpl::GUITextFieldImpl(void)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x000000000049E2A0  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203B44 string=0x000000000049E2A0 ""
 *   insn=0x0000000000203B48 string=0x0000000000203B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::GUIView(Caver::GUIView *this)
{
  return _ZN5Caver7GUIViewC2Ev(this);
}

