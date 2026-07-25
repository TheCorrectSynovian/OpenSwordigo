/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203740
 * Mangled: ._ZN5Caver9GameState21GetAllCompletedQuestsEPSt6vectorIPNS_10QuestStateESaIS3_EE
 * Demangled: Caver::GameState::GetAllCompletedQuests(std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>> *)
 *
 * Callers: 1
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *
 * Callees: 1
 *   0x00000000003B7EC0  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203748 string=0x000000000020374C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameState::GetAllCompletedQuests()
{
  JUMPOUT(0x3B817C);
}

