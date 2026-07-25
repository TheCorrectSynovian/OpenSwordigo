/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8890
 * Mangled: ._ZN5boost10shared_ptrIN5Caver24OnlineMenuViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(Caver::OnlineMenuViewController *)
 *
 * Callers: 1
 *   0x0000000000345C38  Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(Caver::SettingsView *)
 *
 * Callees: 1
 *   0x0000000000345E44  boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(Caver::OnlineMenuViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8898 string=0x00000000001F889C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>()
{
  return _ZN5boost10shared_ptrIN5Caver24OnlineMenuViewControllerEEC2IS2_EEPT_();
}

