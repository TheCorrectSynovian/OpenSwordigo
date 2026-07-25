/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005452E8
 * Mangled: sub_5452E8
 * Demangled: sub_5452E8
 *
 * Callers: 1
 *   0x00000000005453BC  sub_5453BC
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 27
 *   insn=0x00000000005452FC string=0x0000000000545304 "`"
 *   insn=0x0000000000545308 string=0x0000000000545310 "`."
 *   insn=0x0000000000545314 string=0x0000000000545318 "b*@"
 *   insn=0x000000000054531C string=0x0000000000545320 "`"
 *   insn=0x0000000000545320 string=0x0000000000545324 "@`"
 *   insn=0x0000000000545324 string=0x0000000000545328 "!"
 *   insn=0x000000000054532C string=0x0000000000545330 "A"
 *   insn=0x0000000000545334 string=0x0000000000545338 "`"
 *   insn=0x0000000000545338 string=0x000000000054533C "!$E"
 *   insn=0x000000000054533C string=0x0000000000545340 "!@"
 *   insn=0x0000000000545340 string=0x0000000000545344 "a"
 *   insn=0x0000000000545344 string=0x0000000000545348 "`"
 *   insn=0x000000000054534C string=0x0000000000545350 "`b"
 *   insn=0x0000000000545350 string=0x0000000000545354 "!<E"
 *   insn=0x0000000000545354 string=0x0000000000545358 "!@"
 *   insn=0x0000000000545358 string=0x000000000054535C "a."
 *   insn=0x0000000000545368 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000545378 string=0x000000000054537C "!<G"
 *   insn=0x000000000054537C string=0x0000000000545380 "a"
 *   insn=0x0000000000545380 string=0x0000000000545384 "B "
 *   insn=0x0000000000545380 string=0x00000000005453AC "A"
 *   insn=0x0000000000545384 string=0x0000000000545388 "A"
 *   insn=0x0000000000545388 string=0x000000000054538C "#"
 *   insn=0x000000000054538C string=0x0000000000545390 "C"
 *   insn=0x0000000000545394 string=0x0000000000545398 "?"
 *   insn=0x00000000005453AC string=0x00000000005453B0 "#"
 *   insn=0x00000000005453B0 string=0x00000000005453B4 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_5452E8(void *a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)a1 = off_6B7298;
  *((_QWORD *)a1 + 11) = off_6B72C0;
  v2 = *((_QWORD *)a1 + 10);
  *((_QWORD *)a1 + 1) = off_6DA7B0;
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
  *((_QWORD *)a1 + 1) = off_6B7710;
  sub_53C0C8((unsigned int **)a1 + 8);
  *((_QWORD *)a1 + 11) = off_6B6B30;
  sub_5221DC((_QWORD *)a1 + 11);
  operator delete(a1);
}

