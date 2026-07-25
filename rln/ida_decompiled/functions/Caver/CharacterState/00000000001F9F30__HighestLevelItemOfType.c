/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9F30
 * Mangled: ._ZN5Caver14CharacterState22HighestLevelItemOfTypeENS_8ItemTypeE
 * Demangled: Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *
 * Callers: 8
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000039CB54  Caver::PlayerProfile::equippedArmorName(void)
 *   0x00000000003AC900  Caver::CharacterState::AddItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003AD908  Caver::CharacterState::WeaponDamageRange(void)
 *   0x00000000003ADC70  Caver::CharacterState::ArmorDamageMultiplier(void)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x00000000003ACD3C  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9F38 string=0x00000000001F9F3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::HighestLevelItemOfType()
{
  return _ZN5Caver14CharacterState22HighestLevelItemOfTypeENS_8ItemTypeE();
}

