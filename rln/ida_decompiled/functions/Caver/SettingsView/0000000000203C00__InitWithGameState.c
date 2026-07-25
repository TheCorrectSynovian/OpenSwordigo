/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203C00
 * Mangled: ._ZN5Caver12SettingsView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::SettingsView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x0000000000439CFC  Caver::SettingsView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203C08 string=0x0000000000203C0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SettingsView::InitWithGameState()
{
  JUMPOUT(0x43A3BC);
}

