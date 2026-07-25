/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE200
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIKN5Caver5ModelEEESt4lessISsESaISt4pairIKSsS5_EEEixERS9_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::Model const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x000000000044B5C4  Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Callees: 1
 *   0x000000000044BAB0  std::map<std::string,boost::shared_ptr<Caver::Model const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE208 string=0x00000000001FE20C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::Model const>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIKN5Caver5ModelEEESt4lessISsESaISt4pairIKSsS5_EEEixERS9_();
}

