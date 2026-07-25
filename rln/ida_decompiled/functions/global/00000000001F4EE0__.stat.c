/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4EE0
 * Mangled: .stat
 * Demangled: .stat
 *
 * Callers: 1
 *   0x00000000004B44B8  Caver::FileExistsAtPath(std::string const&)
 *
 * Callees: 1
 *   0x00000000006FE648  stat
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4EE8 string=0x00000000001F4EEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int stat(const char *file, struct stat *buf)
{
  return stat(file, buf);
}

