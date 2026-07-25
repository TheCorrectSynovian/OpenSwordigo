/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD440
 * Mangled: ._ZNSt3mapISsN5boost13intrusive_ptrIN5Caver7TextureEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD448 string=0x00000000001FD44C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<std::string,boost::intrusive_ptr<Caver::Texture>>::operator[]()
{
  JUMPOUT(0x4CC780);
}

