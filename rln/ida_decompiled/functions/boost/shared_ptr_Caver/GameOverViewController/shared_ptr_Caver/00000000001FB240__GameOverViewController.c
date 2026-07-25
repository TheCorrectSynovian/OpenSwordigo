/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB240
 * Mangled: ._ZN5boost10shared_ptrIN5Caver22GameOverViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameOverViewController>::shared_ptr<Caver::GameOverViewController>(Caver::GameOverViewController *)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x000000000035A5E4  boost::shared_ptr<Caver::GameOverViewController>::shared_ptr<Caver::GameOverViewController>(Caver::GameOverViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB248 string=0x00000000001FB24C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GameOverViewController>::shared_ptr<Caver::GameOverViewController>()
{
  return _ZN5boost10shared_ptrIN5Caver22GameOverViewControllerEEC2IS2_EEPT_();
}

