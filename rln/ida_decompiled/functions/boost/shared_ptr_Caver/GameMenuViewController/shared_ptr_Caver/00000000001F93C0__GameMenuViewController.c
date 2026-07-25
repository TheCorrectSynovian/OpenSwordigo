/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F93C0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver22GameMenuViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(Caver::GameMenuViewController *)
 *
 * Callers: 1
 *   0x0000000000356DCC  Caver::GameViewController::ShowMenu(void)
 *
 * Callees: 1
 *   0x0000000000357024  boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(Caver::GameMenuViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F93C8 string=0x00000000001F93CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>()
{
  return _ZN5boost10shared_ptrIN5Caver22GameMenuViewControllerEEC2IS2_EEPT_();
}

