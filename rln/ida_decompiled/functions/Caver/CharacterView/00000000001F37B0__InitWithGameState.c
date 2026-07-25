/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F37B0
 * Mangled: ._ZN5Caver13CharacterView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::CharacterView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 2
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x000000000036A7A4  Caver::LevelUpViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F37B8 string=0x00000000001F37BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::CharacterView::InitWithGameState()
{
  JUMPOUT(0x3F9C98);
}

