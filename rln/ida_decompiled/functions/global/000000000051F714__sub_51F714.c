/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F714
 * Mangled: sub_51F714
 * Demangled: sub_51F714
 *
 * Callers: 4
 *   0x000000000055DF60  sub_55DF60
 *   0x000000000055E3D8  sub_55E3D8
 *   0x000000000055E85C  sub_55E85C
 *   0x000000000055EAE0  sub_55EAE0
 *
 * Callees: 3
 *   0x00000000001F75A0  .read
 *   0x00000000001F9C10  .__errno
 *   0x0000000000202CF0  .fileno
 *
 * Referenced strings: 4
 *   insn=0x000000000051F730 string=0x000000000051F734 "o"
 *   insn=0x000000000051F740 string=0x00000000001F75A0 "0'"
 *   insn=0x000000000051F74C string=0x000000000051F764 "+i"
 *   insn=0x000000000051F764 string=0x00000000001F9C10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

ssize_t __fastcall sub_51F714(FILE **a1, void *a2, size_t a3)
{
  int v6; // w0
  ssize_t result; // x0

  while ( 1 )
  {
    v6 = fileno(*a1);
    result = read(v6, a2, a3);
    if ( result != -1 )
      break;
    if ( *(_DWORD *)__errno() != 4 )
      return -1;
  }
  return result;
}

