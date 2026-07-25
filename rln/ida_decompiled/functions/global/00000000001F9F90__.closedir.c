/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9F90
 * Mangled: .closedir
 * Demangled: .closedir
 *
 * Callers: 1
 *   0x00000000004B48B4  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *
 * Callees: 1
 *   0x00000000006FE870  closedir
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9F98 string=0x00000000001F9F9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int closedir(DIR *dirp)
{
  return closedir(dirp);
}

