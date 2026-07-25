/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571CF8
 * Mangled: sub_571CF8
 * Demangled: sub_571CF8
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x0000000000571E78  std::bad_array_length::what(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x0000000000571D10 string=0x0000000000571D14 "`"
 *   insn=0x0000000000571D1C string=0x0000000000571D20 "cj""
 *   insn=0x0000000000571D28 string=0x0000000000571D2C "`"
 *   insn=0x0000000000571D2C string=0x0000000000571D30 "&"
 *   insn=0x0000000000571D34 string=0x0000000000571D38 "cB"
 *   insn=0x0000000000571D38 string=0x0000000000571D3C "`\n"
 *   insn=0x0000000000571D48 string=0x0000000000571D4C "`"
 *   insn=0x0000000000571D4C string=0x0000000000571D50 "dh""
 *   insn=0x0000000000571D58 string=0x0000000000571D5C "`"
 *   insn=0x0000000000571D64 string=0x0000000000571D68 "aj "
 *   insn=0x0000000000571D6C string=0x0000000000571D70 "`\n"
 *   insn=0x0000000000571D80 string=0x0000000000571D84 "a"
 *   insn=0x0000000000571D84 string=0x0000000000571D88 "!"
 *   insn=0x0000000000571D8C string=0x0000000000571D90 "bj!"
 *   insn=0x0000000000571DB0 string=0x0000000000571DB4 """
 *   insn=0x0000000000571DB8 string=0x0000000000571DBC "B"
 *   insn=0x0000000000571DC4 string=0x0000000000571DC8 "B"
 *   insn=0x0000000000571DE4 string=0x0000000000571DE8 "B"
 *   insn=0x0000000000571DF8 string=0x0000000000571DFC "@"
 *   insn=0x0000000000571DFC string=0x0000000000571E00 "A"
 *   insn=0x0000000000571E04 string=0x0000000000571E08 "!"
 *   insn=0x0000000000571E1C string=0x0000000000571E20 " \n"
 *   insn=0x0000000000571E2C string=0x0000000000571E30 " \n"
 *   insn=0x0000000000571E38 string=0x0000000000571E3C " \n"
 *   insn=0x0000000000571E5C string=0x0000000000571E60 "!$E"
 *   insn=0x0000000000571E60 string=0x0000000000571E64 "!@"
 *   insn=0x0000000000571E74 string=0x0000000000571E78 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_571CF8(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x0
  __int64 v5; // x0
  _QWORD *v6; // x0
  __int64 v7; // x0
  __int64 result; // x0

  v4 = a2[1];
  *a1 = v4;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v4 - 24)) = a2[2];
  a1[1] = 0;
  sub_5219C8((__int64)a1 + *(_QWORD *)(v4 - 24), 0);
  v5 = a2[3];
  a1[2] = v5;
  v6 = (__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24) + 16);
  *v6 = a2[4];
  sub_5219C8((__int64)v6, 0);
  v7 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[5];
  result = a2[6];
  a1[2] = result;
  return result;
}

