/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEE00
 * Mangled: ._ZN5Caver19GameSceneController11SpawnHeroAtERKSs
 * Demangled: Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *
 * Callers: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Callees: 1
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEE08 string=0x00000000001FEE0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameSceneController::SpawnHeroAt()
{
  return _ZN5Caver19GameSceneController11SpawnHeroAtERKSs();
}

