/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDF30
 * Mangled: ._ZN5Caver11AudioSystem12sharedSystemEv
 * Demangled: Caver::AudioSystem::sharedSystem(void)
 *
 * Callers: 39
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000210EFC  Caver::CaverShell::Update(float)
 *   0x0000000000239868  Caver::SoundEffectComponent::~SoundEffectComponent()
 *   0x000000000023A744  Caver::SoundEffectComponent::PlayWithDelay(float)
 *   0x000000000023D568  Caver::TextBubbleComponent::HandleMessage(int,void *)
 *   0x000000000023FDA0  Caver::TouchableComponent::Trigger(void)
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x000000000025E040  Caver::CharControllerComponent::Hurt(void)
 *   0x000000000025E468  Caver::CharControllerComponent::Die(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003B4B98  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *   0x00000000003C4C84  Caver::CoinBar::Update(float)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x0000000000401988  Caver::GameOverView::TouchEnded(Caver::FWTouch const&)
 *   0x000000000040B614  Caver::InventoryItemPanel::DraggableItemDidDropIntoView(Caver::GUIDraggableItem *)
 *   0x000000000040E298  Caver::InventoryTrinketSlot::TouchBegan(Caver::FWTouch const&)
 *   0x0000000000427B9C  Caver::MapView::TouchEnded(Caver::FWTouch const&)
 *   0x000000000042A560  Caver::MenuItemSlot::TouchBegan(Caver::FWTouch const&)
 *   0x000000000042CEEC  Caver::PauseView::TouchEnded(Caver::FWTouch const&)
 *   0x0000000000439CFC  Caver::SettingsView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000004435B8  Caver::TabView::TouchBegan(Caver::FWTouch const&)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *   0x0000000000478ED0  Java_com_touchfoo_swordigo_Native_applicationDidBecomeActive
 *   0x0000000000478F1C  Java_com_touchfoo_swordigo_Native_applicationDidBecomeInactive
 *   0x00000000004866A8  Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004961F4  Caver::GUIButton::TouchBegan(Caver::FWTouch const&)
 *   0x000000000049DD80  Caver::GUISwitch::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000047E32C  Caver::AudioSystem::sharedSystem(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDF38 string=0x00000000001FDF3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::sharedSystem(Caver::AudioSystem *this)
{
  return _ZN5Caver11AudioSystem12sharedSystemEv(this);
}

