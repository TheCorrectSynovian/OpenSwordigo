/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005647E8
 * Mangled: sub_5647E8
 * Demangled: sub_5647E8
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
 * Referenced strings: 29
 *   insn=0x000000000056480C string=0x0000000000564810 "`"
 *   insn=0x0000000000564820 string=0x0000000000564824 "cj""
 *   insn=0x000000000056482C string=0x0000000000564830 "`"
 *   insn=0x0000000000564830 string=0x0000000000564834 "e"
 *   insn=0x000000000056483C string=0x0000000000564840 "a"
 *   insn=0x0000000000564840 string=0x0000000000564844 "!"
 *   insn=0x0000000000564848 string=0x000000000056484C "bj!"
 *   insn=0x0000000000564850 string=0x0000000000564854 "`"
 *   insn=0x000000000056485C string=0x0000000000564860 "`"
 *   insn=0x0000000000564860 string=0x0000000000564864 "Y"
 *   insn=0x0000000000564874 string=0x0000000000564878 "`"
 *   insn=0x0000000000564878 string=0x000000000056487C "`"
 *   insn=0x0000000000564878 string=0x00000000005648A4 "`"
 *   insn=0x0000000000564884 string=0x0000000000564888 "`"
 *   insn=0x0000000000564888 string=0x000000000056488C "M"
 *   insn=0x00000000005648A8 string=0x00000000005648AC "a"
 *   insn=0x00000000005648B0 string=0x00000000005648B4 "! @"
 *   insn=0x00000000005648B4 string=0x00000000005648B8 "!"
 *   insn=0x00000000005648B8 string=0x00000000005648BC "A"
 *   insn=0x00000000005648D4 string=0x00000000005648D8 "a"
 *   insn=0x00000000005648D8 string=0x00000000005648DC "!"
 *   insn=0x00000000005648E0 string=0x00000000005648E4 "bj!"
 *   insn=0x00000000005648F0 string=0x00000000005648F4 "!@"
 *   insn=0x00000000005648F8 string=0x00000000005648FC "a\n"
 *   insn=0x0000000000564900 string=0x0000000000564904 "`"
 *   insn=0x000000000056490C string=0x0000000000564910 "`""
 *   insn=0x0000000000564910 string=0x0000000000564914 "!"
 *   insn=0x0000000000564914 string=0x0000000000564918 "!@"
 *   insn=0x0000000000564918 string=0x000000000056491C "a\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5647E8(__int64 *a1, __int64 *a2, const char *a3, int a4)
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
  if ( sub_563BDC(v6, a3, a4 | 8u) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

