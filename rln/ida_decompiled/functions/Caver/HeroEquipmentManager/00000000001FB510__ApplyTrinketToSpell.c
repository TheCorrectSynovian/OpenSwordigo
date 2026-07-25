/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB510
 * Mangled: ._ZN5Caver20HeroEquipmentManager19ApplyTrinketToSpellEPNS_11SceneObjectERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::ApplyTrinketToSpell(Caver::SceneObject *,boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000036A510  Caver::HeroEquipmentManager::ApplyTrinketToSpell(Caver::SceneObject *,boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB518 string=0x00000000001FB51C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HeroEquipmentManager::ApplyTrinketToSpell(int a1, Caver::SceneObject *this)
{
  return _ZN5Caver20HeroEquipmentManager19ApplyTrinketToSpellEPNS_11SceneObjectERKN5boost10shared_ptrINS_4ItemEEE(
           a1,
           this);
}

