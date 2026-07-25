/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000548994
 * Mangled: sub_548994
 * Demangled: sub_548994
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 23
 *   insn=0x00000000005489A0 string=0x00000000005489A4 "!"
 *   insn=0x00000000005489B0 string=0x00000000005489B4 "!"
 *   insn=0x00000000005489B8 string=0x00000000005489BC "@`"
 *   insn=0x00000000005489BC string=0x00000000005489C0 "cj!"
 *   insn=0x00000000005489C4 string=0x00000000005489CC "a\n"
 *   insn=0x00000000005489D0 string=0x00000000005489D4 "!"
 *   insn=0x00000000005489E0 string=0x00000000005489E4 "`""
 *   insn=0x00000000005489E4 string=0x00000000005489E8 "!"
 *   insn=0x00000000005489E8 string=0x00000000005489EC "!@"
 *   insn=0x00000000005489EC string=0x00000000005489F0 "a\n"
 *   insn=0x00000000005489F8 string=0x00000000005489FC "`"
 *   insn=0x0000000000548A04 string=0x0000000000548A08 "aj "
 *   insn=0x0000000000548A18 string=0x0000000000548A1C "!<G"
 *   insn=0x0000000000548A1C string=0x0000000000548A20 "a"
 *   insn=0x0000000000548A20 string=0x0000000000548A24 "B "
 *   insn=0x0000000000548A20 string=0x0000000000548A4C "A"
 *   insn=0x0000000000548A24 string=0x0000000000548A28 "A"
 *   insn=0x0000000000548A28 string=0x0000000000548A2C "#"
 *   insn=0x0000000000548A2C string=0x0000000000548A30 "C"
 *   insn=0x0000000000548A34 string=0x0000000000548A38 "?"
 *   insn=0x0000000000548A38 string=0x0000000000548A3C ","
 *   insn=0x0000000000548A4C string=0x0000000000548A50 "#"
 *   insn=0x0000000000548A50 string=0x0000000000548A54 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_548994(__int64 a1, __int64 *a2)
{
  __int64 v3; // x1
  __int64 v5; // x2
  void *v6; // x0
  __int64 v7; // x0
  __int64 result; // x0
  unsigned int *v9; // x2
  int v10; // w1

  v3 = *a2;
  *(_QWORD *)a1 = v3;
  v5 = *(_QWORD *)(a1 + 88);
  v6 = (void *)(v5 - 24);
  *(_QWORD *)(a1 + *(_QWORD *)(v3 - 24)) = a2[3];
  *(_QWORD *)(a1 + 16) = off_6DA9F0;
  if ( (__int64 *)(v5 - 24) != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v9 = (unsigned int *)(v5 - 8);
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = *(_DWORD *)(v5 - 8);
      *(_DWORD *)(v5 - 8) = v10 - 1;
    }
    if ( v10 <= 0 )
      operator delete(v6);
  }
  *(_QWORD *)(a1 + 16) = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 72));
  v7 = a2[1];
  *(_QWORD *)a1 = v7;
  result = *(_QWORD *)(v7 - 24);
  *(_QWORD *)(a1 + result) = a2[2];
  return result;
}

