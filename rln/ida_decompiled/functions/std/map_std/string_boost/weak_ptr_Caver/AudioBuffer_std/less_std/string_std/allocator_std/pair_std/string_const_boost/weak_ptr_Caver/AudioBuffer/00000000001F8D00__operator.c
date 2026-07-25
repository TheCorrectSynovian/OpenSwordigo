/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8D00
 * Mangled: ._ZNSt3mapISsN5boost8weak_ptrIN5Caver11AudioBufferEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Callees: 1
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8D08 string=0x00000000001F8D0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<std::string,boost::weak_ptr<Caver::AudioBuffer>>::operator[]()
{
  JUMPOUT(0x4862AC);
}

