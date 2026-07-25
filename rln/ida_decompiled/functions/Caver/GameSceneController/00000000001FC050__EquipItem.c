/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC050
 * Mangled: ._ZN5Caver19GameSceneController9EquipItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::GameSceneController::EquipItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 3
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC058 string=0x00000000001FC05C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameSceneController::EquipItem()
{
  JUMPOUT(0x3499E4);
}

