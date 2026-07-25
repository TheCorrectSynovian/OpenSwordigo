/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6F10
 * Mangled: ._ZN5Caver20HeroEquipmentManager12ApplyLevelUpEv
 * Demangled: Caver::HeroEquipmentManager::ApplyLevelUp(void)
 *
 * Callers: 1
 *   0x000000000034AA00  Caver::GameSceneController::ApplyLevelUp(int,int,int)
 *
 * Callees: 1
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6F18 string=0x00000000001F6F1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::HeroEquipmentManager::ApplyLevelUp(Caver::HeroEquipmentManager *this)
{
  JUMPOUT(0x36A298);
}

