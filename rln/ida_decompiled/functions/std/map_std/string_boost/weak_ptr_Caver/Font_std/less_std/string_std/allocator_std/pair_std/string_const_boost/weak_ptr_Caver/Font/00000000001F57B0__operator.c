/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F57B0
 * Mangled: ._ZNSt3mapISsN5boost8weak_ptrIN5Caver4FontEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::weak_ptr<Caver::Font>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000004C3480  Caver::FontLibrary::FontWithName(std::string const&)
 *
 * Callees: 1
 *   0x00000000004C3480  Caver::FontLibrary::FontWithName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F57B8 string=0x00000000001F57BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<std::string,boost::weak_ptr<Caver::Font>>::operator[]()
{
  JUMPOUT(0x4C3CE0);
}

