/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000560D9C
 * Mangled: sub_560D9C
 * Demangled: sub_560D9C
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
 * Referenced strings: 30
 *   insn=0x0000000000560DC0 string=0x0000000000560DC4 "`"
 *   insn=0x0000000000560DD4 string=0x0000000000560DD8 "`"
 *   insn=0x0000000000560DD8 string=0x0000000000560DDC "cj""
 *   insn=0x0000000000560DE8 string=0x0000000000560DEC "a"
 *   insn=0x0000000000560DEC string=0x0000000000560DF0 "!"
 *   insn=0x0000000000560DF4 string=0x0000000000560DF8 "bj!"
 *   insn=0x0000000000560DFC string=0x0000000000560E00 "`"
 *   insn=0x0000000000560E08 string=0x0000000000560E0C "`"
 *   insn=0x0000000000560E20 string=0x0000000000560E24 "`"
 *   insn=0x0000000000560E24 string=0x0000000000560E28 "`"
 *   insn=0x0000000000560E24 string=0x0000000000560E50 "`"
 *   insn=0x0000000000560E30 string=0x0000000000560E34 "`"
 *   insn=0x0000000000560E34 string=0x0000000000560E38 "w"
 *   insn=0x0000000000560E54 string=0x0000000000560E58 "a"
 *   insn=0x0000000000560E5C string=0x0000000000560E60 "! @"
 *   insn=0x0000000000560E60 string=0x0000000000560E64 "!"
 *   insn=0x0000000000560E64 string=0x0000000000560E68 "k"
 *   insn=0x0000000000560E80 string=0x0000000000560E84 "a"
 *   insn=0x0000000000560E84 string=0x0000000000560E88 "!"
 *   insn=0x0000000000560E8C string=0x0000000000560E90 "bj!"
 *   insn=0x0000000000560E9C string=0x0000000000560EA0 "!@"
 *   insn=0x0000000000560EA4 string=0x0000000000560EA8 "a"
 *   insn=0x0000000000560EA8 string=0x0000000000560EAC "9"
 *   insn=0x0000000000560EAC string=0x0000000000560EB0 "`"
 *   insn=0x0000000000560EB0 string=0x0000000000560EB4 "m"
 *   insn=0x0000000000560EB4 string=0x0000000000560EB8 "!"
 *   insn=0x0000000000560EB8 string=0x0000000000560EBC "`"
 *   insn=0x0000000000560EBC string=0x0000000000560EC0 "!$E"
 *   insn=0x0000000000560EC0 string=0x0000000000560EC4 "!@"
 *   insn=0x0000000000560EC4 string=0x0000000000560EC8 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_560D9C(__int64 *a1, __int64 *a2, const char *a3, int a4)
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
  if ( sub_55F8C0(v6, a3, a4 | 0x10u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

