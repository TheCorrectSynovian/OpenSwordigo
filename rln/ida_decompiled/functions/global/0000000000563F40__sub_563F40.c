/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563F40
 * Mangled: sub_563F40
 * Demangled: sub_563F40
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x000000000051F468  sub_51F468
 *   0x00000000005215C0  sub_5215C0
 *   0x00000000005219C8  sub_5219C8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562010  sub_562010
 *   0x0000000000562F10  sub_562F10
 *   0x0000000000563BDC  sub_563BDC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x0000000000563F64 string=0x0000000000563F68 "`"
 *   insn=0x0000000000563F78 string=0x0000000000563F7C "cj""
 *   insn=0x0000000000563F84 string=0x0000000000563F88 "`"
 *   insn=0x0000000000563F94 string=0x0000000000563F98 "a"
 *   insn=0x0000000000563F98 string=0x0000000000563F9C "!"
 *   insn=0x0000000000563FA0 string=0x0000000000563FA4 "bj!"
 *   insn=0x0000000000563FA8 string=0x0000000000563FAC "`"
 *   insn=0x0000000000563FB4 string=0x0000000000563FB8 "`"
 *   insn=0x0000000000563FCC string=0x0000000000563FD0 "`"
 *   insn=0x0000000000563FD0 string=0x0000000000563FD4 "`"
 *   insn=0x0000000000563FD0 string=0x0000000000563FFC "`"
 *   insn=0x0000000000563FDC string=0x0000000000563FE0 "`"
 *   insn=0x0000000000563FE0 string=0x0000000000563FE4 "w"
 *   insn=0x0000000000564000 string=0x0000000000564004 "a"
 *   insn=0x0000000000564008 string=0x000000000056400C "! @"
 *   insn=0x000000000056400C string=0x0000000000564010 "!"
 *   insn=0x0000000000564010 string=0x0000000000564014 "k"
 *   insn=0x000000000056402C string=0x0000000000564030 "a"
 *   insn=0x0000000000564030 string=0x0000000000564034 "!"
 *   insn=0x0000000000564038 string=0x000000000056403C "bj!"
 *   insn=0x000000000056403C string=0x0000000000564040 "!v"
 *   insn=0x0000000000564048 string=0x000000000056404C "!@"
 *   insn=0x0000000000564050 string=0x0000000000564054 "a\n"
 *   insn=0x0000000000564058 string=0x000000000056405C "`"
 *   insn=0x0000000000564064 string=0x0000000000564068 "`""
 *   insn=0x0000000000564068 string=0x000000000056406C "!"
 *   insn=0x000000000056406C string=0x0000000000564070 "!@"
 *   insn=0x0000000000564070 string=0x0000000000564074 "a\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563F40(__int64 *a1, __int64 *a2, const char **a3, int a4)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v10; // x1

  v6 = (__int64)(a1 + 2);
  v7 = a2[1];
  *a1 = v7;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[2];
  a1[1] = 0;
  sub_5219C8((__int64)a1 + *(_QWORD *)(v7 - 24), 0);
  v10 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v10 - 24)) = a2[3];
  sub_562010(v6);
  sub_5219C8((__int64)a1 + *(_QWORD *)(*a1 - 24), v6);
  if ( sub_563BDC(v6, *a3, a4 | 8u) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

