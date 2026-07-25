/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000549C78
 * Mangled: sub_549C78
 * Demangled: sub_549C78
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x0000000000549C84 string=0x0000000000549C88 "!"
 *   insn=0x0000000000549C94 string=0x0000000000549C98 "!"
 *   insn=0x0000000000549C9C string=0x0000000000549CA0 "@`"
 *   insn=0x0000000000549CA0 string=0x0000000000549CA4 "cj!"
 *   insn=0x0000000000549CA8 string=0x0000000000549CAC "a\n"
 *   insn=0x0000000000549CB0 string=0x0000000000549CB8 "a"
 *   insn=0x0000000000549CBC string=0x0000000000549CC0 "!"
 *   insn=0x0000000000549CCC string=0x0000000000549CD0 "`B"
 *   insn=0x0000000000549CD0 string=0x0000000000549CD4 "!"
 *   insn=0x0000000000549CD4 string=0x0000000000549CD8 "!@"
 *   insn=0x0000000000549CD8 string=0x0000000000549CDC "a"
 *   insn=0x0000000000549CE4 string=0x0000000000549CE8 "`"
 *   insn=0x0000000000549CF0 string=0x0000000000549CF4 "aj "
 *   insn=0x0000000000549CF8 string=0x0000000000549CFC "`\n"
 *   insn=0x0000000000549D00 string=0x0000000000549D04 "`\n"
 *   insn=0x0000000000549D0C string=0x0000000000549D10 "`"
 *   insn=0x0000000000549D18 string=0x0000000000549D1C "`"
 *   insn=0x0000000000549D24 string=0x0000000000549D28 "aj "
 *   insn=0x0000000000549D38 string=0x0000000000549D3C "!<G"
 *   insn=0x0000000000549D3C string=0x0000000000549D40 "a"
 *   insn=0x0000000000549D40 string=0x0000000000549D44 "B "
 *   insn=0x0000000000549D40 string=0x0000000000549D6C "A"
 *   insn=0x0000000000549D44 string=0x0000000000549D48 "A"
 *   insn=0x0000000000549D48 string=0x0000000000549D4C "#"
 *   insn=0x0000000000549D4C string=0x0000000000549D50 "C"
 *   insn=0x0000000000549D54 string=0x0000000000549D58 "?"
 *   insn=0x0000000000549D6C string=0x0000000000549D70 "#"
 *   insn=0x0000000000549D70 string=0x0000000000549D74 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_549C78(__int64 a1, __int64 *a2)
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
  *(_QWORD *)(a1 + 24) = off_6DA9F0;
  if ( (__int64 *)(v5 - 24) != &qword_6FD300 )
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
  *(_QWORD *)(a1 + 24) = off_6B7790;
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

