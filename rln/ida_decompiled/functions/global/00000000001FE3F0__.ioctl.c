/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE3F0
 * Mangled: .ioctl
 * Demangled: .ioctl
 *
 * Callers: 1
 *   0x000000000051F904  sub_51F904
 *
 * Callees: 1
 *   0x00000000006FEA60  ioctl
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE3F8 string=0x00000000001FE3FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int ioctl(int fd, unsigned __int64 request, ...)
{
  return ioctl(fd, request);
}

