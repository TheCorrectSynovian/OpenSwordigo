/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD410
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver13PlayerProfileEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000003A6E14  Caver::ProfileManager::AddProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x00000000003A69D0  std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD418 string=0x00000000001FD41C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver13PlayerProfileEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

