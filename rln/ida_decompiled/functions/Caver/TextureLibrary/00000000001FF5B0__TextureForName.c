/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF5B0
 * Mangled: ._ZN5Caver14TextureLibrary14TextureForNameERKSsb
 * Demangled: Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *
 * Callers: 88
 *   0x000000000021D77C  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021DD10  Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022BAFC  Caver::OverlayTargetArrowComponent::Prepare(void)
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x00000000002354E4  Caver::ShadowComponent::Prepare(void)
 *   0x000000000023C1B0  Caver::SpriteComponent::Prepare(void)
 *   0x000000000023C678  Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023CD60  Caver::TextBubbleComponent::RegisterLibrary(void)
 *   0x000000000023E3D0  Caver::TextureMappingComponent::Prepare(void)
 *   0x000000000023ED5C  Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000271378  Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000028777C  Caver::MagicExplosionComponent::Prepare(void)
 *   0x00000000002A4F54  Caver::ParticleComponent::Prepare(void)
 *   0x00000000002A556C  Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C528C  Caver::SwingableWeaponComponent::Prepare(void)
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *   0x000000000034E1A0  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x000000000038935C  Caver::BadgeCountView::BadgeCountView(void)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x00000000003C4A54  Caver::CoinBar::CreateIconSprite(void)
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *   0x00000000003CA1B8  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003CCB70  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003DA000  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>> const&)
 *   0x00000000003DD66C  Caver::ItemOverlay::IsOverlayItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003DFD28  Caver::ManaBar::ManaBar(void)
 *   0x00000000003E0C4C  Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *   0x00000000003E2B10  Caver::TargetFrame::TargetFrame(void)
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x00000000004005D0  Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040AD68  Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x0000000000416238  Caver::ItemInfoPopupView::InitWithSkill(boost::shared_ptr<Caver::Skill> const&)
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x00000000004201CC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *   0x000000000042080C  Caver::MapView::MapView(void)
 *   0x00000000004296C0  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x0000000000429CC0  Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000042A060  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *   0x000000000042A9C8  Caver::NewMenuView::NewMenuView(void)
 *   0x000000000042BD20  Caver::NotificationView::NotificationView(void)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x000000000043E760  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *   0x000000000043ED40  Caver::StripeView::SetHasTag(bool,float)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x0000000000442974  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabView,Caver::TabView>(boost::shared_ptr<Caver::TabView> const*,Caver::TabView *)
 *   0x00000000004431AC  Caver::TabView::UpdateSprite(void)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *   0x000000000048B4BC  Caver::RenderingContext::SetAlpha(float)
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *   0x0000000000495B00  Caver::GUIButton::SetImage(std::string const&)
 *   0x00000000004A9820  Caver::GUIRoundedRect::InitWithTextureName(std::string const&)
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *   0x00000000004AB048  Caver::GUITexturedRect::InitWithTextureName(std::string const&,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF5B8 string=0x00000000001FF5BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::TextureLibrary::TextureForName()
{
  return _ZN5Caver14TextureLibrary14TextureForNameERKSsb();
}

