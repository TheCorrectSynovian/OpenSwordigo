/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005689E0
 * Mangled: sub_5689E0
 * Demangled: sub_5689E0
 *
 * Callers: 35
 *   0x000000000020E358  Caver::CaverShell::InitApplication(void)
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x000000000026A5B8  Caver::StringForMovementBehavior(Caver::EntityControllerComponent::MovementBehavior)
 *   0x000000000026DA14  sub_26DA14
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x000000000034A77C  Caver::GameSceneController::ConsumeItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x000000000034D22C  Caver::GameSceneController::ManaCostForSkill(boost::shared_ptr<Caver::Skill> const&)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003601E8  sub_3601E8
 *   0x000000000036924C  Caver::HeroEquipmentManager::ModelNameForArmor(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036963C  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036A378  Caver::HeroEquipmentManager::ApplyTrinketToSpells(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036A510  Caver::HeroEquipmentManager::ApplyTrinketToSpell(Caver::SceneObject *,boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036E914  Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000039FB4C  Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *   0x00000000003AD728  Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003AD908  Caver::CharacterState::WeaponDamageRange(void)
 *   0x00000000003ADE70  Caver::CharacterState::TrinketBonusForWeapons(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003AE1C4  Caver::CharacterState::TrinketBonusForArmors(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003AE518  Caver::CharacterState::TrinketBonusForSkills(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *   0x00000000003D74B4  Caver::GameOverlayView::LayoutBoundsForSubview(std::string const&)
 *   0x00000000003EAF20  Caver::PurchaseViewController::EnableBuyButton(void)
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x0000000000441EDC  Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *   0x00000000004420BC  Caver::TabbedMenuView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x000000000053D830  sub_53D830
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 3
 *   insn=0x00000000005689F8 string=0x00000000005689FC "j"
 *   insn=0x0000000000568A18 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000568A20 string=0x0000000000568A24 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5689E0(const void **a1, char *a2)
{
  _QWORD *v2; // x21
  size_t v3; // x0
  size_t v4; // x19
  size_t v5; // x20
  size_t v6; // x2
  __int64 result; // x0
  __int64 v8; // x19

  v2 = *a1;
  v3 = strlen(a2);
  v4 = *(v2 - 3);
  v5 = v3;
  if ( v3 > v4 )
    v6 = *(v2 - 3);
  else
    v6 = v3;
  result = memcmp(v2, a2, v6);
  if ( !(_DWORD)result )
  {
    result = 0x7FFFFFFF;
    v8 = v4 - v5;
    if ( v8 <= 0x7FFFFFFF )
    {
      if ( v8 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v8;
      else
        return 0x80000000LL;
    }
  }
  return result;
}

