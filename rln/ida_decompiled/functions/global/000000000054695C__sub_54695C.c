/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054695C
 * Mangled: sub_54695C
 * Demangled: sub_54695C
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000546A98  sub_546A98
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x0000000000546984 string=0x0000000000546988 "`"
 *   insn=0x0000000000546990 string=0x0000000000546994 "y"
 *   insn=0x000000000054699C string=0x00000000005469A0 "`"
 *   insn=0x00000000005469A4 string=0x00000000005469A8 "dj#"
 *   insn=0x00000000005469B8 string=0x00000000005469BC "a"
 *   insn=0x00000000005469BC string=0x00000000005469C0 "!"
 *   insn=0x00000000005469C4 string=0x00000000005469C8 "cj!"
 *   insn=0x00000000005469CC string=0x00000000005469D0 "!@"
 *   insn=0x00000000005469D0 string=0x00000000005469D4 "a"
 *   insn=0x00000000005469EC string=0x00000000005469F0 "N"
 *   insn=0x00000000005469F8 string=0x00000000005469FC "`"
 *   insn=0x00000000005469FC string=0x0000000000546A00 "a"
 *   insn=0x0000000000546A00 string=0x0000000000546A04 "B"
 *   insn=0x0000000000546A14 string=0x0000000000546A18 "`"
 *   insn=0x0000000000546A18 string=0x0000000000546A1C "B`"
 *   insn=0x0000000000546A1C string=0x0000000000546A20 "b*"
 *   insn=0x0000000000546A40 string=0x0000000000546A44 "x"
 *   insn=0x0000000000546A44 string=0x0000000000546A48 "a*@"
 *   insn=0x0000000000546A50 string=0x0000000000546A54 " `"
 *   insn=0x0000000000546A58 string=0x0000000000546A5C "`"
 *   insn=0x0000000000546A60 string=0x0000000000546A64 ""
 *   insn=0x0000000000546A70 string=0x0000000000546A74 "v"
 *   insn=0x0000000000546A80 string=0x0000000000546A84 "a"
 *   insn=0x0000000000546A84 string=0x0000000000546A88 "!"
 *   insn=0x0000000000546A8C string=0x0000000000546A90 "bj!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_54695C(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v5; // x20
  __int64 v6; // x0
  _QWORD *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0

  v5 = (__int64)(a1 + 1);
  v6 = a2[1];
  *a1 = v6;
  v7 = (__int64 *)((char *)a1 + *(_QWORD *)(v6 - 24));
  *v7 = a2[2];
  sub_5210E8((__int64)v7, 0);
  v8 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v8 - 24)) = a2[3];
  a1[1] = (__int64)off_6B7710;
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  sub_53DB28(a1 + 8);
  v9 = *a1;
  a1[1] = (__int64)off_6DA7B0;
  *(_DWORD *)(v5 + 64) = a3 | 0x10;
  v10 = (__int64)a1 + *(_QWORD *)(v9 - 24);
  a1[10] = (__int64)&byte_6FD2F8;
  return sub_5210E8(v10, v5);
}

