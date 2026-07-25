/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7920
 * Mangled: ._ZN5Caver14CharacterState17WeaponDamageRangeEv
 * Demangled: Caver::CharacterState::WeaponDamageRange(void)
 *
 * Callers: 3
 *   0x0000000000368DE8  Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036963C  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003AD908  Caver::CharacterState::WeaponDamageRange(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7928 string=0x00000000001F792C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharacterState::WeaponDamageRange(Caver::CharacterState *this)
{
  return _ZN5Caver14CharacterState17WeaponDamageRangeEv(this);
}

