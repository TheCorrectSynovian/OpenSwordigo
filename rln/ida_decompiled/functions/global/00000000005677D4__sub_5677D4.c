/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005677D4
 * Mangled: sub_5677D4
 * Demangled: sub_5677D4
 *
 * Callers: 69
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000002763D8  Caver::ItemDropComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002A724C  Caver::ParticleEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *   0x00000000003A899C  Caver::ProfileManagerLoadingView::Update(float)
 *   0x00000000003BFBB4  Caver::PlayerProfile::LocalFilePath(void)
 *   0x00000000003C1668  Caver::PlayerProfile::Filename(void)
 *   0x00000000003CB89C  Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *   0x00000000003CC348  Caver::DebugInfoOverlay::FormatByteSize(int)
 *   0x00000000003CE554  Caver::ExperienceBar::UpdateText(void)
 *   0x00000000003E3474  Caver::TargetFrame::UpdateInfo(void)
 *   0x00000000003E3FAC  Caver::TargetFrame::UpdateHealthText(void)
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000003F3CD8  Caver::StoreViewController::Update(float)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000004005D0  Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x0000000000416238  Caver::ItemInfoPopupView::InitWithSkill(boost::shared_ptr<Caver::Skill> const&)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x000000000042A060  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *   0x000000000042A9C8  Caver::NewMenuView::NewMenuView(void)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *   0x000000000043650C  Caver::SceneLoadingView::Update(float)
 *   0x000000000044BEF4  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000004B3C18  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *   0x00000000004B3EFC  Caver::PathExtension(std::string const&)
 *   0x00000000004C0C50  sub_4C0C50
 *   0x00000000004C3480  Caver::FontLibrary::FontWithName(std::string const&)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004CF91C  Caver::DateTime::FormattedTimeIntervalSinceDate(Caver::DateTime const&)
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000004D70B8  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000004D7474  google::protobuf::internal::LogMessage::operator<<(char)
 *   0x00000000004D74FC  google::protobuf::internal::LogMessage::operator<<(int)
 *   0x00000000004D7588  google::protobuf::internal::LogMessage::operator<<(uint)
 *   0x00000000004D7614  google::protobuf::internal::LogMessage::operator<<(long)
 *   0x00000000004D76A0  google::protobuf::internal::LogMessage::operator<<(ulong)
 *   0x00000000004D772C  google::protobuf::internal::LogMessage::operator<<(double)
 *   0x00000000004D7A4C  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000004D7C50  google::protobuf::internal::Mutex::Unlock(void)
 *   0x00000000004E07F0  google::protobuf::MessageLite::InitializationErrorString(void)
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *   0x00000000004E3CC0  google::protobuf::io::CodedInputStream::ReadStringFallback(std::string *,int)
 *   0x0000000000528E58  sub_528E58
 *   0x000000000052B780  sub_52B780
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x000000000053B81C  sub_53B81C
 *
 * Callees: 1
 *   0x0000000000567254  sub_567254
 *
 * Referenced strings: 1
 *   insn=0x00000000005677E0 string=0x00000000005677E4 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int **__fastcall sub_5677D4(int **a1, char *a2, size_t a3)
{
  if ( a3 )
    sub_567254(a1, (int *)a2, a3);
  return a1;
}

