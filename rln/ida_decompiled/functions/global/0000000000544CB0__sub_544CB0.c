/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544CB0
 * Mangled: sub_544CB0
 * Demangled: sub_544CB0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x0000000000544CC4 string=0x0000000000544CCC "`"
 *   insn=0x0000000000544CCC string=0x0000000000544CD0 "b&@"
 *   insn=0x0000000000544CD0 string=0x0000000000544CD4 "!"
 *   insn=0x0000000000544CD4 string=0x0000000000544CD8 "@`"
 *   insn=0x0000000000544CDC string=0x0000000000544CE0 "A"
 *   insn=0x0000000000544CE8 string=0x0000000000544CEC "!"
 *   insn=0x0000000000544CEC string=0x0000000000544CF0 "!@"
 *   insn=0x0000000000544D08 string=0x0000000000544D0C "!<G"
 *   insn=0x0000000000544D0C string=0x0000000000544D10 "a"
 *   insn=0x0000000000544D10 string=0x0000000000544D14 "B "
 *   insn=0x0000000000544D10 string=0x0000000000544D3C "A"
 *   insn=0x0000000000544D14 string=0x0000000000544D18 "A"
 *   insn=0x0000000000544D18 string=0x0000000000544D1C "#"
 *   insn=0x0000000000544D1C string=0x0000000000544D20 "C"
 *   insn=0x0000000000544D24 string=0x0000000000544D28 "?"
 *   insn=0x0000000000544D3C string=0x0000000000544D40 "#"
 *   insn=0x0000000000544D40 string=0x0000000000544D44 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_544CB0(__int64 a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)a1 = off_6DA9F0;
  v2 = *(_QWORD *)(a1 + 72);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD300 )
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
  *(_QWORD *)a1 = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 56));
}

