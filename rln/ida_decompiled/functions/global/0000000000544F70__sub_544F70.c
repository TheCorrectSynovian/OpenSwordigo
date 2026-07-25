/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544F70
 * Mangled: sub_544F70
 * Demangled: sub_544F70
 *
 * Callers: 1
 *   0x000000000054503C  sub_54503C
 *
 * Callees: 4
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x0000000000544F84 string=0x0000000000544F8C "`"
 *   insn=0x0000000000544F90 string=0x0000000000544F98 "`."
 *   insn=0x0000000000544F9C string=0x0000000000544FA0 "b*@"
 *   insn=0x0000000000544FA4 string=0x0000000000544FA8 "`"
 *   insn=0x0000000000544FA8 string=0x0000000000544FAC "@`"
 *   insn=0x0000000000544FAC string=0x0000000000544FB0 "!"
 *   insn=0x0000000000544FBC string=0x0000000000544FC0 "`"
 *   insn=0x0000000000544FC0 string=0x0000000000544FC4 "!$E"
 *   insn=0x0000000000544FC4 string=0x0000000000544FC8 "!@"
 *   insn=0x0000000000544FC8 string=0x0000000000544FCC "a"
 *   insn=0x0000000000544FCC string=0x0000000000544FD0 ">"
 *   insn=0x0000000000544FD4 string=0x0000000000544FD8 "`b"
 *   insn=0x0000000000544FD8 string=0x0000000000544FDC "!<E"
 *   insn=0x0000000000544FDC string=0x0000000000544FE0 "!@"
 *   insn=0x0000000000544FE0 string=0x0000000000544FE4 "a."
 *   insn=0x0000000000544FE4 string=0x0000000000544FE8 "}t"
 *   insn=0x0000000000544FF8 string=0x0000000000544FFC "!<G"
 *   insn=0x0000000000544FFC string=0x0000000000545000 "a"
 *   insn=0x0000000000545000 string=0x0000000000545004 "B "
 *   insn=0x0000000000545000 string=0x000000000054502C "A"
 *   insn=0x0000000000545004 string=0x0000000000545008 "A"
 *   insn=0x0000000000545008 string=0x000000000054500C "#"
 *   insn=0x000000000054500C string=0x0000000000545010 "C"
 *   insn=0x0000000000545014 string=0x0000000000545018 "?"
 *   insn=0x000000000054502C string=0x0000000000545030 "#"
 *   insn=0x0000000000545030 string=0x0000000000545034 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_544F70(__int64 a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v5; // x2
  int v6; // w1

  *(_QWORD *)a1 = off_6B7298;
  *(_QWORD *)(a1 + 88) = off_6B72C0;
  v2 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 8) = off_6DA7B0;
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
  *(_QWORD *)(a1 + 8) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 64));
  *(_QWORD *)(a1 + 88) = off_6B6B30;
  return sub_5221DC((_QWORD *)(a1 + 88));
}

