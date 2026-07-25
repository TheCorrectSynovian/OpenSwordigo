/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6D50
 * Mangled: ._ZN5Caver9GameState21StateForLevelWithNameERKSsb
 * Demangled: Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *
 * Callers: 5
 *   0x0000000000351C5C  Caver::GameViewController::LoadGameState(void)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x000000000039FB4C  Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *   0x00000000003B7C8C  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *
 * Callees: 1
 *   0x00000000003B7C8C  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6D58 string=0x00000000001F6D5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameState::StateForLevelWithName()
{
  return _ZN5Caver9GameState21StateForLevelWithNameERKSsb();
}

