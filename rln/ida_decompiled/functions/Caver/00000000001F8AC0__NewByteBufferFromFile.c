/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8AC0
 * Mangled: ._ZN5Caver21NewByteBufferFromFileERKSsPj
 * Demangled: Caver::NewByteBufferFromFile(std::string const&,uint *)
 *
 * Callers: 2
 *   0x00000000003C0CE0  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *   0x000000000048933C  Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *
 * Callees: 1
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8AC8 string=0x00000000001F8ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::NewByteBufferFromFile()
{
  JUMPOUT(0x489258);
}

