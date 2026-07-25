/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570A0C
 * Mangled: sub_570A0C
 * Demangled: sub_570A0C
 *
 * Callers: 2
 *   0x000000000053CB20  sub_53CB20
 *   0x000000000054F420  sub_54F420
 *
 * Callees: 4
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000057074C  sub_57074C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x0000000000570A0C string=0x0000000000570A10 "?"
 *   insn=0x0000000000570A20 string=0x0000000000570A24 "`\n"
 *   insn=0x0000000000570A24 string=0x0000000000570A28 "@"
 *   insn=0x0000000000570A28 string=0x0000000000570A30 "`"
 *   insn=0x0000000000570A34 string=0x0000000000570A38 "`\n"
 *   insn=0x0000000000570A34 string=0x000000000053BE10 "@"
 *   insn=0x0000000000570A50 string=0x0000000000570A54 "!"
 *   insn=0x0000000000570A54 string=0x0000000000570A58 "!@"
 *   insn=0x0000000000570A58 string=0x0000000000570A5C "a"
 *   insn=0x0000000000570A5C string=0x0000000000570A60 "W+"
 *   insn=0x0000000000570A6C string=0x0000000000570A70 "_"
 *   insn=0x0000000000570A84 string=0x0000000000570A88 "a"
 *   insn=0x0000000000570A88 string=0x0000000000570A8C "`\n"
 *   insn=0x0000000000570A8C string=0x0000000000570A90 "@"
 *   insn=0x0000000000570A90 string=0x0000000000570A98 "`"
 *   insn=0x0000000000570A9C string=0x0000000000570AA0 "+"
 *   insn=0x0000000000570AA0 string=0x0000000000570AA4 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_570A0C(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)a1 = off_6DBBD0;
  result = sub_53BE10();
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

