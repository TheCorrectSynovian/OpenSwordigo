/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000560BC8
 * Mangled: sub_560BC8
 * Demangled: sub_560BC8
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
 * Referenced strings: 23
 *   insn=0x0000000000560BE8 string=0x0000000000560BEC "`"
 *   insn=0x0000000000560BF4 string=0x0000000000560BF8 "`"
 *   insn=0x0000000000560BF8 string=0x0000000000560BFC "cj""
 *   insn=0x0000000000560BFC string=0x0000000000560C00 ":"
 *   insn=0x0000000000560C08 string=0x0000000000560C0C "a"
 *   insn=0x0000000000560C0C string=0x0000000000560C10 "!"
 *   insn=0x0000000000560C14 string=0x0000000000560C18 "bj!"
 *   insn=0x0000000000560C18 string=0x0000000000560C1C "t"
 *   insn=0x0000000000560C1C string=0x0000000000560C20 "`"
 *   insn=0x0000000000560C28 string=0x0000000000560C2C "`"
 *   insn=0x0000000000560C2C string=0x0000000000560C30 "."
 *   insn=0x0000000000560C44 string=0x0000000000560C48 "a"
 *   insn=0x0000000000560C48 string=0x0000000000560C4C "!"
 *   insn=0x0000000000560C50 string=0x0000000000560C54 "bj!"
 *   insn=0x0000000000560C54 string=0x0000000000560C58 ""
 *   insn=0x0000000000560C60 string=0x0000000000560C64 "!@"
 *   insn=0x0000000000560C68 string=0x0000000000560C6C "a"
 *   insn=0x0000000000560C70 string=0x0000000000560C74 "`"
 *   insn=0x0000000000560C78 string=0x0000000000560C7C "!"
 *   insn=0x0000000000560C7C string=0x0000000000560C80 "`"
 *   insn=0x0000000000560C80 string=0x0000000000560C84 "!$E"
 *   insn=0x0000000000560C84 string=0x0000000000560C88 "!@"
 *   insn=0x0000000000560C88 string=0x0000000000560C8C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_560BC8(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x21
  __int64 v5; // x0
  _QWORD *v6; // x0
  __int64 v7; // x1

  v4 = (__int64)(a1 + 1);
  v5 = a2[1];
  *a1 = v5;
  v6 = (__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24));
  *v6 = a2[2];
  sub_5210E8((__int64)v6, 0);
  v7 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[3];
  sub_55EDEC(v4);
  return sub_5210E8((__int64)a1 + *(_QWORD *)(*a1 - 24), v4);
}

