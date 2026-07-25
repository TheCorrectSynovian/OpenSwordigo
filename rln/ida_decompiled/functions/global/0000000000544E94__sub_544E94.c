/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544E94
 * Mangled: sub_544E94
 * Demangled: sub_544E94
 *
 * Callers: 1
 *   0x0000000000544F60  sub_544F60
 *
 * Callees: 4
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x0000000000544EA8 string=0x0000000000544EB0 "`"
 *   insn=0x0000000000544EB4 string=0x0000000000544EBC "`."
 *   insn=0x0000000000544EC0 string=0x0000000000544EC4 "b*@"
 *   insn=0x0000000000544EC8 string=0x0000000000544ECC "`"
 *   insn=0x0000000000544ECC string=0x0000000000544ED0 "@`"
 *   insn=0x0000000000544ED0 string=0x0000000000544ED4 "!"
 *   insn=0x0000000000544EE0 string=0x0000000000544EE4 "`"
 *   insn=0x0000000000544EE4 string=0x0000000000544EE8 "!"
 *   insn=0x0000000000544EE8 string=0x0000000000544EEC "!@"
 *   insn=0x0000000000544EEC string=0x0000000000544EF0 "a"
 *   insn=0x0000000000544EF0 string=0x0000000000544EF4 "u"
 *   insn=0x0000000000544EF8 string=0x0000000000544EFC "`b"
 *   insn=0x0000000000544EFC string=0x0000000000544F00 "!$E"
 *   insn=0x0000000000544F00 string=0x0000000000544F04 "!@"
 *   insn=0x0000000000544F04 string=0x0000000000544F08 "a."
 *   insn=0x0000000000544F1C string=0x0000000000544F20 "!<G"
 *   insn=0x0000000000544F20 string=0x0000000000544F24 "a"
 *   insn=0x0000000000544F24 string=0x0000000000544F28 "B "
 *   insn=0x0000000000544F24 string=0x0000000000544F50 "A"
 *   insn=0x0000000000544F28 string=0x0000000000544F2C "A"
 *   insn=0x0000000000544F2C string=0x0000000000544F30 "#"
 *   insn=0x0000000000544F30 string=0x0000000000544F34 "C"
 *   insn=0x0000000000544F38 string=0x0000000000544F3C "?"
 *   insn=0x0000000000544F44 string=0x0000000000544F48 "E"
 *   insn=0x0000000000544F50 string=0x0000000000544F54 "#"
 *   insn=0x0000000000544F54 string=0x0000000000544F58 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_544E94(__int64 a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v5; // x2
  int v6; // w1

  *(_QWORD *)a1 = off_6B7448;
  *(_QWORD *)(a1 + 88) = off_6B7470;
  v2 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 8) = off_6DA9F0;
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v5 = (unsigned int *)(v2 - 8);
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v6 - 1;
    }
    if ( v6 <= 0 )
      operator delete(v3);
  }
  *(_QWORD *)(a1 + 8) = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 64));
  *(_QWORD *)(a1 + 88) = off_6B6B50;
  return sub_5221DC((_QWORD *)(a1 + 88));
}

