/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005490A8
 * Mangled: sub_5490A8
 * Demangled: sub_5490A8
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x0000000000203E90  start
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056DF24  sub_56DF24
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x00000000005490D4 string=0x00000000005490D8 "Yc"
 *   insn=0x00000000005490E8 string=0x00000000005490EC "B +"
 *   insn=0x0000000000549104 string=0x0000000000549108 "b"
 *   insn=0x000000000054910C string=0x0000000000549114 "b."
 *   insn=0x0000000000549114 string=0x0000000000549118 ",b"
 *   insn=0x0000000000549118 string=0x000000000054911C "`"
 *   insn=0x0000000000549124 string=0x0000000000549128 "`"
 *   insn=0x0000000000549128 string=0x000000000054912C "`"
 *   insn=0x000000000054912C string=0x0000000000549130 "u""
 *   insn=0x0000000000549134 string=0x0000000000549138 "`."
 *   insn=0x0000000000549138 string=0x000000000054913C "y"
 *   insn=0x0000000000549150 string=0x0000000000549154 "!@"
 *   insn=0x0000000000549154 string=0x0000000000549158 "a"
 *   insn=0x0000000000549170 string=0x0000000000549174 "m"
 *   insn=0x000000000054917C string=0x0000000000549180 "`"
 *   insn=0x0000000000549188 string=0x000000000054918C "`B"
 *   insn=0x000000000054918C string=0x0000000000549190 """
 *   insn=0x0000000000549190 string=0x0000000000549194 "d"
 *   insn=0x000000000054919C string=0x00000000005491A0 "a*@"
 *   insn=0x00000000005491A4 string=0x00000000005491A8 "V"
 *   insn=0x00000000005491A8 string=0x00000000005491AC "#"
 *   insn=0x00000000005491B4 string=0x00000000005491B8 ";"
 *   insn=0x00000000005491EC string=0x00000000005491F0 "!$E"
 *   insn=0x00000000005491F0 string=0x00000000005491F4 "!@"
 *   insn=0x00000000005491F4 string=0x00000000005491F8 "a."
 *   insn=0x000000000054920C string=0x0000000000549210 "x"
 *   insn=0x0000000000549214 string=0x0000000000549218 "`*@"
 *   insn=0x0000000000549218 string=0x000000000054921C "!"
 *   insn=0x0000000000549224 string=0x0000000000549228 "`"
 *   insn=0x000000000054923C string=0x0000000000549240 "w"
 *   insn=0x000000000054925C string=0x0000000000549260 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5490A8(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x3
  char v11; // [xsp+68h] [xbp+68h] BYREF

  v3 = a1 + 88;
  sub_521E3C(a1 + 88);
  *(_QWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 228) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *(_QWORD *)a1 = &unk_6DAAC8;
  *(_QWORD *)(a1 + 88) = &unk_6DAAF0;
  sub_5219C8(v3, 0);
  *(_QWORD *)a1 = off_6B7448;
  *(_QWORD *)(a1 + 88) = off_6B7470;
  *(_QWORD *)(a1 + 8) = off_6B7790;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  sub_53DB28((_QWORD *)(a1 + 64));
  v7 = *a2;
  *(_QWORD *)(a1 + 8) = off_6DA9F0;
  *(_DWORD *)(a1 + 72) = 0;
  sub_56DF24(a1 + 80, v7, *(_QWORD *)(v7 - 24), &v11);
  *(_DWORD *)(a1 + 72) = a3 | 0x10;
  v8 = *(_QWORD *)(a1 + 80);
  v9 = 0;
  if ( (a3 & 3) != 0 )
    v9 = *(_QWORD *)(v8 - 24);
  sub_547EA4(a1 + 8, v8, 0, v9);
  return sub_5219C8(v3, a1 + 8);
}

