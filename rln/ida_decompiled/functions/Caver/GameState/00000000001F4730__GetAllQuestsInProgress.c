/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4730
 * Mangled: ._ZN5Caver9GameState22GetAllQuestsInProgressEPSt6vectorIPNS_10QuestStateESaIS3_EE
 * Demangled: Caver::GameState::GetAllQuestsInProgress(std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>> *)
 *
 * Callers: 2
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *
 * Callees: 1
 *   0x00000000003B8228  Caver::GameState::GetAllQuestsInProgress(std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4738 string=0x00000000001F473C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameState::GetAllQuestsInProgress(int a1, int a2)
{
  return _ZN5Caver9GameState22GetAllQuestsInProgressEPSt6vectorIPNS_10QuestStateESaIS3_EE(a1, a2);
}

