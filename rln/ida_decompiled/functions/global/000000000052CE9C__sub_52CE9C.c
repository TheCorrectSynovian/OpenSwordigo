/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CE9C
 * Mangled: sub_52CE9C
 * Demangled: sub_52CE9C
 *
 * Callers: 1
 *   0x000000000053CB20  sub_53CB20
 *
 * Callees: 3
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE10  sub_53BE10
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000052CE9C string=0x000000000052CEA0 "?"
 *   insn=0x000000000052CEB0 string=0x000000000052CEB4 "`\n"
 *   insn=0x000000000052CEB4 string=0x000000000052CEB8 "`"
 *   insn=0x000000000052CEB8 string=0x000000000052CEC0 "`"
 *   insn=0x000000000052CEC4 string=0x000000000052CEC8 "`\n"
 *   insn=0x000000000052CEC4 string=0x000000000053BE10 "@"
 *   insn=0x000000000052CEDC string=0x000000000052CEE0 "7:"
 *   insn=0x000000000052CEE4 string=0x000000000052CEE8 "wR"
 *   insn=0x000000000052CF00 string=0x000000000052CF04 "`\n"
 *   insn=0x000000000052CF04 string=0x000000000052CF08 "`"
 *   insn=0x000000000052CF08 string=0x000000000052CF10 "`"
 *   insn=0x000000000052CF14 string=0x000000000052CF18 "`\n"
 *   insn=0x000000000052CF2C string=0x000000000052CF30 "#:"
 *   insn=0x000000000052CF34 string=0x000000000052CF38 "cR"
 *   insn=0x000000000052CF44 string=0x000000000052CF48 "c@"
 *   insn=0x000000000052CF48 string=0x000000000052CF4C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CE9C(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)a1 = off_6DA260;
  result = sub_53BE10();
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

