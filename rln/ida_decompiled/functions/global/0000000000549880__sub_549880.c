/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000549880
 * Mangled: sub_549880
 * Demangled: sub_549880
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x0000000000203E90  start
 *   0x00000000005219C8  sub_5219C8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056DF24  sub_56DF24
 *   0x0000000000571CAC  sub_571CAC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x00000000005498B4 string=0x00000000005498B8 "`"
 *   insn=0x00000000005498BC string=0x00000000005498C0 "cj""
 *   insn=0x00000000005498C8 string=0x00000000005498CC "`"
 *   insn=0x00000000005498CC string=0x00000000005498D0 ">`"
 *   insn=0x00000000005498D4 string=0x00000000005498D8 "cB"
 *   insn=0x00000000005498D8 string=0x00000000005498DC "`\n"
 *   insn=0x00000000005498E8 string=0x00000000005498EC "`"
 *   insn=0x00000000005498EC string=0x00000000005498F0 "dh""
 *   insn=0x00000000005498F0 string=0x00000000005498F4 "5`"
 *   insn=0x00000000005498FC string=0x0000000000549900 "`"
 *   insn=0x0000000000549900 string=0x0000000000549904 "ub"
 *   insn=0x0000000000549904 string=0x0000000000549908 "yB"
 *   insn=0x000000000054991C string=0x0000000000549920 "bj!"
 *   insn=0x0000000000549924 string=0x0000000000549928 "a\n"
 *   insn=0x000000000054992C string=0x0000000000549930 "a"
 *   insn=0x0000000000549930 string=0x0000000000549934 "!"
 *   insn=0x0000000000549938 string=0x000000000054993C "bj!"
 *   insn=0x0000000000549940 string=0x0000000000549944 "a\n"
 *   insn=0x0000000000549948 string=0x000000000054994C "!@"
 *   insn=0x000000000054994C string=0x0000000000549950 "a"
 *   insn=0x0000000000549968 string=0x000000000054996C "o"
 *   insn=0x000000000054996C string=0x0000000000549970 "a"
 *   insn=0x0000000000549974 string=0x0000000000549978 "`"
 *   insn=0x0000000000549980 string=0x0000000000549984 "`"
 *   insn=0x0000000000549984 string=0x0000000000549988 """
 *   insn=0x0000000000549988 string=0x000000000054998C "f"
 *   insn=0x0000000000549994 string=0x0000000000549998 "a2@"
 *   insn=0x000000000054999C string=0x00000000005499A0 "V"
 *   insn=0x00000000005499A0 string=0x00000000005499A4 "#"
 *   insn=0x00000000005499AC string=0x00000000005499B0 "="
 *   insn=0x00000000005499B0 string=0x00000000005499B4 "`"
 *   insn=0x00000000005499BC string=0x00000000005499C0 "`"
 *   insn=0x00000000005499E4 string=0x00000000005499E8 "a"
 *   insn=0x00000000005499E8 string=0x00000000005499EC "!"
 *   insn=0x00000000005499F0 string=0x00000000005499F4 "bj!"
 *   insn=0x0000000000549A00 string=0x0000000000549A04 "x"
 *   insn=0x0000000000549A08 string=0x0000000000549A0C "`2@"
 *   insn=0x0000000000549A0C string=0x0000000000549A10 "!"
 *   insn=0x0000000000549A18 string=0x0000000000549A1C "`"
 *   insn=0x0000000000549A20 string=0x0000000000549A24 ""
 *   insn=0x0000000000549A30 string=0x0000000000549A34 "w"
 *   insn=0x0000000000549A44 string=0x0000000000571CAC """
 *   insn=0x0000000000549A60 string=0x0000000000549A64 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_549880(__int64 a1, __int64 *a2, __int64 *a3, int a4)
{
  __int64 v7; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  _QWORD *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x3
  char v18; // [xsp+68h] [xbp+68h] BYREF

  v7 = a2[2];
  v9 = *(_QWORD *)(v7 - 24);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + v9) = a2[3];
  *(_QWORD *)(a1 + 8) = 0;
  sub_5219C8(a1 + *(_QWORD *)(v7 - 24), 0);
  v10 = a2[4];
  *(_QWORD *)(a1 + 16) = v10;
  v11 = (_QWORD *)(a1 + 16 + *(_QWORD *)(v10 - 24));
  *v11 = a2[5];
  sub_5219C8((__int64)v11, 0);
  v12 = a2[1];
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + *(_QWORD *)(v12 - 24)) = a2[6];
  *(_QWORD *)(a1 + 16) = a2[7];
  v13 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v13 - 24)) = a2[8];
  *(_QWORD *)(a1 + 16) = a2[9];
  *(_QWORD *)(a1 + 24) = off_6B7790;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  sub_53DB28((_QWORD *)(a1 + 80));
  v14 = *a3;
  *(_QWORD *)(a1 + 24) = off_6DA9F0;
  *(_DWORD *)(a1 + 88) = 0;
  sub_56DF24(a1 + 96, v14, *(_QWORD *)(v14 - 24), &v18);
  *(_DWORD *)(a1 + 88) = a4;
  v15 = *(_QWORD *)(a1 + 96);
  v16 = 0;
  if ( (a4 & 3) != 0 )
    v16 = *(_QWORD *)(v15 - 24);
  sub_547EA4(a1 + 24, v15, 0, v16);
  return sub_5219C8(a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL), a1 + 24);
}

