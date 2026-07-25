/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5B40
 * Mangled: .fread
 * Demangled: .fread
 *
 * Callers: 8
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x00000000004B73A0  boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *   0x00000000004D65E0  Caver::BinaryFile::ReadInt32(void)
 *   0x00000000004D671C  Caver::BinaryFile::ReadData(uchar *,int)
 *   0x00000000004D67BC  Caver::BinaryFile::SHA1Hash(void)
 *   0x00000000004F9F24  sub_4F9F24
 *   0x0000000000513A00  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *   0x000000000053E114  sub_53E114
 *
 * Callees: 1
 *   0x00000000006FE698  fread
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5B48 string=0x00000000001F5B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
size_t fread(void *ptr, size_t size, size_t n, FILE *stream)
{
  return fread(ptr, size, n, stream);
}

