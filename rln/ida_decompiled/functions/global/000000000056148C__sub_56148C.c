/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056148C
 * Mangled: sub_56148C
 * Demangled: sub_56148C
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x000000000051F468  sub_51F468
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x0000000000571950  sub_571950
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x00000000005614A8 string=0x00000000005614AC "`"
 *   insn=0x00000000005614B4 string=0x00000000005614B8 "cj""
 *   insn=0x00000000005614C0 string=0x00000000005614C4 "`"
 *   insn=0x00000000005614C4 string=0x00000000005614C8 ""
 *   insn=0x00000000005614CC string=0x00000000005614D0 "cB"
 *   insn=0x00000000005614D0 string=0x00000000005614D4 "`\n"
 *   insn=0x00000000005614E0 string=0x00000000005614E4 "`"
 *   insn=0x00000000005614E4 string=0x00000000005614E8 "dh""
 *   insn=0x00000000005614F0 string=0x00000000005614F4 "ub"
 *   insn=0x00000000005614F4 string=0x00000000005614F8 "a"
 *   insn=0x00000000005614FC string=0x0000000000561500 "!"
 *   insn=0x0000000000561504 string=0x0000000000561508 "bj!"
 *   insn=0x000000000056150C string=0x0000000000561510 "a\n"
 *   insn=0x0000000000561514 string=0x0000000000561518 "a"
 *   insn=0x0000000000561518 string=0x000000000056151C "!"
 *   insn=0x0000000000561520 string=0x0000000000561524 "bj!"
 *   insn=0x0000000000561528 string=0x000000000056152C "a\n"
 *   insn=0x000000000056152C string=0x0000000000561530 "/"
 *   insn=0x0000000000561530 string=0x0000000000561534 "`"
 *   insn=0x000000000056153C string=0x0000000000561540 "`"
 *   insn=0x0000000000561558 string=0x000000000056155C "a"
 *   insn=0x000000000056155C string=0x0000000000561560 "!"
 *   insn=0x0000000000561564 string=0x0000000000561568 "bj!"
 *   insn=0x0000000000561574 string=0x0000000000561578 "!@"
 *   insn=0x000000000056157C string=0x0000000000561580 "a"
 *   insn=0x0000000000561580 string=0x0000000000561584 "5"
 *   insn=0x0000000000561588 string=0x000000000056158C "`"
 *   insn=0x0000000000561594 string=0x0000000000561598 "`B"
 *   insn=0x000000000056159C string=0x00000000005615A0 "u"
 *   insn=0x00000000005615B0 string=0x0000000000571950 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_56148C(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x0
  __int64 v5; // x0
  _QWORD *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1

  v4 = a2[2];
  *a1 = v4;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v4 - 24)) = a2[3];
  a1[1] = 0;
  sub_5210E8((__int64)a1 + *(_QWORD *)(v4 - 24), 0);
  v5 = a2[4];
  a1[2] = v5;
  v6 = (__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24) + 16);
  *v6 = a2[5];
  sub_5210E8((__int64)v6, 0);
  v7 = a2[1];
  *a1 = v7;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[6];
  a1[2] = a2[7];
  v8 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v8 - 24)) = a2[8];
  a1[2] = a2[9];
  sub_55EDEC((__int64)(a1 + 3));
  return sub_5210E8((__int64)a1 + *(_QWORD *)(*a1 - 24), (__int64)(a1 + 3));
}

