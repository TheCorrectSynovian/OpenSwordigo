/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE9E0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver12GameOverViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>(Caver::GameOverView *)
 *
 * Callers: 1
 *   0x0000000000347C68  Caver::GameOverViewController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000034845C  boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>(Caver::GameOverView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE9E8 string=0x00000000001FE9EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>()
{
  return _ZN5boost10shared_ptrIN5Caver12GameOverViewEEC2IS2_EEPT_();
}

