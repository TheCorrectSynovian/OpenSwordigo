/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5F40
 * Mangled: .fseek
 * Demangled: .fseek
 *
 * Callers: 5
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x00000000004D6368  Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *   0x0000000000513A00  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *   0x000000000053DEC0  sub_53DEC0
 *   0x000000000053DF18  sub_53DF18
 *
 * Callees: 1
 *   0x00000000006FE6E0  fseek
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5F48 string=0x00000000001F5F4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int fseek(FILE *stream, __int64 off, int whence)
{
  return fseek(stream, off, whence);
}

