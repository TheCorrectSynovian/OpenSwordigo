/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203A30
 * Mangled: ._ZN5boost10shared_ptrIN5Caver12SettingsViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::SettingsView>::shared_ptr<Caver::SettingsView>(Caver::SettingsView *)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203A38 string=0x0000000000203A3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::SettingsView>::shared_ptr<Caver::SettingsView>()
{
  JUMPOUT(0x344D78);
}

