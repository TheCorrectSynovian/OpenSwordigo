/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3560
 * Mangled: ._ZN5Caver14CharacterState25WeaponDamageRangeWithItemERKN5boost10shared_ptrINS_4ItemEEES6_
 * Demangled: Caver::CharacterState::WeaponDamageRangeWithItem(boost::shared_ptr<Caver::Item> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *
 * Callees: 1
 *   0x00000000003AD890  Caver::CharacterState::WeaponDamageRangeWithItem(boost::shared_ptr<Caver::Item> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3568 string=0x00000000001F356C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::WeaponDamageRangeWithItem()
{
  return _ZN5Caver14CharacterState25WeaponDamageRangeWithItemERKN5boost10shared_ptrINS_4ItemEEES6_();
}

