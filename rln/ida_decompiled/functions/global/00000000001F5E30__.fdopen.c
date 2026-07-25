/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5E30
 * Mangled: .fdopen
 * Demangled: .fdopen
 *
 * Callers: 1
 *   0x000000000051F550  sub_51F550
 *
 * Callees: 1
 *   0x00000000006FE6C0  fdopen
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5E38 string=0x00000000001F5E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
FILE *fdopen(int fd, const char *modes)
{
  return fdopen(fd, modes);
}

