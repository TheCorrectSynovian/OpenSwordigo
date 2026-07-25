/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000546F60
 * Mangled: sub_546F60
 * Demangled: sub_546F60
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 24
 *   insn=0x0000000000546F6C string=0x0000000000546F70 "!"
 *   insn=0x0000000000546F7C string=0x0000000000546F80 "!"
 *   insn=0x0000000000546F84 string=0x0000000000546F88 "@`"
 *   insn=0x0000000000546F88 string=0x0000000000546F8C "cj!"
 *   insn=0x0000000000546F90 string=0x0000000000546F98 "a"
 *   insn=0x0000000000546F9C string=0x0000000000546FA0 "!"
 *   insn=0x0000000000546FAC string=0x0000000000546FB0 "`"
 *   insn=0x0000000000546FB0 string=0x0000000000546FB4 "!$E"
 *   insn=0x0000000000546FB4 string=0x0000000000546FB8 "!@"
 *   insn=0x0000000000546FB8 string=0x0000000000546FBC "a"
 *   insn=0x0000000000546FBC string=0x0000000000546FC0 "B"
 *   insn=0x0000000000546FC4 string=0x0000000000546FC8 "`"
 *   insn=0x0000000000546FD0 string=0x0000000000546FD4 "aj "
 *   insn=0x0000000000546FE4 string=0x0000000000546FE8 "!<G"
 *   insn=0x0000000000546FE8 string=0x0000000000546FEC "a"
 *   insn=0x0000000000546FEC string=0x0000000000546FF0 "B "
 *   insn=0x0000000000546FEC string=0x0000000000547018 "A"
 *   insn=0x0000000000546FF0 string=0x0000000000546FF4 "A"
 *   insn=0x0000000000546FF4 string=0x0000000000546FF8 "#"
 *   insn=0x0000000000546FF8 string=0x0000000000546FFC "C"
 *   insn=0x0000000000547000 string=0x0000000000547004 "?"
 *   insn=0x0000000000547004 string=0x0000000000547008 ","
 *   insn=0x0000000000547018 string=0x000000000054701C "#"
 *   insn=0x000000000054701C string=0x0000000000547020 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_546F60(__int64 a1, __int64 *a2)
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
  *(_QWORD *)(a1 + 8) = off_6DA7B0;
  if ( (__int64 *)(v5 - 24) != &qword_6FD2E0 )
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
  *(_QWORD *)(a1 + 8) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 64));
  v7 = a2[1];
  *(_QWORD *)a1 = v7;
  result = *(_QWORD *)(v7 - 24);
  *(_QWORD *)(a1 + result) = a2[2];
  return result;
}

