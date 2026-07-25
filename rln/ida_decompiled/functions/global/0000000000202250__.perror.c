/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202250
 * Mangled: .perror
 * Demangled: .perror
 *
 * Callers: 2
 *   0x00000000004B487C  Caver::DeleteFileAtPath(std::string const&)
 *   0x00000000004B48B4  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *
 * Callees: 1
 *   0x00000000006FEC10  perror
 *
 * Referenced strings: 1
 *   insn=0x0000000000202258 string=0x000000000020225C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void perror(const char *s)
{
  perror(s);
}

