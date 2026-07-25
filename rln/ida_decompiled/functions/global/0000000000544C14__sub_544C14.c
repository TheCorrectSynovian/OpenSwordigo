/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544C14
 * Mangled: sub_544C14
 * Demangled: sub_544C14
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 18
 *   insn=0x0000000000544C28 string=0x0000000000544C30 "`"
 *   insn=0x0000000000544C30 string=0x0000000000544C34 "b&@"
 *   insn=0x0000000000544C34 string=0x0000000000544C38 "!"
 *   insn=0x0000000000544C38 string=0x0000000000544C3C "@`"
 *   insn=0x0000000000544C40 string=0x0000000000544C44 "A"
 *   insn=0x0000000000544C4C string=0x0000000000544C50 "!$E"
 *   insn=0x0000000000544C50 string=0x0000000000544C54 "!@"
 *   insn=0x0000000000544C58 string=0x0000000000544C5C ""
 *   insn=0x0000000000544C6C string=0x0000000000544C70 "!<G"
 *   insn=0x0000000000544C70 string=0x0000000000544C74 "a"
 *   insn=0x0000000000544C74 string=0x0000000000544C78 "B "
 *   insn=0x0000000000544C74 string=0x0000000000544CA0 "A"
 *   insn=0x0000000000544C78 string=0x0000000000544C7C "A"
 *   insn=0x0000000000544C7C string=0x0000000000544C80 "#"
 *   insn=0x0000000000544C80 string=0x0000000000544C84 "C"
 *   insn=0x0000000000544C88 string=0x0000000000544C8C "?"
 *   insn=0x0000000000544CA0 string=0x0000000000544CA4 "#"
 *   insn=0x0000000000544CA4 string=0x0000000000544CA8 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_544C14(__int64 a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)a1 = off_6DA7B0;
  v2 = *(_QWORD *)(a1 + 72);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v4 = (unsigned int *)(v2 - 8);
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
  *(_QWORD *)a1 = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 56));
}

