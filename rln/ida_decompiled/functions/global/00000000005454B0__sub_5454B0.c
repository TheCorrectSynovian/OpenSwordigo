/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005454B0
 * Mangled: sub_5454B0
 * Demangled: sub_5454B0
 *
 * Callers: 1
 *   0x0000000000545584  sub_545584
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x00000000005454C4 string=0x00000000005454CC "`"
 *   insn=0x00000000005454D0 string=0x00000000005454D8 "`2"
 *   insn=0x00000000005454DC string=0x00000000005454E0 "b.@"
 *   insn=0x00000000005454E4 string=0x00000000005454E8 "`\n"
 *   insn=0x00000000005454E8 string=0x00000000005454EC "@`"
 *   insn=0x00000000005454EC string=0x00000000005454F0 "!"
 *   insn=0x00000000005454F4 string=0x00000000005454F8 "A"
 *   insn=0x00000000005454FC string=0x0000000000545500 "`""
 *   insn=0x0000000000545500 string=0x0000000000545504 "!"
 *   insn=0x0000000000545504 string=0x0000000000545508 "!@"
 *   insn=0x0000000000545508 string=0x000000000054550C "a\n"
 *   insn=0x0000000000545514 string=0x0000000000545518 "`"
 *   insn=0x0000000000545518 string=0x000000000054551C "!$E"
 *   insn=0x000000000054551C string=0x0000000000545520 "!@"
 *   insn=0x0000000000545520 string=0x0000000000545524 "a2"
 *   insn=0x0000000000545524 string=0x0000000000545528 "-s"
 *   insn=0x000000000054552C string=0x0000000000545530 "`"
 *   insn=0x0000000000545530 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000545540 string=0x0000000000545544 "!<G"
 *   insn=0x0000000000545544 string=0x0000000000545548 "a"
 *   insn=0x0000000000545548 string=0x000000000054554C "B "
 *   insn=0x0000000000545548 string=0x0000000000545574 "A"
 *   insn=0x000000000054554C string=0x0000000000545550 "A"
 *   insn=0x0000000000545550 string=0x0000000000545554 "#"
 *   insn=0x0000000000545554 string=0x0000000000545558 "C"
 *   insn=0x000000000054555C string=0x0000000000545560 "?"
 *   insn=0x0000000000545574 string=0x0000000000545578 "#"
 *   insn=0x0000000000545578 string=0x000000000054557C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_5454B0(void *a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)a1 = off_6B73D8;
  *((_QWORD *)a1 + 12) = off_6B7400;
  v2 = *((_QWORD *)a1 + 11);
  *((_QWORD *)a1 + 2) = off_6DA9F0;
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
  *((_QWORD *)a1 + 2) = off_6B7790;
  sub_53C0C8((unsigned int **)a1 + 9);
  *((_QWORD *)a1 + 12) = off_6B6B50;
  sub_5221DC((_QWORD *)a1 + 12);
  operator delete(a1);
}

