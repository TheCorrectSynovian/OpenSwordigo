/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054504C
 * Mangled: sub_54504C
 * Demangled: sub_54504C
 *
 * Callers: 1
 *   0x0000000000545118  sub_545118
 *
 * Callees: 4
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x0000000000545060 string=0x0000000000545068 "`"
 *   insn=0x000000000054506C string=0x0000000000545074 "`2"
 *   insn=0x0000000000545078 string=0x000000000054507C "b.@"
 *   insn=0x0000000000545080 string=0x0000000000545084 "`\n"
 *   insn=0x0000000000545084 string=0x0000000000545088 "@`"
 *   insn=0x0000000000545088 string=0x000000000054508C "!"
 *   insn=0x0000000000545098 string=0x000000000054509C "`""
 *   insn=0x000000000054509C string=0x00000000005450A0 "!$E"
 *   insn=0x00000000005450A0 string=0x00000000005450A4 "!@"
 *   insn=0x00000000005450A4 string=0x00000000005450A8 "a\n"
 *   insn=0x00000000005450A8 string=0x00000000005450AC ""
 *   insn=0x00000000005450B0 string=0x00000000005450B4 "`"
 *   insn=0x00000000005450B4 string=0x00000000005450B8 "!<E"
 *   insn=0x00000000005450B8 string=0x00000000005450BC "!@"
 *   insn=0x00000000005450BC string=0x00000000005450C0 "a2"
 *   insn=0x00000000005450C0 string=0x00000000005450C4 "Ft"
 *   insn=0x00000000005450D4 string=0x00000000005450D8 "!<G"
 *   insn=0x00000000005450D8 string=0x00000000005450DC "a"
 *   insn=0x00000000005450DC string=0x00000000005450E0 "B "
 *   insn=0x00000000005450DC string=0x0000000000545108 "A"
 *   insn=0x00000000005450E0 string=0x00000000005450E4 "A"
 *   insn=0x00000000005450E4 string=0x00000000005450E8 "#"
 *   insn=0x00000000005450E8 string=0x00000000005450EC "C"
 *   insn=0x00000000005450F0 string=0x00000000005450F4 "?"
 *   insn=0x0000000000545108 string=0x000000000054510C "#"
 *   insn=0x000000000054510C string=0x0000000000545110 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54504C(__int64 a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v5; // x2
  int v6; // w1

  *(_QWORD *)a1 = off_6B7228;
  *(_QWORD *)(a1 + 96) = off_6B7250;
  v2 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 16) = off_6DA7B0;
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
  *(_QWORD *)(a1 + 16) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 72));
  *(_QWORD *)(a1 + 96) = off_6B6B30;
  return sub_5221DC((_QWORD *)(a1 + 96));
}

