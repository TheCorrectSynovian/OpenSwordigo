/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000560A20
 * Mangled: sub_560A20
 * Demangled: sub_560A20
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 17
 *   insn=0x0000000000560A2C string=0x0000000000560A30 """
 *   insn=0x0000000000560A38 string=0x0000000000560A3C "b"
 *   insn=0x0000000000560A3C string=0x0000000000560A40 "B"
 *   insn=0x0000000000560A40 string=0x0000000000560A44 "#"
 *   insn=0x0000000000560A44 string=0x0000000000560A48 "cj""
 *   insn=0x0000000000560A4C string=0x0000000000560A54 "b\n"
 *   insn=0x0000000000560A54 string=0x0000000000560A58 "N"
 *   insn=0x0000000000560A58 string=0x0000000000560A5C "`"
 *   insn=0x0000000000560A60 string=0x0000000000560A64 """
 *   insn=0x0000000000560A64 string=0x0000000000560A68 "`""
 *   insn=0x0000000000560A68 string=0x0000000000560A6C "B$E"
 *   insn=0x0000000000560A6C string=0x0000000000560A70 "B@"
 *   insn=0x0000000000560A70 string=0x0000000000560A74 "b\n"
 *   insn=0x0000000000560A7C string=0x0000000000560A80 " "
 *   insn=0x0000000000560A80 string=0x0000000000560A84 "`"
 *   insn=0x0000000000560A88 string=0x0000000000560A8C "!@"
 *   insn=0x0000000000560A8C string=0x0000000000560A90 "aj "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_560A20(__int64 a1, __int64 *a2)
{
  __int64 v3; // x2
  __int64 v4; // x0
  __int64 result; // x0

  v3 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v3 - 24)) = a2[3];
  *(_QWORD *)(a1 + 16) = off_6DB410;
  sub_55F390(a1 + 16);
  sub_51F468(a1 + 120);
  *(_QWORD *)(a1 + 16) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 72));
  v4 = a2[1];
  *(_QWORD *)a1 = v4;
  result = *(_QWORD *)(v4 - 24);
  *(_QWORD *)(a1 + result) = a2[2];
  return result;
}

