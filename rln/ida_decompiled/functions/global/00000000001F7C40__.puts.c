/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7C40
 * Mangled: .puts
 * Demangled: .puts
 *
 * Callers: 4
 *   0x000000000045A948  Caver::ObjectLibrary::FindLibrariesDirectoryFromParentDirectories(std::string const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x00000000004AE974  Caver::Matrix4::Inverse(void)
 *   0x00000000004CDAB4  Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *
 * Callees: 1
 *   0x00000000006FE7B8  puts
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7C48 string=0x00000000001F7C4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int puts(const char *s)
{
  return puts(s);
}

