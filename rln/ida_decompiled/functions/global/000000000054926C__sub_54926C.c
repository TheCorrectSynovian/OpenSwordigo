/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054926C
 * Mangled: sub_54926C
 * Demangled: sub_54926C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 24
 *   insn=0x0000000000549278 string=0x000000000054927C "!"
 *   insn=0x0000000000549288 string=0x000000000054928C "!"
 *   insn=0x0000000000549290 string=0x0000000000549294 "@`"
 *   insn=0x0000000000549294 string=0x0000000000549298 "cj!"
 *   insn=0x000000000054929C string=0x00000000005492A4 "a"
 *   insn=0x00000000005492A8 string=0x00000000005492AC "!"
 *   insn=0x00000000005492B8 string=0x00000000005492BC "`"
 *   insn=0x00000000005492BC string=0x00000000005492C0 "!"
 *   insn=0x00000000005492C0 string=0x00000000005492C4 "!@"
 *   insn=0x00000000005492C4 string=0x00000000005492C8 "a"
 *   insn=0x00000000005492D0 string=0x00000000005492D4 "`"
 *   insn=0x00000000005492DC string=0x00000000005492E0 "aj "
 *   insn=0x00000000005492F0 string=0x00000000005492F4 "!<G"
 *   insn=0x00000000005492F4 string=0x00000000005492F8 "a"
 *   insn=0x00000000005492F8 string=0x00000000005492FC "B "
 *   insn=0x00000000005492F8 string=0x0000000000549324 "A"
 *   insn=0x00000000005492FC string=0x0000000000549300 "A"
 *   insn=0x0000000000549300 string=0x0000000000549304 "#"
 *   insn=0x0000000000549304 string=0x0000000000549308 "C"
 *   insn=0x000000000054930C string=0x0000000000549310 "?"
 *   insn=0x0000000000549310 string=0x0000000000549314 ","
 *   insn=0x0000000000549318 string=0x000000000054931C "P"
 *   insn=0x0000000000549324 string=0x0000000000549328 "#"
 *   insn=0x0000000000549328 string=0x000000000054932C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54926C(__int64 a1, __int64 *a2)
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
  v5 = *(_QWORD *)(a1 + 80);
  v6 = (void *)(v5 - 24);
  *(_QWORD *)(a1 + *(_QWORD *)(v3 - 24)) = a2[3];
  *(_QWORD *)(a1 + 8) = off_6DA9F0;
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
  *(_QWORD *)(a1 + 8) = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 64));
  v7 = a2[1];
  *(_QWORD *)a1 = v7;
  result = *(_QWORD *)(v7 - 24);
  *(_QWORD *)(a1 + result) = a2[2];
  return result;
}

