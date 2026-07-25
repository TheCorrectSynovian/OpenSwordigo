/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE050
 * Mangled: ._ZN5Caver9PODLoader23CreateAnimationFromFileERKSs
 * Demangled: Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Callers: 1
 *   0x000000000044BEF4  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *
 * Callees: 1
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE058 string=0x00000000001FE05C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PODLoader::CreateAnimationFromFile()
{
  return _ZN5Caver9PODLoader23CreateAnimationFromFileERKSs();
}

