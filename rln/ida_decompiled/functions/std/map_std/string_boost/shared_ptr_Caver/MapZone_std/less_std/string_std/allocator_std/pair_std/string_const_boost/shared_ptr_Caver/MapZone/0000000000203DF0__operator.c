/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203DF0
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver7MapZoneEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::MapZone>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203DF8 string=0x0000000000203DFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<std::string,boost::shared_ptr<Caver::MapZone>>::operator[]()
{
  JUMPOUT(0x3BB758);
}

