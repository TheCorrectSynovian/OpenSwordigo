/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200890
 * Mangled: .writev
 * Demangled: .writev
 *
 * Callers: 1
 *   0x000000000051F7D8  sub_51F7D8
 *
 * Callees: 1
 *   0x00000000006FEB70  writev
 *
 * Referenced strings: 1
 *   insn=0x0000000000200898 string=0x000000000020089C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
ssize_t writev(int fd, const struct iovec *iovec, int count)
{
  return writev(fd, iovec, count);
}

