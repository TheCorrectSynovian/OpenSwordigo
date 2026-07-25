/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200A60
 * Mangled: ._ZN5Caver30ConfigureOverlayViewControllerC2Ev
 * Demangled: Caver::ConfigureOverlayViewController::ConfigureOverlayViewController(void)
 *
 * Callers: 1
 *   0x0000000000345884  Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(Caver::SettingsView *)
 *
 * Callees: 1
 *   0x000000000033DE0C  Caver::ConfigureOverlayViewController::ConfigureOverlayViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200A68 string=0x0000000000200A6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ConfigureOverlayViewController::ConfigureOverlayViewController(
        Caver::ConfigureOverlayViewController *this)
{
  return _ZN5Caver30ConfigureOverlayViewControllerC2Ev(this);
}

