/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEB50
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver5QuestEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::Quest>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000003B0084  Caver::GameData::AddQuest(boost::shared_ptr<Caver::Quest> const&)
 *
 * Callees: 1
 *   0x00000000003B0DCC  std::map<std::string,boost::shared_ptr<Caver::Quest>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEB58 string=0x00000000001FEB5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::Quest>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver5QuestEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

