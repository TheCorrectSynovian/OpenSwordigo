/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F75A0
 * Mangled: .read
 * Demangled: .read
 *
 * Callers: 1
 *   0x000000000051F714  sub_51F714
 *
 * Callees: 1
 *   0x00000000006FE788  read
 *
 * Referenced strings: 1
 *   insn=0x00000000001F75A8 string=0x00000000001F75AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
ssize_t read(int fd, void *buf, size_t nbytes)
{
  return read(fd, buf, nbytes);
}

