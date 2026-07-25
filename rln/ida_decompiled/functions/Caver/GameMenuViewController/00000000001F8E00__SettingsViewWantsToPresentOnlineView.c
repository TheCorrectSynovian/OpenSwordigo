/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8E00
 * Mangled: ._ZN5Caver22GameMenuViewController36SettingsViewWantsToPresentOnlineViewEPNS_12SettingsViewE
 * Demangled: Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(Caver::SettingsView *)
 *
 * Callers: 1
 *   0x0000000000345E44  boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(Caver::OnlineMenuViewController *)
 *
 * Callees: 1
 *   0x0000000000345C38  Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(Caver::SettingsView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8E08 string=0x00000000001F8E0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(
        Caver::GameMenuViewController *this,
        Caver::SettingsView *a2)
{
  return _ZN5Caver22GameMenuViewController36SettingsViewWantsToPresentOnlineViewEPNS_12SettingsViewE(this, a2);
}

