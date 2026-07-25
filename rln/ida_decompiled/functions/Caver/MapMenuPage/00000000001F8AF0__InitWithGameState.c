/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8AF0
 * Mangled: ._ZN5Caver11MapMenuPage17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEEb
 * Demangled: Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x000000000041DE54  Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8AF8 string=0x00000000001F8AFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MapMenuPage::InitWithGameState()
{
  return _ZN5Caver11MapMenuPage17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEEb();
}

