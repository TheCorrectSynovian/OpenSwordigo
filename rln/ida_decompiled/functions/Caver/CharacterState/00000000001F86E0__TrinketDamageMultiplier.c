/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F86E0
 * Mangled: ._ZN5Caver14CharacterState23TrinketDamageMultiplierERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 4
 *   0x00000000003AD890  Caver::CharacterState::WeaponDamageRangeWithItem(boost::shared_ptr<Caver::Item> const&,boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003AD908  Caver::CharacterState::WeaponDamageRange(void)
 *   0x00000000003ADC70  Caver::CharacterState::ArmorDamageMultiplier(void)
 *   0x00000000003ADDF0  Caver::CharacterState::SkillDamageRange(void)
 *
 * Callees: 1
 *   0x00000000003AD728  Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F86E8 string=0x00000000001F86EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::TrinketDamageMultiplier()
{
  return _ZN5Caver14CharacterState23TrinketDamageMultiplierERKN5boost10shared_ptrINS_4ItemEEE();
}

