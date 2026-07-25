/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CFDC
 * Mangled: sub_52CFDC
 * Demangled: sub_52CFDC
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
 * Referenced strings: 19
 *   insn=0x000000000052CFDC string=0x000000000052CFE0 "_"
 *   insn=0x000000000052CFF4 string=0x000000000052CFF8 "u"
 *   insn=0x000000000052D000 string=0x000000000052D004 "b\n"
 *   insn=0x000000000052D004 string=0x000000000052D008 "`"
 *   insn=0x000000000052D00C string=0x000000000052D010 "a"
 *   insn=0x000000000052D00C string=0x000000000053BE10 "@"
 *   insn=0x000000000052D010 string=0x000000000052D014 "`\n"
 *   insn=0x000000000052D014 string=0x000000000052D018 "!"
 *   insn=0x000000000052D018 string=0x000000000052D01C "a"
 *   insn=0x000000000052D020 string=0x000000000059D1C8 "C"
 *   insn=0x000000000052D024 string=0x000000000052D028 "! "
 *   insn=0x000000000052D028 string=0x000000000052D02C "=4"
 *   insn=0x000000000052D02C string=0x00000000001FA120 "0'"
 *   insn=0x000000000052D034 string=0x000000000059D1D0 "POSIX"
 *   insn=0x000000000052D038 string=0x000000000052D03C "!@"
 *   insn=0x000000000052D03C string=0x000000000052D040 "84"
 *   insn=0x000000000052D044 string=0x000000000052D058 "vB"
 *   insn=0x000000000052D08C string=0x000000000052D090 "u"
 *   insn=0x000000000052D0A0 string=0x000000000052D0A4 "R"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CFDC(__int64 a1, char *a2, __int64 a3)
{
  __int64 result; // x0

  *(_DWORD *)(a1 + 8) = a3 != 0;
  *(_QWORD *)a1 = off_6DA260;
  *(_QWORD *)(a1 + 16) = sub_53BE10();
  *(_QWORD *)a1 = &off_6DA360;
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

