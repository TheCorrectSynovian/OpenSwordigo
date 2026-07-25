/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3C90
 * Mangled: ._ZNK5Caver9Rectangle21RectangleByOutsettingEf
 * Demangled: Caver::Rectangle::RectangleByOutsetting(float)
 *
 * Callers: 28
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *   0x000000000034EB34  Caver::GameSceneView::LayoutSubviews(void)
 *   0x000000000038B894  Caver::ChooseAgeView::LayoutSubviews(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000393F74  Caver::MainMenuView::AnimateButtonsIn(float)
 *   0x000000000039CB54  Caver::PlayerProfile::equippedArmorName(void)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003ED584  Caver::StoreProductView::LayoutSubviews(void)
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *   0x00000000003F8230  Caver::AttributePointsView::LayoutSubviews(void)
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x0000000000404520  Caver::GuidePurchaseView::LayoutSubviews(void)
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x000000000041DE54  Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x000000000042F014  Caver::PortalView::LayoutSubviews(void)
 *   0x0000000000432A08  Caver::QuestsView::LayoutSubviews(void)
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *   0x000000000043D058  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *   0x000000000046CE8C  Caver::SceneGrid::GetObjectsNearCamera(float,void ***)
 *   0x000000000049008C  Caver::GUIAlertView::UpdateLayout(void)
 *   0x00000000004D4048  Caver::GUIPopoverView::UpdateLayout(void)
 *
 * Callees: 1
 *   0x00000000004B1D64  Caver::Rectangle::RectangleByOutsetting(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3C98 string=0x00000000001F3C9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::RectangleByOutsetting(Caver::Rectangle *this, float a2)
{
  return _ZNK5Caver9Rectangle21RectangleByOutsettingEf(this, a2);
}

