/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000548F10
 * Mangled: sub_548F10
 * Demangled: sub_548F10
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x0000000000203E90  start
 *   0x00000000005219C8  sub_5219C8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056DF24  sub_56DF24
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x0000000000548F3C string=0x0000000000548F40 "`"
 *   insn=0x0000000000548F48 string=0x0000000000548F4C "t""
 *   insn=0x0000000000548F50 string=0x0000000000548F54 "y"
 *   insn=0x0000000000548F54 string=0x0000000000548F58 "`"
 *   insn=0x0000000000548F5C string=0x0000000000548F60 "dj#"
 *   insn=0x0000000000548F78 string=0x0000000000548F7C "a"
 *   insn=0x0000000000548F7C string=0x0000000000548F80 "!"
 *   insn=0x0000000000548F84 string=0x0000000000548F88 "cj!"
 *   insn=0x0000000000548F8C string=0x0000000000548F90 "!@"
 *   insn=0x0000000000548F90 string=0x0000000000548F94 "a"
 *   insn=0x0000000000548FBC string=0x0000000000548FC0 "A"
 *   insn=0x0000000000548FC0 string=0x0000000000548FC4 "`"
 *   insn=0x0000000000548FC4 string=0x0000000000548FC8 "`B"
 *   insn=0x0000000000548FCC string=0x0000000000548FD0 """
 *   insn=0x0000000000548FDC string=0x0000000000548FE0 "a*@"
 *   insn=0x0000000000548FE4 string=0x0000000000548FE8 "V"
 *   insn=0x0000000000548FE8 string=0x0000000000548FEC "#"
 *   insn=0x0000000000548FF8 string=0x0000000000548FFC "`"
 *   insn=0x0000000000549004 string=0x0000000000549008 "`"
 *   insn=0x0000000000549008 string=0x000000000054900C "ob"
 *   insn=0x0000000000549038 string=0x000000000054903C "w"
 *   insn=0x000000000054903C string=0x0000000000549040 """
 *   insn=0x0000000000549048 string=0x000000000054904C "a"
 *   insn=0x000000000054904C string=0x0000000000549050 "!"
 *   insn=0x0000000000549054 string=0x0000000000549058 "bj!"
 *   insn=0x0000000000549064 string=0x0000000000549068 "x"
 *   insn=0x000000000054906C string=0x0000000000549070 "`*@"
 *   insn=0x0000000000549070 string=0x0000000000549074 "!"
 *   insn=0x000000000054907C string=0x0000000000549080 "`"
 *   insn=0x0000000000549094 string=0x0000000000549098 "w"
 *   insn=0x0000000000549098 string=0x000000000054909C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_548F10(__int64 a1, __int64 *a2, __int64 *a3, int a4)
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
  sub_5219C8((__int64)v8, 0);
  v10 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v10 - 24)) = a2[3];
  *(_QWORD *)(a1 + 8) = off_6B7790;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  sub_53DB28((_QWORD *)(a1 + 64));
  v11 = *a3;
  *(_QWORD *)(a1 + 8) = off_6DA9F0;
  *(_DWORD *)(a1 + 72) = 0;
  sub_56DF24(a1 + 80, v11, *(_QWORD *)(v11 - 24), &v16);
  *(_DWORD *)(a1 + 72) = v9;
  v12 = *(_QWORD *)(a1 + 80);
  v13 = 0;
  if ( (v6 & 3) != 0 )
    v13 = *(_QWORD *)(v12 - 24);
  sub_547EA4(a1 + 8, v12, 0, v13);
  return sub_5219C8(a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL), a1 + 8);
}

