/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002032B0
 * Mangled: ._ZNSt3mapISsN5boost8weak_ptrIN5Caver13ObjectLibraryEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *
 * Callees: 1
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002032B8 string=0x00000000002032BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<std::string,boost::weak_ptr<Caver::ObjectLibrary>>::operator[]()
{
  JUMPOUT(0x45B390);
}

