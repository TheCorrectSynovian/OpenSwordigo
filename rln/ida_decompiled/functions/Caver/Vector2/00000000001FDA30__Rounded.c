/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDA30
 * Mangled: ._ZNK5Caver7Vector27RoundedEv
 * Demangled: Caver::Vector2::Rounded(void)
 *
 * Callers: 38
 *   0x000000000022BAFC  Caver::OverlayTargetArrowComponent::Prepare(void)
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x000000000023D32C  Caver::TextBubbleComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000034F57C  Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *   0x000000000038935C  Caver::BadgeCountView::BadgeCountView(void)
 *   0x000000000038BA14  Caver::ChooseAgeView::UpdateArrowFrames(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003A8080  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *   0x00000000003BC04C  Caver::Map::RecursivelySetNodePositions(Caver::MapNode *)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003DAA78  Caver::HealthBar::UpdateSprite(void)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003F8230  Caver::AttributePointsView::LayoutSubviews(void)
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x00000000004005D0  Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000404520  Caver::GuidePurchaseView::LayoutSubviews(void)
 *   0x00000000004070E4  Caver::GuideToggleView::LayoutSubviews(void)
 *   0x000000000040DF30  Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000041C61C  Caver::LevelUpView::LayoutSubviews(void)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x000000000041EF8C  Caver::MapMenuPage::CenterAtNode(Caver::MapViewNode *,bool)
 *   0x0000000000424D10  Caver::MapView::UpdateNodesSprite(void)
 *   0x0000000000425FB4  Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode *,Caver::Rectangle const&,float)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004296C0  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x0000000000429CC0  Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000042A060  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *   0x000000000042B520  Caver::NewMenuView::LayoutSubviews(void)
 *   0x000000000042F014  Caver::PortalView::LayoutSubviews(void)
 *   0x000000000042F388  Caver::PortalView::CenterAtNode(Caver::MapViewNode *,bool)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *   0x000000000043D058  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x00000000004431AC  Caver::TabView::UpdateSprite(void)
 *   0x00000000004918F0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x000000000049CF4C  Caver::GUISlider::UpdateSprite(void)
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *   0x00000000004AA9A8  Caver::GUITextBubble::UpdateLayout(void)
 *
 * Callees: 1
 *   0x00000000004B2B9C  Caver::Vector2::Rounded(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDA38 string=0x00000000001FDA3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector2::Rounded(Caver::Vector2 *this)
{
  return _ZNK5Caver7Vector27RoundedEv(this);
}

