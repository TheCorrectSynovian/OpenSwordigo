/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054F334
 * Mangled: sub_54F334
 * Demangled: sub_54F334
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001FA120  .strcmp
 *   0x0000000000203770  std::terminate(void)
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE10  sub_53BE10
 *   0x0000000000570710  sub_570710
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x000000000054F334 string=0x000000000054F338 "_"
 *   insn=0x000000000054F34C string=0x000000000054F350 "u"
 *   insn=0x000000000054F358 string=0x000000000054F35C "b\n"
 *   insn=0x000000000054F35C string=0x000000000054F360 "`"
 *   insn=0x000000000054F364 string=0x000000000054F368 "a"
 *   insn=0x000000000054F364 string=0x000000000053BE10 "@"
 *   insn=0x000000000054F368 string=0x000000000054F36C "`\n"
 *   insn=0x000000000054F36C string=0x000000000054F370 "!@"
 *   insn=0x000000000054F370 string=0x000000000054F374 "a"
 *   insn=0x000000000054F374 string=0x000000000054F378 "a"
 *   insn=0x000000000054F378 string=0x000000000059D1C8 "C"
 *   insn=0x000000000054F37C string=0x000000000054F380 "! "
 *   insn=0x000000000054F380 string=0x000000000054F384 "g"
 *   insn=0x000000000054F384 string=0x00000000001FA120 "0'"
 *   insn=0x000000000054F388 string=0x000000000054F38C "a"
 *   insn=0x000000000054F38C string=0x000000000059D1D0 "POSIX"
 *   insn=0x000000000054F390 string=0x000000000054F394 "!@"
 *   insn=0x000000000054F394 string=0x000000000054F398 "b"
 *   insn=0x000000000054F39C string=0x000000000054F3B0 "vB"
 *   insn=0x000000000054F3E4 string=0x000000000054F3E8 "u"
 *   insn=0x000000000054F3F8 string=0x000000000054F3FC "2"
 *   insn=0x000000000054F40C string=0x000000000054F410 "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54F334(__int64 a1, char *a2, __int64 a3)
{
  __int64 result; // x0

  *(_DWORD *)(a1 + 8) = a3 != 0;
  *(_QWORD *)a1 = off_6DB210;
  *(_QWORD *)(a1 + 16) = sub_53BE10();
  *(_QWORD *)a1 = &off_6DB310;
  result = strcmp(a2, "C");
  if ( (_DWORD)result )
  {
    result = strcmp(a2, "POSIX");
    if ( (_DWORD)result )
    {
      sub_570744(a1 + 16);
      return sub_570710((int)a1 + 16, a2);
    }
  }
  return result;
}

