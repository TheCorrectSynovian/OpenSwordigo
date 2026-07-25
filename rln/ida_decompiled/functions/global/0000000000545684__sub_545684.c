/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545684
 * Mangled: sub_545684
 * Demangled: sub_545684
 *
 * Callers: 2
 *   0x000000000054575C  sub_54575C
 *   0x0000000000545764  sub_545764
 *
 * Callees: 4
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 27
 *   insn=0x0000000000545698 string=0x00000000005456A0 "`"
 *   insn=0x00000000005456A4 string=0x00000000005456AC "`6"
 *   insn=0x00000000005456B0 string=0x00000000005456B4 "b2@"
 *   insn=0x00000000005456B8 string=0x00000000005456BC "`\n"
 *   insn=0x00000000005456C0 string=0x00000000005456C8 "`"
 *   insn=0x00000000005456C8 string=0x00000000005456CC "@`"
 *   insn=0x00000000005456CC string=0x00000000005456D0 "!"
 *   insn=0x00000000005456DC string=0x00000000005456E0 "`B"
 *   insn=0x00000000005456E0 string=0x00000000005456E4 "!"
 *   insn=0x00000000005456E4 string=0x00000000005456E8 "!@"
 *   insn=0x00000000005456E8 string=0x00000000005456EC "a"
 *   insn=0x00000000005456EC string=0x00000000005456F0 "v"
 *   insn=0x00000000005456F4 string=0x00000000005456F8 "`"
 *   insn=0x00000000005456F8 string=0x00000000005456FC "!$E"
 *   insn=0x00000000005456FC string=0x0000000000545700 "!@"
 *   insn=0x0000000000545700 string=0x0000000000545704 "a6"
 *   insn=0x0000000000545718 string=0x000000000054571C "!<G"
 *   insn=0x000000000054571C string=0x0000000000545720 "a"
 *   insn=0x0000000000545720 string=0x0000000000545724 "B "
 *   insn=0x0000000000545720 string=0x000000000054574C "A"
 *   insn=0x0000000000545724 string=0x0000000000545728 "A"
 *   insn=0x0000000000545728 string=0x000000000054572C "#"
 *   insn=0x000000000054572C string=0x0000000000545730 "C"
 *   insn=0x0000000000545734 string=0x0000000000545738 "?"
 *   insn=0x0000000000545740 string=0x0000000000545744 "F"
 *   insn=0x000000000054574C string=0x0000000000545750 "#"
 *   insn=0x0000000000545750 string=0x0000000000545754 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_545684(__int64 a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v5; // x2
  int v6; // w1

  *(_QWORD *)a1 = off_6B74E8;
  *(_QWORD *)(a1 + 104) = off_6B7538;
  v2 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 16) = off_6B7510;
  *(_QWORD *)(a1 + 24) = off_6DA9F0;
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
  *(_QWORD *)(a1 + 24) = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 80));
  *(_QWORD *)(a1 + 104) = off_6B6B50;
  return sub_5221DC((_QWORD *)(a1 + 104));
}

