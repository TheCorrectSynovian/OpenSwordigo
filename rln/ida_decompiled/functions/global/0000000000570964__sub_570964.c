/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570964
 * Mangled: sub_570964
 * Demangled: sub_570964
 *
 * Callers: 3
 *   0x000000000052D0C8  sub_52D0C8
 *   0x000000000053CB20  sub_53CB20
 *   0x00000000005708F8  sub_5708F8
 *
 * Callees: 4
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000057074C  sub_57074C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x0000000000570964 string=0x0000000000570968 "?"
 *   insn=0x0000000000570978 string=0x000000000057097C "`\n"
 *   insn=0x000000000057097C string=0x0000000000570980 "@\n"
 *   insn=0x0000000000570980 string=0x0000000000570988 "`"
 *   insn=0x0000000000570988 string=0x000000000057098C "!-"
 *   insn=0x000000000057098C string=0x0000000000570990 "`\n"
 *   insn=0x000000000057098C string=0x000000000053BE10 "@"
 *   insn=0x00000000005709A8 string=0x00000000005709AC "!$F"
 *   insn=0x00000000005709AC string=0x00000000005709B0 "!@"
 *   insn=0x00000000005709B0 string=0x00000000005709B4 "a"
 *   insn=0x00000000005709C4 string=0x00000000005709C8 "_"
 *   insn=0x00000000005709DC string=0x00000000005709E0 "a"
 *   insn=0x00000000005709E0 string=0x00000000005709E4 "`\n"
 *   insn=0x00000000005709E4 string=0x00000000005709E8 "@\n"
 *   insn=0x00000000005709E8 string=0x00000000005709F0 "`"
 *   insn=0x00000000005709F4 string=0x00000000005709F8 "U"
 *   insn=0x00000000005709F8 string=0x00000000005709FC "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_570964(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)a1 = off_6B8140;
  result = sub_53BE10();
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

