/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054606C
 * Mangled: sub_54606C
 * Demangled: sub_54606C
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x000000000055CDC4  sub_55CDC4
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x0000000000546094 string=0x0000000000546098 "`"
 *   insn=0x00000000005460A0 string=0x00000000005460A4 "y""
 *   insn=0x00000000005460B4 string=0x00000000005460B8 "dj#"
 *   insn=0x00000000005460C0 string=0x00000000005460C4 "`"
 *   insn=0x00000000005460C4 string=0x00000000005460C8 "l"
 *   insn=0x00000000005460D0 string=0x00000000005460D4 "a"
 *   insn=0x00000000005460D4 string=0x00000000005460D8 "!"
 *   insn=0x00000000005460DC string=0x00000000005460E0 "cj!"
 *   insn=0x00000000005460E4 string=0x00000000005460E8 "!@"
 *   insn=0x00000000005460E8 string=0x00000000005460EC "a\n"
 *   insn=0x0000000000546110 string=0x0000000000546114 "`"
 *   insn=0x0000000000546114 string=0x0000000000546118 "a\n"
 *   insn=0x0000000000546118 string=0x000000000054611C "B"
 *   insn=0x000000000054612C string=0x0000000000546130 "`"
 *   insn=0x0000000000546130 string=0x0000000000546134 "B`"
 *   insn=0x0000000000546134 string=0x0000000000546138 "b."
 *   insn=0x0000000000546158 string=0x000000000054615C "x\n"
 *   insn=0x000000000054615C string=0x0000000000546160 "a.@"
 *   insn=0x0000000000546168 string=0x000000000054616C " `"
 *   insn=0x0000000000546170 string=0x0000000000546174 "`"
 *   insn=0x0000000000546178 string=0x000000000054617C "U"
 *   insn=0x0000000000546188 string=0x000000000054618C "v\n"
 *   insn=0x0000000000546198 string=0x000000000054619C "a"
 *   insn=0x000000000054619C string=0x00000000005461A0 "!"
 *   insn=0x00000000005461A4 string=0x00000000005461A8 "bj!"
 *   insn=0x00000000005461E4 string=0x00000000005461E8 "B"
 *   insn=0x0000000000546204 string=0x0000000000546208 "b"
 *   insn=0x0000000000546214 string=0x0000000000546218 "b2"
 *   insn=0x0000000000546228 string=0x000000000054622C "`"
 *   insn=0x0000000000546230 string=0x0000000000546234 "y""
 *   insn=0x0000000000546238 string=0x000000000054623C "`2"
 *   insn=0x000000000054623C string=0x0000000000546240 "aB"
 *   insn=0x0000000000546254 string=0x0000000000546258 "B@"
 *   insn=0x000000000054625C string=0x0000000000546260 "b\n"
 *   insn=0x0000000000546278 string=0x000000000054627C "+"
 *   insn=0x0000000000546284 string=0x0000000000546288 "`\n"
 *   insn=0x000000000054628C string=0x0000000000546290 "5@"
 *   insn=0x0000000000546294 string=0x0000000000546298 "B`"
 *   insn=0x0000000000546298 string=0x000000000054629C "b."
 *   insn=0x00000000005462CC string=0x00000000005462D0 "w2"
 *   insn=0x00000000005462D8 string=0x00000000005462DC "z"
 *   insn=0x00000000005462E0 string=0x00000000005462E4 "x\n"
 *   insn=0x00000000005462E4 string=0x00000000005462E8 "a.@"
 *   insn=0x00000000005462F0 string=0x00000000005462F4 " `"
 *   insn=0x00000000005462F8 string=0x00000000005462FC "`"
 *   insn=0x0000000000546310 string=0x0000000000546314 "v\n"
 *   insn=0x0000000000546314 string=0x0000000000546318 "l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_54606C(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0

  v5 = (__int64)(a1 + 2);
  v6 = a2[1];
  *a1 = v6;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v6 - 24)) = a2[2];
  a1[1] = 0;
  sub_5210E8((__int64)a1 + *(_QWORD *)(v6 - 24), 0);
  v7 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[3];
  a1[2] = (__int64)off_6B7710;
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  sub_53DB28(a1 + 9);
  v8 = *a1;
  a1[2] = (__int64)off_6DA7B0;
  *(_DWORD *)(v5 + 64) = a3 | 8;
  v9 = (__int64)a1 + *(_QWORD *)(v8 - 24);
  a1[11] = (__int64)&byte_6FD2F8;
  return sub_5210E8(v9, v5);
}

