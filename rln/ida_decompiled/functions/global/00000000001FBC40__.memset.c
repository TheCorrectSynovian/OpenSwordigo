/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBC40
 * Mangled: .memset
 * Demangled: .memset
 *
 * Callers: 110
 *   0x0000000000213528  Caver::FloatDataBuffer::FillZero(void)
 *   0x000000000024FB04  Caver::UtilityShapeComponent::Create(void)
 *   0x0000000000250B34  Caver::UtilityShapeComponent::Clone(void)
 *   0x0000000000271E60  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *   0x0000000000342AEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>(boost::shared_ptr<Caver::GUIBubbleView> const*,Caver::GUIBubbleView *)
 *   0x0000000000345C38  Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(Caver::SettingsView *)
 *   0x000000000034D7E8  Caver::GameSceneView::GameSceneView(void)
 *   0x00000000003512A8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>(boost::shared_ptr<Caver::DebugInfoOverlay> const*,Caver::DebugInfoOverlay *)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x0000000000368C58  Caver::HeroEquipmentManager::HeroEquipmentManager(void)
 *   0x000000000036F67C  Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003AB11C  Caver::CharacterState::CharacterState(void)
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x00000000003C5664  Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *   0x00000000003CAA00  boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr()
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x0000000000407430  Caver::InventoryItemPanel::InventoryItemPanel(void)
 *   0x000000000040D5F4  Caver::InventoryTrinketSlot::InventoryTrinketSlot(void)
 *   0x0000000000412CE4  Caver::ItemBuyPopupView::ItemBuyPopupView(void)
 *   0x0000000000415348  Caver::ItemInfoPopupView::ItemInfoPopupView(void)
 *   0x0000000000416B8C  Caver::ItemInfoView::ItemInfoView(void)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x000000000042080C  Caver::MapView::MapView(void)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x000000000044604C  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *   0x0000000000446A58  Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshInstance *,bool)
 *   0x0000000000447498  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *   0x000000000044AA1C  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *   0x000000000044B44C  Caver::ModelLibrary::sharedLibrary(void)
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *   0x000000000045A05C  Caver::LightOverlay::CreateVertices(void)
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x00000000004621C4  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(int)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x000000000046C550  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *   0x000000000046D144  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize(int)
 *   0x000000000046D924  Caver::SceneGridLayer::Init(Caver::Rectangle const&,float,float,float,float)
 *   0x000000000048EFC8  Caver::GUIAlertView::GUIAlertView(void)
 *   0x000000000049258C  std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *   0x00000000004C2F54  Caver::Font::SetKerningBetweenGlyphsAtIndices(int,int,int)
 *   0x00000000004C3008  Caver::Font::Scale(float)
 *   0x00000000004C3480  Caver::FontLibrary::FontWithName(std::string const&)
 *   0x00000000004CBA08  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *   0x00000000004D22B0  Caver::Image::Clear(void)
 *   0x00000000004E03C4  sub_4E03C4
 *   0x00000000004E0538  std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_insert_bucket(std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo> const&,ulong,ulong)
 *   0x00000000004ED424  sub_4ED424
 *   0x00000000004ED6C8  sub_4ED6C8
 *   0x00000000004F3118  lua_newstate(void * (*)(void *,void *,ulong,ulong),void *)
 *   0x00000000004F3464  sub_4F3464
 *   0x00000000004F43C0  sub_4F43C0
 *   0x0000000000503314  CPVRTModelPOD::ReadFromFile(char const*,char *,ulong,char *,ulong)
 *   0x0000000000503998  CPVRTModelPOD::Destroy(void)
 *   0x0000000000503F24  CPVRTModelPOD::InitImpl(void)
 *   0x0000000000505018  CPVRTModelPOD::FlushCache(void)
 *   0x000000000050623C  CPVRTModelPOD::CreateSkinIdxWeight(char *,char *,int,int const*,float const*)
 *   0x000000000050CA84  PVRTModelPODDataShred(CPODData &,uint,int const*)
 *   0x0000000000514354  CPVRTString::CPVRTString(ulong,char)
 *   0x00000000005143C0  CPVRTString::assign(ulong,char)
 *   0x00000000005147E4  CPVRTString::append(ulong,char)
 *   0x0000000000514D00  CPVRTString::erase(ulong,ulong)
 *   0x0000000000514E00  CPVRTString::resize(ulong,char)
 *   0x0000000000515490  CPVRTString::push_back(char)
 *   0x000000000051565C  CPVRTString::operator+=(char)
 *   0x0000000000515878  CPVRTString::operator=(char)
 *   0x000000000051732C  PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *   0x000000000051C420  CPVRTglesExt::LoadExtensions(void)
 *   0x0000000000520210  sub_520210
 *   0x00000000005202A8  sub_5202A8
 *   0x0000000000530D30  sub_530D30
 *   0x000000000053175C  sub_53175C
 *   0x0000000000566690  sub_566690
 *   0x0000000000566CF8  sub_566CF8
 *   0x000000000056739C  sub_56739C
 *   0x0000000000567958  sub_567958
 *   0x0000000000567A50  sub_567A50
 *   0x0000000000569074  sub_569074
 *   0x0000000000569AC0  sub_569AC0
 *   0x0000000000569B54  sub_569B54
 *   0x0000000000569C14  sub_569C14
 *   0x0000000000569CB8  sub_569CB8
 *   0x0000000000569D84  sub_569D84
 *   0x00000000005806A8  sub_5806A8
 *   0x000000000058128C  sub_58128C
 *   0x0000000000581560  sub_581560
 *
 * Callees: 1
 *   0x00000000006FE930  memset
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBC48 string=0x00000000001FBC4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void *memset(void *a1, int a2, size_t a3)
{
  return memset(a1, a2, a3);
}

