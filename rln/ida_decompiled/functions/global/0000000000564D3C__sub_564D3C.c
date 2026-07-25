/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000564D3C
 * Mangled: sub_564D3C
 * Demangled: sub_564D3C
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x000000000051F468  sub_51F468
 *   0x00000000005215C0  sub_5215C0
 *   0x00000000005219C8  sub_5219C8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562010  sub_562010
 *   0x0000000000562F10  sub_562F10
 *   0x0000000000563BDC  sub_563BDC
 *   0x0000000000571CAC  sub_571CAC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000564D60 string=0x0000000000564D64 "`"
 *   insn=0x0000000000564D70 string=0x0000000000564D74 "cj""
 *   insn=0x0000000000564D7C string=0x0000000000564D80 "`"
 *   insn=0x0000000000564D88 string=0x0000000000564D8C "cB"
 *   insn=0x0000000000564D8C string=0x0000000000564D90 "`\n"
 *   insn=0x0000000000564D9C string=0x0000000000564DA0 "`"
 *   insn=0x0000000000564DA0 string=0x0000000000564DA4 "dh""
 *   insn=0x0000000000564DA4 string=0x0000000000564DA8 ""
 *   insn=0x0000000000564DAC string=0x0000000000564DB0 "ub"
 *   insn=0x0000000000564DB0 string=0x0000000000564DB4 "a"
 *   insn=0x0000000000564DB8 string=0x0000000000564DBC "!"
 *   insn=0x0000000000564DC0 string=0x0000000000564DC4 "bj!"
 *   insn=0x0000000000564DC8 string=0x0000000000564DCC "a\n"
 *   insn=0x0000000000564DD0 string=0x0000000000564DD4 "a"
 *   insn=0x0000000000564DD4 string=0x0000000000564DD8 "!"
 *   insn=0x0000000000564DDC string=0x0000000000564DE0 "bj!"
 *   insn=0x0000000000564DE4 string=0x0000000000564DE8 "a\n"
 *   insn=0x0000000000564DEC string=0x0000000000564DF0 "`"
 *   insn=0x0000000000564DF8 string=0x0000000000564DFC "`"
 *   insn=0x0000000000564E0C string=0x0000000000564E10 "s"
 *   insn=0x0000000000564E10 string=0x0000000000564E14 "`"
 *   insn=0x0000000000564E14 string=0x0000000000564E18 "`"
 *   insn=0x0000000000564E14 string=0x0000000000564E40 "`"
 *   insn=0x0000000000564E20 string=0x0000000000564E24 "`"
 *   insn=0x0000000000564E44 string=0x0000000000564E48 "a"
 *   insn=0x0000000000564E4C string=0x0000000000564E50 "! @"
 *   insn=0x0000000000564E50 string=0x0000000000564E54 "!"
 *   insn=0x0000000000564E70 string=0x0000000000564E74 "a"
 *   insn=0x0000000000564E74 string=0x0000000000564E78 "!"
 *   insn=0x0000000000564E7C string=0x0000000000564E80 "bj!"
 *   insn=0x0000000000564E8C string=0x0000000000564E90 "!@"
 *   insn=0x0000000000564E94 string=0x0000000000564E98 "a"
 *   insn=0x0000000000564EA0 string=0x0000000000564EA4 "`"
 *   insn=0x0000000000564EA4 string=0x0000000000564EA8 "p"
 *   insn=0x0000000000564EAC string=0x0000000000564EB0 "`B"
 *   insn=0x0000000000564EB4 string=0x0000000000564EB8 "u"
 *   insn=0x0000000000564EC4 string=0x0000000000564EC8 "y3"
 *   insn=0x0000000000564EC8 string=0x0000000000571CAC """
 *   insn=0x0000000000564ECC string=0x0000000000564ED0 "}r"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_564D3C(__int64 *a1, __int64 *a2, const char *a3, unsigned int a4)
{
  __int64 v7; // x0
  __int64 v9; // x0
  _QWORD *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1

  v7 = a2[2];
  *a1 = v7;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[3];
  a1[1] = 0;
  sub_5219C8((__int64)a1 + *(_QWORD *)(v7 - 24), 0);
  v9 = a2[4];
  a1[2] = v9;
  v10 = (__int64 *)((char *)a1 + *(_QWORD *)(v9 - 24) + 16);
  *v10 = a2[5];
  sub_5219C8((__int64)v10, 0);
  v11 = a2[1];
  *a1 = v11;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v11 - 24)) = a2[6];
  a1[2] = a2[7];
  v12 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v12 - 24)) = a2[8];
  a1[2] = a2[9];
  sub_562010((__int64)(a1 + 3));
  sub_5219C8((__int64)a1 + *(_QWORD *)(*a1 - 24), (__int64)(a1 + 3));
  if ( sub_563BDC((__int64)(a1 + 3), a3, a4) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

