/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201180
 * Mangled: .fopen
 * Demangled: .fopen
 *
 * Callers: 8
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *   0x00000000004D6368  Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x000000000050640C  CPVRTModelPOD::SavePOD(char const*,char const*,char const*)
 *   0x0000000000513A00  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *   0x000000000051F5E8  sub_51F5E8
 *
 * Callees: 1
 *   0x00000000006FEBA8  fopen
 *
 * Referenced strings: 1
 *   insn=0x0000000000201188 string=0x000000000020118C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
FILE *fopen(const char *filename, const char *modes)
{
  return fopen(filename, modes);
}

