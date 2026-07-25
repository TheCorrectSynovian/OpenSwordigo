/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056EC60
 * Mangled: sub_56EC60
 * Demangled: sub_56EC60
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 6
 *   insn=0x000000000056EC68 string=0x000000000056EC6C "a"
 *   insn=0x000000000056EC78 string=0x000000000056EC7C "!<G"
 *   insn=0x000000000056EC84 string=0x000000000056EC88 """
 *   insn=0x000000000056EC88 string=0x000000000056EC8C "B"
 *   insn=0x000000000056EC8C string=0x000000000056EC90 """
 *   insn=0x000000000056EC9C string=0x000000000056ECA0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56EC60(__int64 a1)
{
  unsigned int *v2; // x1
  unsigned int v3; // w2

  if ( (__int64 *)a1 != &qword_6FD300 )
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

