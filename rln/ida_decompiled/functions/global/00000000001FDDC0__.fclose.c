/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDDC0
 * Mangled: .fclose
 * Demangled: .fclose
 *
 * Callers: 9
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *   0x00000000004D64EC  Caver::BinaryFile::~BinaryFile()
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x000000000050640C  CPVRTModelPOD::SavePOD(char const*,char const*,char const*)
 *   0x0000000000513A00  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *   0x000000000051F468  sub_51F468
 *   0x000000000051F694  sub_51F694
 *
 * Callees: 1
 *   0x00000000006FEA30  fclose
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDDC8 string=0x00000000001FDDCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int fclose(FILE *stream)
{
  return fclose(stream);
}

