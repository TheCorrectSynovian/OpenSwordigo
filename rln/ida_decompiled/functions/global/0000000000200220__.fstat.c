/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200220
 * Mangled: .fstat
 * Demangled: .fstat
 *
 * Callers: 1
 *   0x000000000051F904  sub_51F904
 *
 * Callees: 1
 *   0x00000000006FEB20  fstat
 *
 * Referenced strings: 1
 *   insn=0x0000000000200228 string=0x000000000020022C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int fstat(int fd, struct stat *buf)
{
  return fstat(fd, buf);
}

