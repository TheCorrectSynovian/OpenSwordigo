/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201810
 * Mangled: ._ZN5boost10shared_ptrIN5Caver21LevelUpViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::LevelUpViewController>::shared_ptr<Caver::LevelUpViewController>(Caver::LevelUpViewController *)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201818 string=0x000000000020181C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::LevelUpViewController>::shared_ptr<Caver::LevelUpViewController>()
{
  JUMPOUT(0x35898C);
}

