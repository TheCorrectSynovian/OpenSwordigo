/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F52E0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver10QuestStateEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::QuestState>(Caver::QuestState *)
 *
 * Callers: 2
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B7EC0  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *
 * Callees: 1
 *   0x00000000003B9AB4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::LevelState>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F52E8 string=0x00000000001F52EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::QuestState>()
{
  JUMPOUT(0x3B9B30);
}

