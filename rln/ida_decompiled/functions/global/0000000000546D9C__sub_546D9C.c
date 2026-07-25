/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000546D9C
 * Mangled: sub_546D9C
 * Demangled: sub_546D9C
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000545B8C  sub_545B8C
 *   0x0000000000566A7C  sub_566A7C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x0000000000546DDC string=0x0000000000546DE0 "B ""
 *   insn=0x0000000000546DF8 string=0x0000000000546DFC "b"
 *   insn=0x0000000000546E00 string=0x0000000000546E08 "b."
 *   insn=0x0000000000546E18 string=0x0000000000546E1C "`"
 *   insn=0x0000000000546E20 string=0x0000000000546E24 "u""
 *   insn=0x0000000000546E28 string=0x0000000000546E2C "`."
 *   insn=0x0000000000546E2C string=0x0000000000546E30 "y"
 *   insn=0x0000000000546E44 string=0x0000000000546E48 "!@"
 *   insn=0x0000000000546E48 string=0x0000000000546E4C "a"
 *   insn=0x0000000000546E64 string=0x0000000000546E68 "0"
 *   insn=0x0000000000546E70 string=0x0000000000546E74 "`"
 *   insn=0x0000000000546E7C string=0x0000000000546E80 "`B"
 *   insn=0x0000000000546E80 string=0x0000000000546E84 """
 *   insn=0x0000000000546E90 string=0x0000000000546E94 "a*@"
 *   insn=0x0000000000546E98 string=0x0000000000546E9C "V"
 *   insn=0x0000000000546E9C string=0x0000000000546EA0 "#"
 *   insn=0x0000000000546EA8 string=0x0000000000546EAC "8"
 *   insn=0x0000000000546EE0 string=0x0000000000546EE4 "!<E"
 *   insn=0x0000000000546EE4 string=0x0000000000546EE8 "!@"
 *   insn=0x0000000000546EE8 string=0x0000000000546EEC "a."
 *   insn=0x0000000000546EF4 string=0x0000000000546EF8 "s"
 *   insn=0x0000000000546F00 string=0x0000000000546F04 "x"
 *   insn=0x0000000000546F08 string=0x0000000000546F0C "`*@"
 *   insn=0x0000000000546F0C string=0x0000000000546F10 "!"
 *   insn=0x0000000000546F18 string=0x0000000000546F1C "`"
 *   insn=0x0000000000546F30 string=0x0000000000546F34 "w"
 *   insn=0x0000000000546F34 string=0x0000000000546F38 "d"
 *   insn=0x0000000000546F50 string=0x0000000000546F54 "w"
 *   insn=0x0000000000546F54 string=0x0000000000546F58 "\"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_546D9C(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x3
  char v11; // [xsp+68h] [xbp+68h] BYREF

  v3 = a1 + 88;
  sub_521E3C(a1 + 88);
  *(_QWORD *)(v3 + 216) = 0;
  *(_BYTE *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 225) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *(_QWORD *)a1 = &unk_6DA888;
  *(_QWORD *)(a1 + 88) = &unk_6DA8B0;
  sub_5210E8(v3, 0);
  *(_QWORD *)a1 = off_6B7298;
  *(_QWORD *)(a1 + 88) = off_6B72C0;
  *(_QWORD *)(a1 + 8) = off_6B7710;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  sub_53DB28((_QWORD *)(a1 + 64));
  v7 = *a2;
  *(_QWORD *)(a1 + 8) = off_6DA7B0;
  *(_DWORD *)(a1 + 72) = 0;
  sub_566A7C(a1 + 80, v7, *(_QWORD *)(v7 - 24), &v11);
  *(_DWORD *)(a1 + 72) = a3 | 0x10;
  v8 = *(_QWORD *)(a1 + 80);
  v9 = 0;
  if ( (a3 & 3) != 0 )
    v9 = *(_QWORD *)(v8 - 24);
  sub_545B8C(a1 + 8, v8, 0, v9);
  return sub_5210E8(v3, a1 + 8);
}

