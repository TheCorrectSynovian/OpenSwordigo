/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCA20
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver11EntityClassEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::EntityClass>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000003B0278  Caver::GameData::AddEntityClass(boost::shared_ptr<Caver::EntityClass> const&)
 *
 * Callees: 1
 *   0x00000000003B126C  std::map<std::string,boost::shared_ptr<Caver::EntityClass>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCA28 string=0x00000000001FCA2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::EntityClass>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver11EntityClassEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

