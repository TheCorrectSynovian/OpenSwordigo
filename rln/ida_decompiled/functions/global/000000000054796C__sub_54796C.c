/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054796C
 * Mangled: sub_54796C
 * Demangled: sub_54796C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x0000000000547978 string=0x000000000054797C "!"
 *   insn=0x0000000000547988 string=0x000000000054798C "!"
 *   insn=0x0000000000547990 string=0x0000000000547994 "@`"
 *   insn=0x0000000000547994 string=0x0000000000547998 "cj!"
 *   insn=0x000000000054799C string=0x00000000005479A0 "a\n"
 *   insn=0x00000000005479A4 string=0x00000000005479AC "a"
 *   insn=0x00000000005479B0 string=0x00000000005479B4 "!"
 *   insn=0x00000000005479C0 string=0x00000000005479C4 "`B"
 *   insn=0x00000000005479C4 string=0x00000000005479C8 "!$E"
 *   insn=0x00000000005479C8 string=0x00000000005479CC "!@"
 *   insn=0x00000000005479CC string=0x00000000005479D0 "a"
 *   insn=0x00000000005479D8 string=0x00000000005479DC "`"
 *   insn=0x00000000005479E4 string=0x00000000005479E8 "aj "
 *   insn=0x00000000005479EC string=0x00000000005479F0 "`\n"
 *   insn=0x00000000005479F4 string=0x00000000005479F8 "`\n"
 *   insn=0x0000000000547A00 string=0x0000000000547A04 "`"
 *   insn=0x0000000000547A0C string=0x0000000000547A10 "`"
 *   insn=0x0000000000547A18 string=0x0000000000547A1C "aj "
 *   insn=0x0000000000547A2C string=0x0000000000547A30 "!<G"
 *   insn=0x0000000000547A30 string=0x0000000000547A34 "a"
 *   insn=0x0000000000547A34 string=0x0000000000547A38 "B "
 *   insn=0x0000000000547A34 string=0x0000000000547A60 "A"
 *   insn=0x0000000000547A38 string=0x0000000000547A3C "A"
 *   insn=0x0000000000547A3C string=0x0000000000547A40 "#"
 *   insn=0x0000000000547A40 string=0x0000000000547A44 "C"
 *   insn=0x0000000000547A48 string=0x0000000000547A4C "?"
 *   insn=0x0000000000547A54 string=0x0000000000547A58 "S"
 *   insn=0x0000000000547A60 string=0x0000000000547A64 "#"
 *   insn=0x0000000000547A64 string=0x0000000000547A68 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54796C(__int64 a1, __int64 *a2)
{
  __int64 v3; // x1
  __int64 v5; // x2
  void *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 result; // x0
  unsigned int *v11; // x2
  int v12; // w1

  v3 = *a2;
  *(_QWORD *)a1 = v3;
  v5 = *(_QWORD *)(a1 + 96);
  v6 = (void *)(v5 - 24);
  *(_QWORD *)(a1 + *(_QWORD *)(v3 - 24)) = a2[8];
  *(_QWORD *)(a1 + 16) = a2[9];
  *(_QWORD *)(a1 + 24) = off_6DA7B0;
  if ( (__int64 *)(v5 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v11 = (unsigned int *)(v5 - 8);
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = *(_DWORD *)(v5 - 8);
      *(_DWORD *)(v5 - 8) = v12 - 1;
    }
    if ( v12 <= 0 )
      operator delete(v6);
  }
  *(_QWORD *)(a1 + 24) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 80));
  v7 = a2[1];
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + *(_QWORD *)(v7 - 24)) = a2[6];
  *(_QWORD *)(a1 + 16) = a2[7];
  v8 = a2[4];
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + *(_QWORD *)(v8 - 24) + 16) = a2[5];
  v9 = a2[2];
  *(_QWORD *)a1 = v9;
  result = *(_QWORD *)(v9 - 24);
  *(_QWORD *)(a1 + result) = a2[3];
  return result;
}

