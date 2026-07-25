/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3E90
 * Mangled: _ZN5Caver15StateProperties7AddFlagERKSs
 * Demangled: Caver::StateProperties::AddFlag(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F71F0  Caver::StateProperties::AddFlag(std::string const&)
 *
 * Callees: 1
 *   0x00000000002003A0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StateProperties::AddFlag(void)
{
  return std::set<std::string>::insert();
}

