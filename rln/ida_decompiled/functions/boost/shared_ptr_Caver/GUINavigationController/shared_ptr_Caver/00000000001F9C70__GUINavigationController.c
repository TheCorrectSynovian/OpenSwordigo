/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9C70
 * Mangled: ._ZN5boost10shared_ptrIN5Caver23GUINavigationControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUINavigationController>::shared_ptr<Caver::GUINavigationController>(Caver::GUINavigationController *)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x0000000000211B1C  boost::shared_ptr<Caver::GUINavigationController>::shared_ptr<Caver::GUINavigationController>(Caver::GUINavigationController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9C78 string=0x00000000001F9C7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GUINavigationController>::shared_ptr<Caver::GUINavigationController>()
{
  return _ZN5boost10shared_ptrIN5Caver23GUINavigationControllerEEC2IS2_EEPT_();
}

