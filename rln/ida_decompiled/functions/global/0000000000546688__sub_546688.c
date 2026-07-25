/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000546688
 * Mangled: sub_546688
 * Demangled: sub_546688
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 25
 *   insn=0x0000000000546694 string=0x0000000000546698 "!"
 *   insn=0x00000000005466A4 string=0x00000000005466A8 "!"
 *   insn=0x00000000005466AC string=0x00000000005466B0 "@`"
 *   insn=0x00000000005466B0 string=0x00000000005466B4 "cj!"
 *   insn=0x00000000005466B8 string=0x00000000005466C0 "a\n"
 *   insn=0x00000000005466C4 string=0x00000000005466C8 "!"
 *   insn=0x00000000005466D4 string=0x00000000005466D8 "`""
 *   insn=0x00000000005466D8 string=0x00000000005466DC "!$E"
 *   insn=0x00000000005466DC string=0x00000000005466E0 "!@"
 *   insn=0x00000000005466E0 string=0x00000000005466E4 "a\n"
 *   insn=0x00000000005466E4 string=0x00000000005466E8 "x"
 *   insn=0x00000000005466EC string=0x00000000005466F0 "`"
 *   insn=0x00000000005466F8 string=0x00000000005466FC "aj "
 *   insn=0x000000000054670C string=0x0000000000546710 "!<G"
 *   insn=0x0000000000546710 string=0x0000000000546714 "a"
 *   insn=0x0000000000546714 string=0x0000000000546718 "B "
 *   insn=0x0000000000546714 string=0x0000000000546740 "A"
 *   insn=0x0000000000546718 string=0x000000000054671C "A"
 *   insn=0x000000000054671C string=0x0000000000546720 "#"
 *   insn=0x0000000000546720 string=0x0000000000546724 "C"
 *   insn=0x0000000000546728 string=0x000000000054672C "?"
 *   insn=0x000000000054672C string=0x0000000000546730 ","
 *   insn=0x0000000000546734 string=0x0000000000546738 ""
 *   insn=0x0000000000546740 string=0x0000000000546744 "#"
 *   insn=0x0000000000546744 string=0x0000000000546748 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_546688(__int64 a1, __int64 *a2)
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
  *(_QWORD *)(a1 + 16) = off_6DA7B0;
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
  *(_QWORD *)(a1 + 16) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 72));
  v7 = a2[1];
  *(_QWORD *)a1 = v7;
  result = *(_QWORD *)(v7 - 24);
  *(_QWORD *)(a1 + result) = a2[2];
  return result;
}

