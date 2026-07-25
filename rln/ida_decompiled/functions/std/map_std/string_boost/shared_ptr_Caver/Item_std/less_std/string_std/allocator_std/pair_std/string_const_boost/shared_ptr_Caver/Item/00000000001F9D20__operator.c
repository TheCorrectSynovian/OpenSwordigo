/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9D20
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver4ItemEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *   0x00000000003B0788  Caver::GameData::ItemForName(std::string const&)
 *
 * Callees: 1
 *   0x00000000003B07DC  std::map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9D28 string=0x00000000001F9D2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::Item>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver4ItemEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

