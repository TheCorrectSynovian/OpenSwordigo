/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE8D0
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIKN5Caver17KeyframeAnimationEEESt4lessISsESaISt4pairIKSsS5_EEEixERS9_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::KeyframeAnimation const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x000000000044BEF4  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *
 * Callees: 1
 *   0x000000000044C70C  std::map<std::string,boost::shared_ptr<Caver::KeyframeAnimation const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE8D8 string=0x00000000001FE8DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::KeyframeAnimation const>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIKN5Caver17KeyframeAnimationEEESt4lessISsESaISt4pairIKSsS5_EEEixERS9_();
}

