/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6AA0
 * Mangled: .strcpy
 * Demangled: .strcpy
 *
 * Callers: 2
 *   0x00000000004B456C  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x0000000000513E80  CPVRTMemoryFileSystem::RegisterMemoryFile(char const*,void const*,ulong,bool)
 *
 * Callees: 1
 *   0x00000000006FE748  strcpy
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6AA8 string=0x00000000001F6AAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
char *strcpy(char *a1, const char *a2)
{
  return strcpy(a1, a2);
}

