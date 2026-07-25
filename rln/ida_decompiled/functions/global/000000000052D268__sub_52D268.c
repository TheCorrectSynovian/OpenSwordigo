/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052D268
 * Mangled: sub_52D268
 * Demangled: sub_52D268
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
 *   insn=0x000000000052D268 string=0x000000000052D26C "_"
 *   insn=0x000000000052D280 string=0x000000000052D284 "U"
 *   insn=0x000000000052D28C string=0x000000000052D290 "b\n"
 *   insn=0x000000000052D290 string=0x000000000052D294 "`"
 *   insn=0x000000000052D298 string=0x000000000052D29C "A"
 *   insn=0x000000000052D298 string=0x000000000053BE10 "@"
 *   insn=0x000000000052D29C string=0x000000000052D2A0 "`\n"
 *   insn=0x000000000052D2A0 string=0x000000000052D2A4 "!@2"
 *   insn=0x000000000052D2A4 string=0x000000000052D2A8 "a"
 *   insn=0x000000000052D2AC string=0x000000000059D1C8 "C"
 *   insn=0x000000000052D2B0 string=0x000000000052D2B4 "! "
 *   insn=0x000000000052D2B8 string=0x00000000001FA120 "0'"
 *   insn=0x000000000052D2C0 string=0x000000000059D1D0 "POSIX"
 *   insn=0x000000000052D2C4 string=0x000000000052D2C8 "!@"
 *   insn=0x000000000052D2D0 string=0x000000000052D2E4 "vB"
 *   insn=0x000000000052D318 string=0x000000000052D31C "u"
 *   insn=0x000000000052D31C string=0x000000000052D320 "\t"
 *   insn=0x000000000052D324 string=0x000000000052D328 "%9"
 *   insn=0x000000000052D32C string=0x000000000052D330 "eQ"
 *   insn=0x000000000052D338 string=0x000000000052D33C " 9"
 *   insn=0x000000000052D340 string=0x000000000052D344 "`Q"
 *   insn=0x000000000052D34C string=0x000000000052D350 "Y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52D268(__int64 a1, char *a2, __int64 a3)
{
  __int64 result; // x0

  *(_DWORD *)(a1 + 8) = a3 != 0;
  *(_QWORD *)a1 = off_6B6C50;
  *(_QWORD *)(a1 + 16) = sub_53BE10();
  *(_QWORD *)a1 = &off_6B6C90;
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

