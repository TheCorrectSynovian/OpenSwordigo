/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAC60
 * Mangled: ._ZN5Caver14CharacterState9ItemCountERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 7
 *   0x000000000036963C  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036A378  Caver::HeroEquipmentManager::ApplyTrinketToSpells(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036A510  Caver::HeroEquipmentManager::ApplyTrinketToSpell(Caver::SceneObject *,boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003AD728  Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003DD8AC  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000040DC14  Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003AD0FC  Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAC68 string=0x00000000001FAC6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::ItemCount()
{
  return _ZN5Caver14CharacterState9ItemCountERKN5boost10shared_ptrINS_4ItemEEE();
}

