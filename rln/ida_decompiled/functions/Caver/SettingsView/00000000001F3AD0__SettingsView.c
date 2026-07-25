/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3AD0
 * Mangled: ._ZN5Caver12SettingsViewC2Ev
 * Demangled: Caver::SettingsView::SettingsView(void)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3AD8 string=0x00000000001F3ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SettingsView::SettingsView(Caver::SettingsView *this)
{
  return _ZN5Caver12SettingsViewC2Ev(this);
}

