/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005453CC
 * Mangled: sub_5453CC
 * Demangled: sub_5453CC
 *
 * Callers: 1
 *   0x00000000005454A0  sub_5454A0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x00000000005453E0 string=0x00000000005453E8 "`"
 *   insn=0x00000000005453EC string=0x00000000005453F4 "`2"
 *   insn=0x00000000005453F8 string=0x00000000005453FC "b.@"
 *   insn=0x0000000000545400 string=0x0000000000545404 "`\n"
 *   insn=0x0000000000545404 string=0x0000000000545408 "@`"
 *   insn=0x0000000000545408 string=0x000000000054540C "!"
 *   insn=0x0000000000545410 string=0x0000000000545414 "A"
 *   insn=0x0000000000545418 string=0x000000000054541C "`""
 *   insn=0x000000000054541C string=0x0000000000545420 "!$E"
 *   insn=0x0000000000545420 string=0x0000000000545424 "!@"
 *   insn=0x0000000000545424 string=0x0000000000545428 "a\n"
 *   insn=0x0000000000545428 string=0x000000000054542C "'"
 *   insn=0x0000000000545430 string=0x0000000000545434 "`"
 *   insn=0x0000000000545434 string=0x0000000000545438 "!<E"
 *   insn=0x0000000000545438 string=0x000000000054543C "!@"
 *   insn=0x000000000054543C string=0x0000000000545440 "a2"
 *   insn=0x0000000000545440 string=0x0000000000545444 "fs"
 *   insn=0x000000000054544C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054545C string=0x0000000000545460 "!<G"
 *   insn=0x0000000000545460 string=0x0000000000545464 "a"
 *   insn=0x0000000000545464 string=0x0000000000545468 "B "
 *   insn=0x0000000000545464 string=0x0000000000545490 "A"
 *   insn=0x0000000000545468 string=0x000000000054546C "A"
 *   insn=0x000000000054546C string=0x0000000000545470 "#"
 *   insn=0x0000000000545470 string=0x0000000000545474 "C"
 *   insn=0x0000000000545478 string=0x000000000054547C "?"
 *   insn=0x0000000000545490 string=0x0000000000545494 "#"
 *   insn=0x0000000000545494 string=0x0000000000545498 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_5453CC(void *a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)a1 = off_6B7228;
  *((_QWORD *)a1 + 12) = off_6B7250;
  v2 = *((_QWORD *)a1 + 11);
  *((_QWORD *)a1 + 2) = off_6DA7B0;
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
  *((_QWORD *)a1 + 2) = off_6B7710;
  sub_53C0C8((unsigned int **)a1 + 9);
  *((_QWORD *)a1 + 12) = off_6B6B30;
  sub_5221DC((_QWORD *)a1 + 12);
  operator delete(a1);
}

