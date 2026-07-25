/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6BA0
 * Mangled: ._ZN5Caver22GameMenuViewController36SettingsViewWantsToConfigureControlsEPNS_12SettingsViewE
 * Demangled: Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(Caver::SettingsView *)
 *
 * Callers: 1
 *   0x0000000000345AD4  boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(Caver::ConfigureOverlayViewController *)
 *
 * Callees: 1
 *   0x0000000000345884  Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(Caver::SettingsView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6BA8 string=0x00000000001F6BAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(
        Caver::GameMenuViewController *this,
        Caver::SettingsView *a2)
{
  return _ZN5Caver22GameMenuViewController36SettingsViewWantsToConfigureControlsEPNS_12SettingsViewE(this, a2);
}

