/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005602E0
 * Mangled: sub_5602E0
 * Demangled: sub_5602E0
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x000000000051F468  sub_51F468
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x0000000000560300 string=0x0000000000560304 "`"
 *   insn=0x000000000056030C string=0x0000000000560310 "cj""
 *   insn=0x0000000000560318 string=0x000000000056031C "`"
 *   insn=0x000000000056031C string=0x0000000000560320 "r"
 *   insn=0x0000000000560328 string=0x000000000056032C "a"
 *   insn=0x000000000056032C string=0x0000000000560330 "!"
 *   insn=0x0000000000560334 string=0x0000000000560338 "bj!"
 *   insn=0x000000000056033C string=0x0000000000560340 "`"
 *   insn=0x0000000000560348 string=0x000000000056034C "`"
 *   insn=0x000000000056034C string=0x0000000000560350 "f"
 *   insn=0x0000000000560364 string=0x0000000000560368 "a"
 *   insn=0x0000000000560368 string=0x000000000056036C "!"
 *   insn=0x0000000000560370 string=0x0000000000560374 "bj!"
 *   insn=0x0000000000560374 string=0x0000000000560378 "S"
 *   insn=0x0000000000560380 string=0x0000000000560384 "!@"
 *   insn=0x0000000000560388 string=0x000000000056038C "a\n"
 *   insn=0x0000000000560390 string=0x0000000000560394 "`"
 *   insn=0x0000000000560394 string=0x0000000000560398 "4"
 *   insn=0x0000000000560398 string=0x000000000056039C "!"
 *   insn=0x000000000056039C string=0x00000000005603A0 "`""
 *   insn=0x00000000005603A0 string=0x00000000005603A4 "!$E"
 *   insn=0x00000000005603A4 string=0x00000000005603A8 "!@"
 *   insn=0x00000000005603A8 string=0x00000000005603AC "a\n"
 *   insn=0x00000000005603AC string=0x00000000005603B0 "Fo"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5602E0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  v4 = (__int64)(a1 + 2);
  v5 = a2[1];
  *a1 = v5;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24)) = a2[2];
  a1[1] = 0;
  sub_5210E8((__int64)a1 + *(_QWORD *)(v5 - 24), 0);
  v6 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v6 - 24)) = a2[3];
  sub_55EDEC(v4);
  return sub_5210E8((__int64)a1 + *(_QWORD *)(*a1 - 24), v4);
}

