/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF100
 * Mangled: .write
 * Demangled: .write
 *
 * Callers: 3
 *   0x000000000051E6AC  __cxa_pure_virtual
 *   0x000000000051E6CC  __cxa_deleted_virtual
 *   0x000000000051F3E0  sub_51F3E0
 *
 * Callees: 1
 *   0x00000000006FEAC0  write
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF108 string=0x00000000001FF10C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
ssize_t write(int fd, const void *buf, size_t n)
{
  return write(fd, buf, n);
}

