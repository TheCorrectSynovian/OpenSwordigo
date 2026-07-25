/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF8A0
 * Mangled: ._ZN5Caver14CharacterState29ArmorDamageMultiplierWithItemERKN5boost10shared_ptrINS_4ItemEEES6_
 * Demangled: Caver::CharacterState::ArmorDamageMultiplierWithItem(boost::shared_ptr<Caver::Item> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 3
 *   0x00000000003694AC  Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003ADC70  Caver::CharacterState::ArmorDamageMultiplier(void)
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *
 * Callees: 1
 *   0x00000000003AD908  Caver::CharacterState::WeaponDamageRange(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF8A8 string=0x00000000001FF8AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::CharacterState::ArmorDamageMultiplierWithItem()
{
  JUMPOUT(0x3ADA5C);
}

