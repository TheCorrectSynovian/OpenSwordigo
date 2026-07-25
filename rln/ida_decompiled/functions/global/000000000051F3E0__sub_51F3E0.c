/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F3E0
 * Mangled: sub_51F3E0
 * Demangled: sub_51F3E0
 *
 * Callers: 2
 *   0x000000000051F798  sub_51F798
 *   0x000000000051F7D8  sub_51F7D8
 *
 * Callees: 2
 *   0x00000000001F9C10  .__errno
 *   0x00000000001FF100  .write
 *
 * Referenced strings: 4
 *   insn=0x000000000051F408 string=0x000000000051F40C "="
 *   insn=0x000000000051F410 string=0x000000000051F414 " "
 *   insn=0x000000000051F414 string=0x000000000051F418 "s"
 *   insn=0x000000000051F438 string=0x00000000001F9C10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_51F3E0(int fd, char *buf, size_t n)
{
  size_t v6; // x19
  ssize_t v7; // x0

  v6 = n;
  do
  {
    while ( 1 )
    {
      v7 = write(fd, buf, v6);
      if ( v7 == -1 )
        break;
      v6 -= v7;
      buf += v7;
      if ( !v6 )
        return n;
    }
  }
  while ( *(_DWORD *)__errno() == 4 );
  return n - v6;
}

