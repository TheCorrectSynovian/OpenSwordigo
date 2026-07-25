/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A3A8
 * Mangled: sub_56A3A8
 * Demangled: sub_56A3A8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 6
 *   insn=0x000000000056A3B0 string=0x000000000056A3B4 "a"
 *   insn=0x000000000056A3C0 string=0x000000000056A3C4 "!<G"
 *   insn=0x000000000056A3CC string=0x000000000056A3D0 """
 *   insn=0x000000000056A3D0 string=0x000000000056A3D4 "B"
 *   insn=0x000000000056A3D4 string=0x000000000056A3D8 """
 *   insn=0x000000000056A3E4 string=0x000000000056A3E8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56A3A8(__int64 a1)
{
  unsigned int *v2; // x1
  unsigned int v3; // w2

  if ( (__int64 *)a1 != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v2 = (unsigned int *)(a1 + 16);
      do
        v3 = __ldaxr(v2);
      while ( __stlxr(v3 + 1, v2) );
    }
    else
    {
      ++*(_DWORD *)(a1 + 16);
    }
  }
  return a1 + 24;
}

