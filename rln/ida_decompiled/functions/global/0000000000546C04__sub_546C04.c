/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000546C04
 * Mangled: sub_546C04
 * Demangled: sub_546C04
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000545B8C  sub_545B8C
 *   0x0000000000566A7C  sub_566A7C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x0000000000546C30 string=0x0000000000546C34 "`"
 *   insn=0x0000000000546C3C string=0x0000000000546C40 "t""
 *   insn=0x0000000000546C44 string=0x0000000000546C48 "y"
 *   insn=0x0000000000546C48 string=0x0000000000546C4C "`"
 *   insn=0x0000000000546C50 string=0x0000000000546C54 "dj#"
 *   insn=0x0000000000546C60 string=0x0000000000546C64 "!i"
 *   insn=0x0000000000546C6C string=0x0000000000546C70 "a"
 *   insn=0x0000000000546C70 string=0x0000000000546C74 "!"
 *   insn=0x0000000000546C78 string=0x0000000000546C7C "cj!"
 *   insn=0x0000000000546C80 string=0x0000000000546C84 "!@"
 *   insn=0x0000000000546C84 string=0x0000000000546C88 "a"
 *   insn=0x0000000000546CB0 string=0x0000000000546CB4 "A"
 *   insn=0x0000000000546CB4 string=0x0000000000546CB8 "`"
 *   insn=0x0000000000546CB8 string=0x0000000000546CBC "`B"
 *   insn=0x0000000000546CC0 string=0x0000000000546CC4 """
 *   insn=0x0000000000546CC4 string=0x0000000000546CC8 "m"
 *   insn=0x0000000000546CD0 string=0x0000000000546CD4 "a*@"
 *   insn=0x0000000000546CD8 string=0x0000000000546CDC "V"
 *   insn=0x0000000000546CDC string=0x0000000000546CE0 "#"
 *   insn=0x0000000000546CEC string=0x0000000000546CF0 "`"
 *   insn=0x0000000000546CF8 string=0x0000000000546CFC "`"
 *   insn=0x0000000000546D2C string=0x0000000000546D30 "w"
 *   insn=0x0000000000546D3C string=0x0000000000546D40 "a"
 *   insn=0x0000000000546D40 string=0x0000000000546D44 "!"
 *   insn=0x0000000000546D48 string=0x0000000000546D4C "bj!"
 *   insn=0x0000000000546D58 string=0x0000000000546D5C "x"
 *   insn=0x0000000000546D60 string=0x0000000000546D64 "`*@"
 *   insn=0x0000000000546D64 string=0x0000000000546D68 "!"
 *   insn=0x0000000000546D70 string=0x0000000000546D74 "`"
 *   insn=0x0000000000546D78 string=0x0000000000546D7C "U"
 *   insn=0x0000000000546D88 string=0x0000000000546D8C "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_546C04(__int64 a1, __int64 *a2, __int64 *a3, int a4)
{
  char v6; // w22
  __int64 v7; // x0
  _QWORD *v8; // x0
  int v9; // w27
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x3
  char v16; // [xsp+78h] [xbp+78h] BYREF

  v6 = a4;
  v7 = a2[1];
  *(_QWORD *)a1 = v7;
  v8 = (_QWORD *)(a1 + *(_QWORD *)(v7 - 24));
  *v8 = a2[2];
  v9 = a4 | 0x10;
  sub_5210E8((__int64)v8, 0);
  v10 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v10 - 24)) = a2[3];
  *(_QWORD *)(a1 + 8) = off_6B7710;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  sub_53DB28((_QWORD *)(a1 + 64));
  v11 = *a3;
  *(_QWORD *)(a1 + 8) = off_6DA7B0;
  *(_DWORD *)(a1 + 72) = 0;
  sub_566A7C(a1 + 80, v11, *(_QWORD *)(v11 - 24), &v16);
  *(_DWORD *)(a1 + 72) = v9;
  v12 = *(_QWORD *)(a1 + 80);
  v13 = 0;
  if ( (v6 & 3) != 0 )
    v13 = *(_QWORD *)(v12 - 24);
  sub_545B8C(a1 + 8, v12, 0, v13);
  return sub_5210E8(a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL), a1 + 8);
}

