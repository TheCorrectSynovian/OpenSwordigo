/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002002E0
 * Mangled: ._ZNSt3mapISsN5Caver14CharacterState9ItemStateESt4lessISsESaISt4pairIKSsS2_EEEixERS6_
 * Demangled: std::map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x00000000003AB174  Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *   0x00000000003AC900  Caver::CharacterState::AddItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003ABBF8  std::map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002002E8 string=0x00000000002002EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,Caver::CharacterState::ItemState>::operator[]()
{
  return _ZNSt3mapISsN5Caver14CharacterState9ItemStateESt4lessISsESaISt4pairIKSsS2_EEEixERS6_();
}

