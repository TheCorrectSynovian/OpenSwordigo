/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC0B0
 * Mangled: ._ZNSt6vectorIPN5Caver10QuestStateESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestState **,std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>>,Caver::QuestState * const&)
 *
 * Callers: 2
 *   0x00000000003B7EC0  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *   0x00000000003B8228  Caver::GameState::GetAllQuestsInProgress(std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>> *)
 *
 * Callees: 1
 *   0x00000000003BA324  std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestState **,std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>>,Caver::QuestState * const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC0B8 string=0x00000000001FC0BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::vector<Caver::QuestState *>::_M_insert_aux(int a1, void *a2)
{
  return _ZNSt6vectorIPN5Caver10QuestStateESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_(a1, a2);
}

