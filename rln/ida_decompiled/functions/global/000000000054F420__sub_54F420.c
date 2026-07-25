/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054F420
 * Mangled: sub_54F420
 * Demangled: sub_54F420
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001FA120  .strcmp
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE10  sub_53BE10
 *   0x0000000000570710  sub_570710
 *   0x0000000000570744  sub_570744
 *   0x000000000057074C  sub_57074C
 *   0x0000000000570828  sub_570828
 *   0x0000000000570A0C  sub_570A0C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x000000000054F438 string=0x000000000054F43C "t"
 *   insn=0x000000000054F43C string=0x000000000054F440 "a"
 *   insn=0x000000000054F444 string=0x000000000054F448 "!"
 *   insn=0x000000000054F44C string=0x000000000054F450 "a"
 *   insn=0x000000000054F450 string=0x000000000054F458 "2"
 *   insn=0x000000000054F450 string=0x000000000059D1C8 "C"
 *   insn=0x000000000054F458 string=0x00000000001FA120 "0'"
 *   insn=0x000000000054F45C string=0x000000000054F460 "a"
 *   insn=0x000000000054F460 string=0x000000000059D1D0 "POSIX"
 *   insn=0x000000000054F464 string=0x000000000054F468 "!@"
 *   insn=0x000000000054F468 string=0x000000000054F46C "-"
 *   insn=0x000000000054F4C4 string=0x000000000054F4C8 "?"
 *   insn=0x000000000054F4D8 string=0x000000000054F4DC "`\n"
 *   insn=0x000000000054F4DC string=0x000000000054F4E0 "@"
 *   insn=0x000000000054F4E0 string=0x000000000054F4E8 "`"
 *   insn=0x000000000054F4E8 string=0x000000000054F4EC "I"
 *   insn=0x000000000054F4EC string=0x000000000054F4F0 "`\n"
 *   insn=0x000000000054F4EC string=0x000000000053BE10 "@"
 *   insn=0x000000000054F514 string=0x000000000054F518 "_"
 *   insn=0x000000000054F52C string=0x000000000054F530 "a"
 *   insn=0x000000000054F530 string=0x000000000054F534 "`\n"
 *   insn=0x000000000054F534 string=0x000000000054F538 "@"
 *   insn=0x000000000054F538 string=0x000000000054F540 "`"
 *   insn=0x000000000054F548 string=0x000000000054F54C "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54F420(_QWORD *a1, char *a2, __int64 a3)
{
  __int64 result; // x0

  sub_570A0C(a1, a3);
  *a1 = off_6DB2B0;
  result = strcmp(a2, "C");
  if ( (_DWORD)result )
  {
    result = strcmp(a2, "POSIX");
    if ( (_DWORD)result )
    {
      sub_570744(a1 + 2);
      return sub_570710((int)a1 + 16, a2);
    }
  }
  return result;
}

