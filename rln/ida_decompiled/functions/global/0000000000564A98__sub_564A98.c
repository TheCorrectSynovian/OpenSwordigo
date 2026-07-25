/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000564A98
 * Mangled: sub_564A98
 * Demangled: sub_564A98
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
 * Referenced strings: 30
 *   insn=0x0000000000564ABC string=0x0000000000564AC0 "`"
 *   insn=0x0000000000564AD0 string=0x0000000000564AD4 "`"
 *   insn=0x0000000000564AD4 string=0x0000000000564AD8 "cj""
 *   insn=0x0000000000564AE4 string=0x0000000000564AE8 "a"
 *   insn=0x0000000000564AE8 string=0x0000000000564AEC "!"
 *   insn=0x0000000000564AF0 string=0x0000000000564AF4 "bj!"
 *   insn=0x0000000000564AF4 string=0x0000000000564AF8 "F"
 *   insn=0x0000000000564AF8 string=0x0000000000564AFC "`"
 *   insn=0x0000000000564B04 string=0x0000000000564B08 "`"
 *   insn=0x0000000000564B18 string=0x0000000000564B1C "0"
 *   insn=0x0000000000564B1C string=0x0000000000564B20 "`"
 *   insn=0x0000000000564B20 string=0x0000000000564B24 "`"
 *   insn=0x0000000000564B20 string=0x0000000000564B4C "`"
 *   insn=0x0000000000564B2C string=0x0000000000564B30 "`"
 *   insn=0x0000000000564B50 string=0x0000000000564B54 "a"
 *   insn=0x0000000000564B58 string=0x0000000000564B5C "! @"
 *   insn=0x0000000000564B5C string=0x0000000000564B60 "!"
 *   insn=0x0000000000564B7C string=0x0000000000564B80 "a"
 *   insn=0x0000000000564B80 string=0x0000000000564B84 "!"
 *   insn=0x0000000000564B88 string=0x0000000000564B8C "bj!"
 *   insn=0x0000000000564B8C string=0x0000000000564B90 "Ms"
 *   insn=0x0000000000564B98 string=0x0000000000564B9C "!@"
 *   insn=0x0000000000564BA0 string=0x0000000000564BA4 "a"
 *   insn=0x0000000000564BA8 string=0x0000000000564BAC "`"
 *   insn=0x0000000000564BAC string=0x0000000000564BB0 "."
 *   insn=0x0000000000564BB4 string=0x0000000000564BB8 "`"
 *   insn=0x0000000000564BB8 string=0x0000000000564BBC "!"
 *   insn=0x0000000000564BBC string=0x0000000000564BC0 "!@"
 *   insn=0x0000000000564BC0 string=0x0000000000564BC4 "a"
 *   insn=0x0000000000564BC4 string=0x0000000000564BC8 "@]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_564A98(__int64 *a1, __int64 *a2, const char *a3, int a4)
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
  sub_5219C8((__int64)v10, 0);
  v11 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v11 - 24)) = a2[3];
  sub_562010(v6);
  sub_5219C8((__int64)a1 + *(_QWORD *)(*a1 - 24), v6);
  if ( sub_563BDC(v6, a3, a4 | 0x10u) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

