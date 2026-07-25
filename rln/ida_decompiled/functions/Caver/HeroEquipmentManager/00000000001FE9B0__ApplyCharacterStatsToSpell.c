/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE9B0
 * Mangled: ._ZN5Caver20HeroEquipmentManager26ApplyCharacterStatsToSpellEPNS_11SceneObjectE
 * Demangled: Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell(Caver::SceneObject *)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000036A318  Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell(Caver::SceneObject *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE9B8 string=0x00000000001FE9BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell(
        Caver::HeroEquipmentManager *this,
        Caver::SceneObject *a2)
{
  return _ZN5Caver20HeroEquipmentManager26ApplyCharacterStatsToSpellEPNS_11SceneObjectE(this, a2);
}

