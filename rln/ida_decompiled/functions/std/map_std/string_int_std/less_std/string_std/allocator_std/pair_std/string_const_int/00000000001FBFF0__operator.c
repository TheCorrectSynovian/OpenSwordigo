/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBFF0
 * Mangled: ._ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEixERS3_
 * Demangled: std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
 *
 * Callers: 11
 *   0x0000000000273368  Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003C173C  Caver::PlayerProfile::LoadFromProtobufMessage(Caver::Proto::PlayerProfile const&,bool)
 *   0x00000000003C1CD8  Caver::PlayerProfile::SetValueForCounter(std::string const&,int)
 *   0x00000000003C1D60  Caver::PlayerProfile::IncreaseCounterValue(std::string const&,int)
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *
 * Callees: 1
 *   0x00000000002744D4  Caver::HeroEntityComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBFF8 string=0x00000000001FBFFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<std::string,int>::operator[]()
{
  JUMPOUT(0x27452C);
}

