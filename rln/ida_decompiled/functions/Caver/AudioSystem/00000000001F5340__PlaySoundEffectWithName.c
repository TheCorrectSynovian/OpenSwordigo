/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5340
 * Mangled: ._ZN5Caver11AudioSystem23PlaySoundEffectWithNameERKSsf
 * Demangled: Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *
 * Callers: 19
 *   0x000000000023D568  Caver::TextBubbleComponent::HandleMessage(int,void *)
 *   0x000000000023FDA0  Caver::TouchableComponent::Trigger(void)
 *   0x000000000025E040  Caver::CharControllerComponent::Hurt(void)
 *   0x000000000025E468  Caver::CharControllerComponent::Die(void)
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
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
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004961F4  Caver::GUIButton::TouchBegan(Caver::FWTouch const&)
 *   0x000000000049DD80  Caver::GUISwitch::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000047F608  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5348 string=0x00000000001F534C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AudioSystem::PlaySoundEffectWithName()
{
  return _ZN5Caver11AudioSystem23PlaySoundEffectWithNameERKSsf();
}

