/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE440
 * Mangled: .printf
 * Demangled: .printf
 *
 * Callers: 9
 *   0x00000000002C1CC8  Caver::TestTriangulation(void)
 *   0x000000000045A948  Caver::ObjectLibrary::FindLibrariesDirectoryFromParentDirectories(std::string const&)
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x000000000047D590  Caver::SetResourcesPath(std::string const&)
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *   0x00000000004CDAB4  Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *   0x00000000004D2F1C  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000006FEA68  printf
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE448 string=0x00000000001FE44C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int printf(const char *format, ...)
{
  return printf(format);
}

