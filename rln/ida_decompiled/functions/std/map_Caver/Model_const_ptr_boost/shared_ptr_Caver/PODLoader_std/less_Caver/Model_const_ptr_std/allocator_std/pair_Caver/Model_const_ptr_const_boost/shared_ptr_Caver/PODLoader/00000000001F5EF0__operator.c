/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5EF0
 * Mangled: ._ZNSt3mapIPKN5Caver5ModelEN5boost10shared_ptrINS0_9PODLoaderEEESt4lessIS3_ESaISt4pairIKS3_S7_EEEixERSB_
 * Demangled: std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *
 * Callers: 1
 *   0x000000000044B5C4  Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Callees: 1
 *   0x000000000044BEF4  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5EF8 string=0x00000000001F5EFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>>::operator[]()
{
  return _ZNSt3mapIPKN5Caver5ModelEN5boost10shared_ptrINS0_9PODLoaderEEESt4lessIS3_ESaISt4pairIKS3_S7_EEEixERSB_();
}

