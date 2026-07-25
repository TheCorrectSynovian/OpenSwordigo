/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561DBC
 * Mangled: sub_561DBC
 * Demangled: sub_561DBC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 29
 *   insn=0x0000000000561DC8 string=0x0000000000561DCC """
 *   insn=0x0000000000561DD4 string=0x0000000000561DD8 "b"
 *   insn=0x0000000000561DD8 string=0x0000000000561DDC "B"
 *   insn=0x0000000000561DDC string=0x0000000000561DE0 "# @"
 *   insn=0x0000000000561DE0 string=0x0000000000561DE4 "cj""
 *   insn=0x0000000000561DE4 string=0x0000000000561DE8 ""$@"
 *   insn=0x0000000000561DE8 string=0x0000000000561DEC "b\n"
 *   insn=0x0000000000561DF0 string=0x0000000000561DF8 "b"
 *   insn=0x0000000000561DF8 string=0x0000000000561DFC "e"
 *   insn=0x0000000000561DFC string=0x0000000000561E00 "`"
 *   insn=0x0000000000561E04 string=0x0000000000561E08 """
 *   insn=0x0000000000561E08 string=0x0000000000561E0C "`B"
 *   insn=0x0000000000561E0C string=0x0000000000561E10 "B$E"
 *   insn=0x0000000000561E10 string=0x0000000000561E14 "B@"
 *   insn=0x0000000000561E14 string=0x0000000000561E18 "b"
 *   insn=0x0000000000561E20 string=0x0000000000561E24 " "
 *   insn=0x0000000000561E24 string=0x0000000000561E28 "`"
 *   insn=0x0000000000561E2C string=0x0000000000561E30 """
 *   insn=0x0000000000561E30 string=0x0000000000561E34 "bj "
 *   insn=0x0000000000561E34 string=0x0000000000561E38 " "
 *   insn=0x0000000000561E38 string=0x0000000000561E3C "`\n"
 *   insn=0x0000000000561E3C string=0x0000000000561E40 " "
 *   insn=0x0000000000561E40 string=0x0000000000561E44 "`\n"
 *   insn=0x0000000000561E48 string=0x0000000000561E4C """
 *   insn=0x0000000000561E4C string=0x0000000000561E50 "`"
 *   insn=0x0000000000561E54 string=0x0000000000561E58 " @"
 *   insn=0x0000000000561E58 string=0x0000000000561E5C "`"
 *   insn=0x0000000000561E60 string=0x0000000000561E64 "!"
 *   insn=0x0000000000561E64 string=0x0000000000561E68 "aj "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561DBC(__int64 a1, __int64 *a2)
{
  __int64 v3; // x2
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 result; // x0

  v3 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v3 - 24)) = a2[8];
  *(_QWORD *)(a1 + 16) = a2[9];
  *(_QWORD *)(a1 + 24) = off_6DB410;
  sub_55F390(a1 + 24);
  sub_51F468(a1 + 128);
  *(_QWORD *)(a1 + 24) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 80));
  v4 = a2[1];
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + *(_QWORD *)(v4 - 24)) = a2[6];
  *(_QWORD *)(a1 + 16) = a2[7];
  v5 = a2[4];
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + *(_QWORD *)(v5 - 24) + 16) = a2[5];
  v6 = a2[2];
  *(_QWORD *)a1 = v6;
  result = *(_QWORD *)(v6 - 24);
  *(_QWORD *)(a1 + result) = a2[3];
  return result;
}

