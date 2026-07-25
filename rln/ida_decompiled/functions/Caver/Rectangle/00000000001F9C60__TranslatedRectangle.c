/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9C60
 * Mangled: ._ZNK5Caver9Rectangle19TranslatedRectangleERKNS_7Vector2E
 * Demangled: Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *
 * Callers: 34
 *   0x000000000023D32C  Caver::TextBubbleComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000026B4E0  Caver::EntityControllerComponent::Prepare(void)
 *   0x00000000002999FC  Caver::MonsterControllerComponent::Prepare(void)
 *   0x0000000000299AA0  Caver::MonsterControllerComponent::UpdateRoamBounds(void)
 *   0x00000000002B8988  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *   0x0000000000374B20  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *   0x0000000000375368  Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *   0x0000000000383DD0  Caver::OfflineAchievementsView::AnimateIn(void)
 *   0x0000000000393F74  Caver::MainMenuView::AnimateButtonsIn(float)
 *   0x00000000003973D4  Caver::OnlineMenuView::AnimateIn(void)
 *   0x00000000003A27CC  Caver::ProfileSelectionView::AnimateIn(void)
 *   0x00000000003E6BE0  Caver::PurchaseView::AnimateIn(void)
 *   0x00000000003EF488  Caver::StoreView::AnimateIn(void)
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *   0x0000000000404A8C  Caver::GuidePurchaseView::AnimateIn(void)
 *   0x0000000000411A84  Caver::InventoryView::AnimateIn(void)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041A96C  Caver::ItemInfoView::LayoutSubviews(void)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x000000000041EF8C  Caver::MapMenuPage::CenterAtNode(Caver::MapViewNode *,bool)
 *   0x000000000041F0FC  Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::MapViewNode *)
 *   0x000000000041F7D4  Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *   0x000000000042F014  Caver::PortalView::LayoutSubviews(void)
 *   0x000000000042F388  Caver::PortalView::CenterAtNode(Caver::MapViewNode *,bool)
 *   0x000000000042F460  Caver::PortalView::AnimateIn(void)
 *   0x000000000043D4B0  Caver::SkillPickerView::AddAnimations(bool)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x000000000048F638  Caver::GUIAlertView::AddAnimations(bool)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000049C970  Caver::GUIScrollView::ConvertRectFromSubviewUsingFrame(Caver::Rectangle const&,Caver::GUIView const*,Caver::Rectangle const&)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000004C6684  Caver::FontText::BoundsForCharacterAtIndex(int)
 *
 * Callees: 1
 *   0x00000000004B2074  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9C68 string=0x00000000001F9C6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::TranslatedRectangle(Caver::Rectangle *this, const Caver::Vector2 *a2)
{
  return _ZNK5Caver9Rectangle19TranslatedRectangleERKNS_7Vector2E(this, a2);
}

