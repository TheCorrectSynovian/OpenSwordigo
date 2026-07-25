/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052010C
 * Mangled: sub_52010C
 * Demangled: sub_52010C
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001FA120  .strcmp
 *   0x000000000051FA44  sub_51FA44
 *   0x0000000000520AAC  sub_520AAC
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE10  sub_53BE10
 *   0x0000000000570710  sub_570710
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x000000000052010C string=0x0000000000520110 "_"
 *   insn=0x0000000000520128 string=0x000000000052012C "`\n"
 *   insn=0x0000000000520130 string=0x0000000000520138 "`"
 *   insn=0x0000000000520138 string=0x000000000052013C "5o"
 *   insn=0x000000000052013C string=0x0000000000520140 "`\n"
 *   insn=0x000000000052013C string=0x000000000053BE10 "@"
 *   insn=0x0000000000520148 string=0x000000000052014C "X"
 *   insn=0x0000000000520154 string=0x0000000000520158 "!"
 *   insn=0x0000000000520158 string=0x000000000052015C "a"
 *   insn=0x0000000000520160 string=0x000000000059D1C8 "C"
 *   insn=0x0000000000520168 string=0x00000000001FA120 "0'"
 *   insn=0x0000000000520170 string=0x000000000059D1D0 "POSIX"
 *   insn=0x0000000000520174 string=0x0000000000520178 "!@"
 *   insn=0x0000000000520180 string=0x0000000000520194 "uB"
 *   insn=0x0000000000520198 string=0x000000000052019C "jA"
 *   insn=0x00000000005201A8 string=0x00000000005201AC "YA"
 *   insn=0x00000000005201BC string=0x00000000005201C0 ";"
 *   insn=0x00000000005201D4 string=0x00000000005201D8 "!"
 *   insn=0x00000000005201E0 string=0x00000000005201E4 "!`C"
 *   insn=0x00000000005201E4 string=0x00000000005201E8 "!@"
 *   insn=0x00000000005201E8 string=0x00000000005201EC "a"
 *   insn=0x00000000005201EC string=0x00000000005201F0 "sm"
 *   insn=0x00000000005201F8 string=0x00000000005201FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52010C(__int64 a1, char *a2, __int64 a3)
{
  __int64 result; // x0

  *(_DWORD *)(a1 + 8) = a3 != 0;
  *(_QWORD *)a1 = off_6D9BB0;
  *(_QWORD *)(a1 + 16) = sub_53BE10();
  *(_BYTE *)(a1 + 24) = 0;
  sub_520AAC(a1);
  *(_QWORD *)a1 = &off_6D9C30;
  result = strcmp(a2, "C");
  if ( (_DWORD)result )
  {
    result = strcmp(a2, "POSIX");
    if ( (_DWORD)result )
    {
      sub_570744(a1 + 16);
      sub_570710(a1 + 16, a2);
      return sub_520AAC(a1);
    }
  }
  return result;
}

