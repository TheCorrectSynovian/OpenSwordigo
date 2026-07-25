/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561040
 * Mangled: sub_561040
 * Demangled: sub_561040
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x000000000051F468  sub_51F468
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x000000000055F8C0  sub_55F8C0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x0000000000561064 string=0x0000000000561068 "`"
 *   insn=0x0000000000561078 string=0x000000000056107C "`"
 *   insn=0x000000000056107C string=0x0000000000561080 "cj""
 *   insn=0x000000000056108C string=0x0000000000561090 "a"
 *   insn=0x0000000000561090 string=0x0000000000561094 "!"
 *   insn=0x0000000000561098 string=0x000000000056109C "bj!"
 *   insn=0x000000000056109C string=0x00000000005610A0 "S"
 *   insn=0x00000000005610A0 string=0x00000000005610A4 "`"
 *   insn=0x00000000005610AC string=0x00000000005610B0 "`"
 *   insn=0x00000000005610B0 string=0x00000000005610B4 ""
 *   insn=0x00000000005610C4 string=0x00000000005610C8 "`"
 *   insn=0x00000000005610C8 string=0x00000000005610CC "`"
 *   insn=0x00000000005610C8 string=0x00000000005610F4 "`"
 *   insn=0x00000000005610D4 string=0x00000000005610D8 "`"
 *   insn=0x00000000005610F8 string=0x00000000005610FC "a"
 *   insn=0x0000000000561100 string=0x0000000000561104 "! @"
 *   insn=0x0000000000561104 string=0x0000000000561108 "!"
 *   insn=0x0000000000561124 string=0x0000000000561128 "a"
 *   insn=0x0000000000561128 string=0x000000000056112C "!"
 *   insn=0x0000000000561130 string=0x0000000000561134 "bj!"
 *   insn=0x0000000000561140 string=0x0000000000561144 "!@"
 *   insn=0x0000000000561148 string=0x000000000056114C "a"
 *   insn=0x0000000000561150 string=0x0000000000561154 "`"
 *   insn=0x0000000000561158 string=0x000000000056115C "!"
 *   insn=0x000000000056115C string=0x0000000000561160 "`"
 *   insn=0x0000000000561160 string=0x0000000000561164 "!$E"
 *   insn=0x0000000000561164 string=0x0000000000561168 "!@"
 *   insn=0x0000000000561168 string=0x000000000056116C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561040(__int64 *a1, __int64 *a2, const char **a3, int a4)
{
  __int64 v6; // x21
  __int64 v7; // x0
  _QWORD *v10; // x0
  __int64 v11; // x1

  v6 = (__int64)(a1 + 1);
  v7 = a2[1];
  *a1 = v7;
  v10 = (__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24));
  *v10 = a2[2];
  sub_5210E8((__int64)v10, 0);
  v11 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v11 - 24)) = a2[3];
  sub_55EDEC(v6);
  sub_5210E8((__int64)a1 + *(_QWORD *)(*a1 - 24), v6);
  if ( sub_55F8C0(v6, *a3, a4 | 0x10u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

