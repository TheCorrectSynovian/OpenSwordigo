/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563A7C
 * Mangled: sub_563A7C
 * Demangled: sub_563A7C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 29
 *   insn=0x0000000000563A88 string=0x0000000000563A8C """
 *   insn=0x0000000000563A94 string=0x0000000000563A98 "b"
 *   insn=0x0000000000563A98 string=0x0000000000563A9C "B"
 *   insn=0x0000000000563A9C string=0x0000000000563AA0 "# @"
 *   insn=0x0000000000563AA0 string=0x0000000000563AA4 "cj""
 *   insn=0x0000000000563AA4 string=0x0000000000563AA8 ""$@"
 *   insn=0x0000000000563AA8 string=0x0000000000563AAC "b\n"
 *   insn=0x0000000000563AB0 string=0x0000000000563AB8 "b"
 *   insn=0x0000000000563ABC string=0x0000000000563AC0 "`"
 *   insn=0x0000000000563AC0 string=0x0000000000563AC4 "i"
 *   insn=0x0000000000563AC8 string=0x0000000000563ACC "`B"
 *   insn=0x0000000000563ACC string=0x0000000000563AD0 "B"
 *   insn=0x0000000000563AD0 string=0x0000000000563AD4 "B@"
 *   insn=0x0000000000563AD4 string=0x0000000000563AD8 "b"
 *   insn=0x0000000000563AD8 string=0x0000000000563ADC "{a"
 *   insn=0x0000000000563AE0 string=0x0000000000563AE4 " "
 *   insn=0x0000000000563AE4 string=0x0000000000563AE8 "`"
 *   insn=0x0000000000563AEC string=0x0000000000563AF0 """
 *   insn=0x0000000000563AF0 string=0x0000000000563AF4 "bj "
 *   insn=0x0000000000563AF4 string=0x0000000000563AF8 " "
 *   insn=0x0000000000563AF8 string=0x0000000000563AFC "`\n"
 *   insn=0x0000000000563AFC string=0x0000000000563B00 " "
 *   insn=0x0000000000563B00 string=0x0000000000563B04 "`\n"
 *   insn=0x0000000000563B08 string=0x0000000000563B0C """
 *   insn=0x0000000000563B0C string=0x0000000000563B10 "`"
 *   insn=0x0000000000563B14 string=0x0000000000563B18 " @"
 *   insn=0x0000000000563B18 string=0x0000000000563B1C "`"
 *   insn=0x0000000000563B20 string=0x0000000000563B24 "!"
 *   insn=0x0000000000563B24 string=0x0000000000563B28 "aj "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563A7C(__int64 a1, __int64 *a2)
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
  *(_QWORD *)(a1 + 24) = off_6DB650;
  sub_562F10(a1 + 24);
  sub_51F468(a1 + 128);
  *(_QWORD *)(a1 + 24) = off_6B7790;
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

