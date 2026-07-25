/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9B10
 * Mangled: ._ZN5Caver9GameState24AddStateForQuestWithNameERKSs
 * Demangled: Caver::GameState::AddStateForQuestWithName(std::string const&)
 *
 * Callers: 2
 *   0x000000000035EB00  sub_35EB00
 *   0x000000000039FB4C  Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000003B7EC0  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9B18 string=0x00000000001F9B1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameState::AddStateForQuestWithName()
{
  return _ZN5Caver9GameState24AddStateForQuestWithNameERKSs();
}

