/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9E80
 * Mangled: ._ZN5Caver10QuestsView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::QuestsView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9E88 string=0x00000000001F9E8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::QuestsView::InitWithGameState()
{
  JUMPOUT(0x4304B8);
}

