/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6630
 * Mangled: ._ZN5Caver19GameSceneController18CreateHeroObjectAtERKNS_7Vector3Eib
 * Demangled: Caver::GameSceneController::CreateHeroObjectAt(Caver::Vector3 const&,int,bool)
 *
 * Callers: 2
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *
 * Callees: 1
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6638 string=0x00000000001F663C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameSceneController::CreateHeroObjectAt()
{
  JUMPOUT(0x348E94);
}

