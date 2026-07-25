/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B7E84
 * Mangled: _ZN5Caver9GameState21StateForQuestWithNameERKSs
 * Demangled: Caver::GameState::StateForQuestWithName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F84A0  Caver::GameState::StateForQuestWithName(std::string const&)
 *
 * Callees: 1
 *   0x0000000000200420  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::find(std::string const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000003B7E90 string=0x00000000003B7E94 "`"
 *   insn=0x00000000003B7E94 string=0x00000000003B7E98 "b!"
 *   insn=0x00000000003B7E98 string=0x00000000003B7E9C "h"
 *   insn=0x00000000003B7EA0 string=0x00000000003B7EA4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameState::StateForQuestWithName(__int64 a1)
{
  __int64 v2; // x0

  v2 = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::find();
  if ( a1 + 256 == v2 )
    return 0;
  else
    return *(_QWORD *)(v2 + 40);
}

