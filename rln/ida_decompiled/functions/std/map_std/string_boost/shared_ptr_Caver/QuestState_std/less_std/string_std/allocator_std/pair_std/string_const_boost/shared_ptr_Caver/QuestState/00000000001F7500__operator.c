/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7500
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver10QuestStateEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B7EC0  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *
 * Callees: 1
 *   0x00000000003B71CC  std::map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7508 string=0x00000000001F750C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::QuestState>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver10QuestStateEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

