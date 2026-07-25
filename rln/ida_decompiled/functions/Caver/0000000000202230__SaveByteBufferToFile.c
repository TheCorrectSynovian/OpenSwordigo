/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202230
 * Mangled: ._ZN5Caver20SaveByteBufferToFileEPKhjRKSs
 * Demangled: Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *
 * Callers: 3
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x00000000004893DC  Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202238 string=0x000000000020223C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SaveByteBufferToFile()
{
  return _ZN5Caver20SaveByteBufferToFileEPKhjRKSs();
}

