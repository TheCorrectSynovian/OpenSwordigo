/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545774
 * Mangled: sub_545774
 * Demangled: sub_545774
 *
 * Callers: 2
 *   0x0000000000545854  sub_545854
 *   0x000000000054585C  sub_54585C
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x0000000000545788 string=0x0000000000545790 "`"
 *   insn=0x0000000000545794 string=0x000000000054579C "`6"
 *   insn=0x00000000005457A0 string=0x00000000005457A4 "b2@"
 *   insn=0x00000000005457A8 string=0x00000000005457AC "`\n"
 *   insn=0x00000000005457B0 string=0x00000000005457B8 "`"
 *   insn=0x00000000005457B8 string=0x00000000005457BC "@`"
 *   insn=0x00000000005457BC string=0x00000000005457C0 "!"
 *   insn=0x00000000005457C4 string=0x00000000005457C8 "A"
 *   insn=0x00000000005457CC string=0x00000000005457D0 "`B"
 *   insn=0x00000000005457D0 string=0x00000000005457D4 "!$E"
 *   insn=0x00000000005457D4 string=0x00000000005457D8 "!@"
 *   insn=0x00000000005457D8 string=0x00000000005457DC "a"
 *   insn=0x00000000005457DC string=0x00000000005457E0 ":"
 *   insn=0x00000000005457E4 string=0x00000000005457E8 "`"
 *   insn=0x00000000005457E8 string=0x00000000005457EC "!<E"
 *   insn=0x00000000005457EC string=0x00000000005457F0 "!@"
 *   insn=0x00000000005457F0 string=0x00000000005457F4 "a6"
 *   insn=0x00000000005457F4 string=0x00000000005457F8 "yr"
 *   insn=0x0000000000545800 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000545810 string=0x0000000000545814 "!<G"
 *   insn=0x0000000000545814 string=0x0000000000545818 "a"
 *   insn=0x0000000000545818 string=0x000000000054581C "B "
 *   insn=0x0000000000545818 string=0x0000000000545844 "A"
 *   insn=0x000000000054581C string=0x0000000000545820 "A"
 *   insn=0x0000000000545820 string=0x0000000000545824 "#"
 *   insn=0x0000000000545824 string=0x0000000000545828 "C"
 *   insn=0x000000000054582C string=0x0000000000545830 "?"
 *   insn=0x0000000000545844 string=0x0000000000545848 "#"
 *   insn=0x0000000000545848 string=0x000000000054584C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_545774(void *a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)a1 = off_6B7338;
  *((_QWORD *)a1 + 13) = off_6B7388;
  v2 = *((_QWORD *)a1 + 12);
  *((_QWORD *)a1 + 2) = off_6B7360;
  *((_QWORD *)a1 + 3) = off_6DA7B0;
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
  *((_QWORD *)a1 + 3) = off_6B7710;
  sub_53C0C8((unsigned int **)a1 + 10);
  *((_QWORD *)a1 + 13) = off_6B6B30;
  sub_5221DC((_QWORD *)a1 + 13);
  operator delete(a1);
}

