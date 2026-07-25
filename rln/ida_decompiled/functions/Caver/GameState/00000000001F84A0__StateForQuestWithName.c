/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F84A0
 * Mangled: ._ZN5Caver9GameState21StateForQuestWithNameERKSs
 * Demangled: Caver::GameState::StateForQuestWithName(std::string const&)
 *
 * Callers: 6
 *   0x000000000035DC24  sub_35DC24
 *   0x000000000035E640  sub_35E640
 *   0x000000000035E8A0  sub_35E8A0
 *   0x000000000035EB00  sub_35EB00
 *   0x000000000039FB4C  Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *
 * Callees: 1
 *   0x00000000003B7E84  Caver::GameState::StateForQuestWithName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F84A8 string=0x00000000001F84AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameState::StateForQuestWithName()
{
  return _ZN5Caver9GameState21StateForQuestWithNameERKSs();
}

