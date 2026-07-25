/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054586C
 * Mangled: sub_54586C
 * Demangled: sub_54586C
 *
 * Callers: 2
 *   0x000000000054594C  sub_54594C
 *   0x0000000000545954  sub_545954
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x0000000000545880 string=0x0000000000545888 "`"
 *   insn=0x000000000054588C string=0x0000000000545894 "`6"
 *   insn=0x0000000000545898 string=0x000000000054589C "b2@"
 *   insn=0x00000000005458A0 string=0x00000000005458A4 "`\n"
 *   insn=0x00000000005458A8 string=0x00000000005458B0 "`"
 *   insn=0x00000000005458B0 string=0x00000000005458B4 "@`"
 *   insn=0x00000000005458B4 string=0x00000000005458B8 "!"
 *   insn=0x00000000005458BC string=0x00000000005458C0 "A"
 *   insn=0x00000000005458C4 string=0x00000000005458C8 "`B"
 *   insn=0x00000000005458C8 string=0x00000000005458CC "!"
 *   insn=0x00000000005458CC string=0x00000000005458D0 "!@"
 *   insn=0x00000000005458D0 string=0x00000000005458D4 "a"
 *   insn=0x00000000005458DC string=0x00000000005458E0 "`"
 *   insn=0x00000000005458E0 string=0x00000000005458E4 "!$E"
 *   insn=0x00000000005458E4 string=0x00000000005458E8 "!@"
 *   insn=0x00000000005458E8 string=0x00000000005458EC "a6"
 *   insn=0x00000000005458EC string=0x00000000005458F0 ";r"
 *   insn=0x00000000005458F4 string=0x00000000005458F8 "n"
 *   insn=0x00000000005458F8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000545908 string=0x000000000054590C "!<G"
 *   insn=0x000000000054590C string=0x0000000000545910 "a"
 *   insn=0x0000000000545910 string=0x0000000000545914 "B "
 *   insn=0x0000000000545910 string=0x000000000054593C "A"
 *   insn=0x0000000000545914 string=0x0000000000545918 "A"
 *   insn=0x0000000000545918 string=0x000000000054591C "#"
 *   insn=0x000000000054591C string=0x0000000000545920 "C"
 *   insn=0x0000000000545924 string=0x0000000000545928 "?"
 *   insn=0x000000000054593C string=0x0000000000545940 "#"
 *   insn=0x0000000000545940 string=0x0000000000545944 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54586C(void *a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)a1 = off_6B74E8;
  *((_QWORD *)a1 + 13) = off_6B7538;
  v2 = *((_QWORD *)a1 + 12);
  *((_QWORD *)a1 + 2) = off_6B7510;
  *((_QWORD *)a1 + 3) = off_6DA9F0;
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
  *((_QWORD *)a1 + 3) = off_6B7790;
  sub_53C0C8((unsigned int **)a1 + 10);
  *((_QWORD *)a1 + 13) = off_6B6B50;
  sub_5221DC((_QWORD *)a1 + 13);
  operator delete(a1);
}

