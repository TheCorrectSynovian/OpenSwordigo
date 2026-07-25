/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054F1F4
 * Mangled: sub_54F1F4
 * Demangled: sub_54F1F4
 *
 * Callers: 1
 *   0x000000000053CB20  sub_53CB20
 *
 * Callees: 3
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE10  sub_53BE10
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x000000000054F1F4 string=0x000000000054F1F8 "?"
 *   insn=0x000000000054F208 string=0x000000000054F20C "`\n"
 *   insn=0x000000000054F20C string=0x000000000054F210 "`"
 *   insn=0x000000000054F210 string=0x000000000054F218 "`"
 *   insn=0x000000000054F21C string=0x000000000054F220 "`\n"
 *   insn=0x000000000054F21C string=0x000000000053BE10 "@"
 *   insn=0x000000000054F234 string=0x000000000054F238 "a"
 *   insn=0x000000000054F258 string=0x000000000054F25C "`\n"
 *   insn=0x000000000054F25C string=0x000000000054F260 "`"
 *   insn=0x000000000054F260 string=0x000000000054F268 "`"
 *   insn=0x000000000054F26C string=0x000000000054F270 "`\n"
 *   insn=0x000000000054F284 string=0x000000000054F288 "M"
 *   insn=0x000000000054F29C string=0x000000000054F2A0 "c@"
 *   insn=0x000000000054F2A0 string=0x000000000054F2A4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54F1F4(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)a1 = off_6DB210;
  result = sub_53BE10();
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

