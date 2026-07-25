/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7230
 * Mangled: .readdir
 * Demangled: .readdir
 *
 * Callers: 1
 *   0x00000000004B48B4  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *
 * Callees: 1
 *   0x00000000006FE778  readdir
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7238 string=0x00000000001F723C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
struct dirent *readdir(DIR *dirp)
{
  return readdir(dirp);
}

