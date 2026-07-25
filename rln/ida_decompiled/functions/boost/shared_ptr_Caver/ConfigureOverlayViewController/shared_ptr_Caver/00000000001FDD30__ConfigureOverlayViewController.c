/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDD30
 * Mangled: ._ZN5boost10shared_ptrIN5Caver30ConfigureOverlayViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(Caver::ConfigureOverlayViewController *)
 *
 * Callers: 1
 *   0x0000000000345884  Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(Caver::SettingsView *)
 *
 * Callees: 1
 *   0x0000000000345AD4  boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(Caver::ConfigureOverlayViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDD38 string=0x00000000001FDD3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>()
{
  return _ZN5boost10shared_ptrIN5Caver30ConfigureOverlayViewControllerEEC2IS2_EEPT_();
}

