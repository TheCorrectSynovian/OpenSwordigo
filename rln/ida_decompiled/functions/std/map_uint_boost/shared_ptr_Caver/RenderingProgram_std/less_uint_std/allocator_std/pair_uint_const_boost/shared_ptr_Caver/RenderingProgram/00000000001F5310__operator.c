/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5310
 * Mangled: ._ZNSt3mapIjN5boost10shared_ptrIN5Caver16RenderingProgramEEESt4lessIjESaISt4pairIKjS4_EEEixERS8_
 * Demangled: std::map<uint,boost::shared_ptr<Caver::RenderingProgram>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[](uint const&)
 *
 * Callers: 3
 *   0x000000000048B9D8  Caver::RenderingContext::AddProgram(uint,boost::shared_ptr<Caver::RenderingProgram> const&)
 *   0x000000000048BA8C  std::map<uint,boost::shared_ptr<Caver::RenderingProgram>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[](uint const&)
 *   0x000000000048BCEC  Caver::RenderingContext::UseProgram(uint)
 *
 * Callees: 1
 *   0x000000000048BA8C  std::map<uint,boost::shared_ptr<Caver::RenderingProgram>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[](uint const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5318 string=0x00000000001F531C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<unsigned int,boost::shared_ptr<Caver::RenderingProgram>>::operator[]()
{
  return _ZNSt3mapIjN5boost10shared_ptrIN5Caver16RenderingProgramEEESt4lessIjESaISt4pairIKjS4_EEEixERS8_();
}

