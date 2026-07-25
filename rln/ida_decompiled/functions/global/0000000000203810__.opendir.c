/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203810
 * Mangled: .opendir
 * Demangled: .opendir
 *
 * Callers: 1
 *   0x00000000004B48B4  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *
 * Callees: 1
 *   0x00000000006FECD0  opendir
 *
 * Referenced strings: 1
 *   insn=0x0000000000203818 string=0x000000000020381C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
DIR *opendir(const char *name)
{
  return opendir(name);
}

