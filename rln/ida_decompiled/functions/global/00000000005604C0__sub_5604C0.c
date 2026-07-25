/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005604C0
 * Mangled: sub_5604C0
 * Demangled: sub_5604C0
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x000000000051F468  sub_51F468
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x000000000055F8C0  sub_55F8C0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x00000000005604E4 string=0x00000000005604E8 "`"
 *   insn=0x00000000005604F8 string=0x00000000005604FC "cj""
 *   insn=0x0000000000560504 string=0x0000000000560508 "`"
 *   insn=0x0000000000560514 string=0x0000000000560518 "a"
 *   insn=0x0000000000560518 string=0x000000000056051C "!"
 *   insn=0x0000000000560520 string=0x0000000000560524 "bj!"
 *   insn=0x0000000000560524 string=0x0000000000560528 "1"
 *   insn=0x0000000000560528 string=0x000000000056052C "`"
 *   insn=0x0000000000560534 string=0x0000000000560538 "`"
 *   insn=0x000000000056054C string=0x0000000000560550 "`"
 *   insn=0x0000000000560550 string=0x0000000000560554 "`"
 *   insn=0x0000000000560550 string=0x000000000056057C "`"
 *   insn=0x000000000056055C string=0x0000000000560560 "`"
 *   insn=0x0000000000560580 string=0x0000000000560584 "a"
 *   insn=0x0000000000560588 string=0x000000000056058C "! @"
 *   insn=0x000000000056058C string=0x0000000000560590 "!"
 *   insn=0x00000000005605AC string=0x00000000005605B0 "a"
 *   insn=0x00000000005605B0 string=0x00000000005605B4 "!"
 *   insn=0x00000000005605B8 string=0x00000000005605BC "bj!"
 *   insn=0x00000000005605C8 string=0x00000000005605CC "!@"
 *   insn=0x00000000005605D0 string=0x00000000005605D4 "a\n"
 *   insn=0x00000000005605D4 string=0x00000000005605D8 "n"
 *   insn=0x00000000005605D8 string=0x00000000005605DC "`"
 *   insn=0x00000000005605E0 string=0x00000000005605E4 "!"
 *   insn=0x00000000005605E4 string=0x00000000005605E8 "`""
 *   insn=0x00000000005605E8 string=0x00000000005605EC "!$E"
 *   insn=0x00000000005605EC string=0x00000000005605F0 "!@"
 *   insn=0x00000000005605F0 string=0x00000000005605F4 "a\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5604C0(__int64 *a1, __int64 *a2, const char *a3, int a4)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v10; // x1

  v6 = (__int64)(a1 + 2);
  v7 = a2[1];
  *a1 = v7;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[2];
  a1[1] = 0;
  sub_5210E8((__int64)a1 + *(_QWORD *)(v7 - 24), 0);
  v10 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v10 - 24)) = a2[3];
  sub_55EDEC(v6);
  sub_5210E8((__int64)a1 + *(_QWORD *)(*a1 - 24), v6);
  if ( sub_55F8C0(v6, a3, a4 | 8u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

