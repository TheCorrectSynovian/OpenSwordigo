/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055EDEC
 * Mangled: sub_55EDEC
 * Demangled: sub_55EDEC
 *
 * Callers: 21
 *   0x00000000005602E0  sub_5602E0
 *   0x00000000005603BC  sub_5603BC
 *   0x00000000005604C0  sub_5604C0
 *   0x0000000000560604  sub_560604
 *   0x0000000000560770  sub_560770
 *   0x00000000005608B4  sub_5608B4
 *   0x0000000000560BC8  sub_560BC8
 *   0x0000000000560C9C  sub_560C9C
 *   0x0000000000560D9C  sub_560D9C
 *   0x0000000000560ED8  sub_560ED8
 *   0x0000000000561040  sub_561040
 *   0x000000000056117C  sub_56117C
 *   0x000000000056148C  sub_56148C
 *   0x00000000005615C4  sub_5615C4
 *   0x0000000000561714  sub_561714
 *   0x00000000005618B4  sub_5618B4
 *   0x0000000000561A68  sub_561A68
 *   0x0000000000561C08  sub_561C08
 *   0x0000000000571130  sub_571130
 *   0x000000000057115C  sub_57115C
 *   0x000000000057121C  sub_57121C
 *
 * Callees: 8
 *   0x000000000051F45C  sub_51F45C
 *   0x000000000051F468  sub_51F468
 *   0x000000000051F654  sub_51F654
 *   0x000000000052DAB8  sub_52DAB8
 *   0x000000000052F12C  sub_52F12C
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000055EDF4 string=0x000000000055EDF8 "U"
 *   insn=0x000000000055EE14 string=0x000000000055EE18 "!@"
 *   insn=0x000000000055EE1C string=0x000000000055EE20 "a"
 *   insn=0x000000000055EE34 string=0x000000000055EE38 "<{"
 *   insn=0x000000000055EE48 string=0x000000000055EE4C "A"
 *   insn=0x000000000055EE54 string=0x000000000055EE58 "_"
 *   insn=0x000000000055EE58 string=0x000000000055EE5C "_|"
 *   insn=0x000000000055EE6C string=0x000000000055EE70 "aR"
 *   insn=0x000000000055EF2C string=0x000000000055EF30 "`f"
 *   insn=0x000000000055EF4C string=0x000000000055EF50 "F"
 *   insn=0x000000000055EF5C string=0x000000000055EF60 "u"
 *   insn=0x000000000055EF60 string=0x000000000055EF64 "Yt"
 *   insn=0x000000000055EF68 string=0x000000000055EF6C "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_55EDEC(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x22
  unsigned __int64 result; // x0

  v2 = a1 + 56;
  v3 = a1 + 104;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_6B7710;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  sub_53DB28((_QWORD *)(a1 + 56));
  *(_QWORD *)a1 = off_6DB410;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  sub_51F45C(v3);
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_QWORD *)(a1 + 160) = 1024;
  *(_BYTE *)(a1 + 125) = 0;
  *(_BYTE *)(a1 + 126) = 0;
  *(_BYTE *)(a1 + 127) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 129) = 0;
  *(_BYTE *)(a1 + 130) = 0;
  *(_BYTE *)(a1 + 131) = 0;
  *(_BYTE *)(a1 + 132) = 0;
  *(_BYTE *)(a1 + 133) = 0;
  *(_BYTE *)(a1 + 134) = 0;
  *(_BYTE *)(a1 + 135) = 0;
  *(_BYTE *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 137) = 0;
  *(_BYTE *)(a1 + 138) = 0;
  *(_BYTE *)(a1 + 139) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(_BYTE *)(a1 + 141) = 0;
  *(_BYTE *)(a1 + 142) = 0;
  *(_BYTE *)(a1 + 143) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 145) = 0;
  *(_BYTE *)(a1 + 146) = 0;
  *(_BYTE *)(a1 + 147) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 169) = 0;
  *(_BYTE *)(a1 + 170) = 0;
  *(_BYTE *)(a1 + 171) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_BYTE *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  result = (unsigned __int8)sub_52F12C(v2);
  if ( (_BYTE)result )
  {
    result = (unsigned __int64)sub_52DAB8(v2);
    *(_QWORD *)(a1 + 200) = result;
  }
  return result;
}

