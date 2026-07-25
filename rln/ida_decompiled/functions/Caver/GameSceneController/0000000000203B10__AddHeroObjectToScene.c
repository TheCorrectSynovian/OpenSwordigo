/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203B10
 * Mangled: ._ZN5Caver19GameSceneController20AddHeroObjectToSceneEv
 * Demangled: Caver::GameSceneController::AddHeroObjectToScene(void)
 *
 * Callers: 2
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *
 * Callees: 1
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203B18 string=0x0000000000203B1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameSceneController::AddHeroObjectToScene(Caver::GameSceneController *this)
{
  return _ZN5Caver19GameSceneController20AddHeroObjectToSceneEv(this);
}

