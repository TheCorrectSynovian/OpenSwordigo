/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057199C
 * Mangled: sub_57199C
 * Demangled: sub_57199C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000005719B4 string=0x00000000005719B8 "`"
 *   insn=0x00000000005719C0 string=0x00000000005719C4 "cj""
 *   insn=0x00000000005719CC string=0x00000000005719D0 "`"
 *   insn=0x00000000005719D8 string=0x00000000005719DC "cB"
 *   insn=0x00000000005719DC string=0x00000000005719E0 "`\n"
 *   insn=0x00000000005719EC string=0x00000000005719F0 "`"
 *   insn=0x00000000005719F0 string=0x00000000005719F4 "dh""
 *   insn=0x00000000005719FC string=0x0000000000571A00 "`"
 *   insn=0x0000000000571A08 string=0x0000000000571A0C "aj "
 *   insn=0x0000000000571A10 string=0x0000000000571A14 "`\n"
 *   insn=0x0000000000571A24 string=0x0000000000571A28 "a"
 *   insn=0x0000000000571A28 string=0x0000000000571A2C "!"
 *   insn=0x0000000000571A30 string=0x0000000000571A34 "bj!"
 *   insn=0x0000000000571A5C string=0x0000000000571A60 "B"
 *   insn=0x0000000000571A68 string=0x0000000000571A6C "B 9"
 *   insn=0x0000000000571A88 string=0x0000000000571A8C "B"
 *   insn=0x0000000000571A9C string=0x0000000000571AA0 "@"
 *   insn=0x0000000000571AA0 string=0x0000000000571AA4 "A"
 *   insn=0x0000000000571AA8 string=0x0000000000571AAC "!"
 *   insn=0x0000000000571AC0 string=0x0000000000571AC4 " \n"
 *   insn=0x0000000000571AD0 string=0x0000000000571AD4 " \n"
 *   insn=0x0000000000571ADC string=0x0000000000571AE0 " \n"
 *   insn=0x0000000000571B00 string=0x0000000000571B04 "!<E"
 *   insn=0x0000000000571B04 string=0x0000000000571B08 "!@"
 *   insn=0x0000000000571B14 string=0x0000000000571B18 "k?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57199C(__int64 *a1, __int64 *a2)
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
  sub_5210E8((__int64)a1 + *(_QWORD *)(v4 - 24), 0);
  v5 = a2[3];
  a1[2] = v5;
  v6 = (__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24) + 16);
  *v6 = a2[4];
  sub_5210E8((__int64)v6, 0);
  v7 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[5];
  result = a2[6];
  a1[2] = result;
  return result;
}

