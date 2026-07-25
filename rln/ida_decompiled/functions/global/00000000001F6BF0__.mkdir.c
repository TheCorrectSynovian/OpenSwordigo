/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6BF0
 * Mangled: .mkdir
 * Demangled: .mkdir
 *
 * Callers: 1
 *   0x00000000004B456C  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000006FE758  mkdir
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6BF8 string=0x00000000001F6BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int mkdir(const char *path, __mode_t mode)
{
  return mkdir(path, mode);
}

