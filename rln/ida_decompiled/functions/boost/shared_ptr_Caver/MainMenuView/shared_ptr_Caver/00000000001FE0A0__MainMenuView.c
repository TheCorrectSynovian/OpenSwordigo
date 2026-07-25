/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE0A0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver12MainMenuViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000036FA90  boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>(Caver::MainMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE0A8 string=0x00000000001FE0AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>()
{
  return _ZN5boost10shared_ptrIN5Caver12MainMenuViewEEC2IS2_EEPT_();
}

