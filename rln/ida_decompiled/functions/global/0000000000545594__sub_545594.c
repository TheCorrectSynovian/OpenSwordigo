/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545594
 * Mangled: sub_545594
 * Demangled: sub_545594
 *
 * Callers: 2
 *   0x000000000054566C  sub_54566C
 *   0x0000000000545674  sub_545674
 *
 * Callees: 4
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x00000000005455A8 string=0x00000000005455B0 "`"
 *   insn=0x00000000005455B4 string=0x00000000005455BC "`6"
 *   insn=0x00000000005455C0 string=0x00000000005455C4 "b2@"
 *   insn=0x00000000005455C8 string=0x00000000005455CC "`\n"
 *   insn=0x00000000005455D0 string=0x00000000005455D8 "`"
 *   insn=0x00000000005455D8 string=0x00000000005455DC "@`"
 *   insn=0x00000000005455DC string=0x00000000005455E0 "!"
 *   insn=0x00000000005455EC string=0x00000000005455F0 "`B"
 *   insn=0x00000000005455F0 string=0x00000000005455F4 "!$E"
 *   insn=0x00000000005455F4 string=0x00000000005455F8 "!@"
 *   insn=0x00000000005455F8 string=0x00000000005455FC "a"
 *   insn=0x0000000000545604 string=0x0000000000545608 "`"
 *   insn=0x0000000000545608 string=0x000000000054560C "!<E"
 *   insn=0x000000000054560C string=0x0000000000545610 "!@"
 *   insn=0x0000000000545610 string=0x0000000000545614 "a6"
 *   insn=0x0000000000545628 string=0x000000000054562C "!<G"
 *   insn=0x000000000054562C string=0x0000000000545630 "a"
 *   insn=0x0000000000545630 string=0x0000000000545634 "B "
 *   insn=0x0000000000545630 string=0x000000000054565C "A"
 *   insn=0x0000000000545634 string=0x0000000000545638 "A"
 *   insn=0x0000000000545638 string=0x000000000054563C "#"
 *   insn=0x000000000054563C string=0x0000000000545640 "C"
 *   insn=0x0000000000545644 string=0x0000000000545648 "?"
 *   insn=0x0000000000545650 string=0x0000000000545654 "T"
 *   insn=0x000000000054565C string=0x0000000000545660 "#"
 *   insn=0x0000000000545660 string=0x0000000000545664 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_545594(__int64 a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v5; // x2
  int v6; // w1

  *(_QWORD *)a1 = off_6B7338;
  *(_QWORD *)(a1 + 104) = off_6B7388;
  v2 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 16) = off_6B7360;
  *(_QWORD *)(a1 + 24) = off_6DA7B0;
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
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
  *(_QWORD *)(a1 + 24) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 80));
  *(_QWORD *)(a1 + 104) = off_6B6B30;
  return sub_5221DC((_QWORD *)(a1 + 104));
}

