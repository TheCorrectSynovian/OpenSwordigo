/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000564494
 * Mangled: sub_564494
 * Demangled: sub_564494
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
 * Referenced strings: 37
 *   insn=0x00000000005644B8 string=0x00000000005644BC "`"
 *   insn=0x00000000005644C8 string=0x00000000005644CC "cj""
 *   insn=0x00000000005644D4 string=0x00000000005644D8 "`"
 *   insn=0x00000000005644D8 string=0x00000000005644DC ";"
 *   insn=0x00000000005644E0 string=0x00000000005644E4 "cB"
 *   insn=0x00000000005644E4 string=0x00000000005644E8 "`\n"
 *   insn=0x00000000005644F4 string=0x00000000005644F8 "`"
 *   insn=0x00000000005644F8 string=0x00000000005644FC "dh""
 *   insn=0x00000000005644FC string=0x0000000000564500 "2"
 *   insn=0x0000000000564504 string=0x0000000000564508 "ub"
 *   insn=0x0000000000564508 string=0x000000000056450C "a"
 *   insn=0x0000000000564510 string=0x0000000000564514 "!"
 *   insn=0x0000000000564518 string=0x000000000056451C "bj!"
 *   insn=0x0000000000564520 string=0x0000000000564524 "a\n"
 *   insn=0x0000000000564528 string=0x000000000056452C "a"
 *   insn=0x000000000056452C string=0x0000000000564530 "!"
 *   insn=0x0000000000564534 string=0x0000000000564538 "bj!"
 *   insn=0x000000000056453C string=0x0000000000564540 "a\n"
 *   insn=0x0000000000564544 string=0x0000000000564548 "`"
 *   insn=0x0000000000564550 string=0x0000000000564554 "`"
 *   insn=0x0000000000564568 string=0x000000000056456C "`"
 *   insn=0x000000000056456C string=0x0000000000564570 "`"
 *   insn=0x000000000056456C string=0x0000000000564598 "`"
 *   insn=0x0000000000564578 string=0x000000000056457C "`"
 *   insn=0x000000000056459C string=0x00000000005645A0 "a"
 *   insn=0x00000000005645A4 string=0x00000000005645A8 "! @"
 *   insn=0x00000000005645A8 string=0x00000000005645AC "!"
 *   insn=0x00000000005645C8 string=0x00000000005645CC "a"
 *   insn=0x00000000005645CC string=0x00000000005645D0 "!"
 *   insn=0x00000000005645D4 string=0x00000000005645D8 "bj!"
 *   insn=0x00000000005645E4 string=0x00000000005645E8 "!@"
 *   insn=0x00000000005645EC string=0x00000000005645F0 "a"
 *   insn=0x00000000005645F4 string=0x00000000005645F8 "F"
 *   insn=0x00000000005645F8 string=0x00000000005645FC "`"
 *   insn=0x0000000000564604 string=0x0000000000564608 "`B"
 *   insn=0x000000000056460C string=0x0000000000564610 "u"
 *   insn=0x0000000000564620 string=0x0000000000571CAC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_564494(__int64 *a1, __int64 *a2, const char **a3, unsigned int a4)
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
  if ( sub_563BDC((__int64)(a1 + 3), *a3, a4) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

