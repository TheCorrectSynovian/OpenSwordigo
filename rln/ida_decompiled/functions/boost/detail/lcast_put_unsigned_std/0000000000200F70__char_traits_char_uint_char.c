/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200F70
 * Mangled: ._ZN5boost6detail18lcast_put_unsignedISt11char_traitsIcEjcEEPT1_T0_S5_
 * Demangled: boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *
 * Callers: 34
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x00000000002763D8  Caver::ItemDropComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002A00DC  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *   0x00000000002A5CFC  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *   0x00000000002A724C  Caver::ParticleEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x000000000037DC80  Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,bool)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x0000000000389C70  Caver::BadgeCountView::SetCount(int)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003C4F90  Caver::CoinBar::UpdateText(void)
 *   0x00000000003CB89C  Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *   0x00000000003CBF00  Caver::DebugInfoOverlay::SetNumTriangles(int)
 *   0x00000000003CE554  Caver::ExperienceBar::UpdateText(void)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003E3474  Caver::TargetFrame::UpdateInfo(void)
 *   0x00000000003E3FAC  Caver::TargetFrame::UpdateHealthText(void)
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x000000000040DC14  Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004CF91C  Caver::DateTime::FormattedTimeIntervalSinceDate(Caver::DateTime const&)
 *
 * Callees: 1
 *   0x00000000002616A4  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200F78 string=0x0000000000200F7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>()
{
  return _ZN5boost6detail18lcast_put_unsignedISt11char_traitsIcEjcEEPT1_T0_S5_();
}

