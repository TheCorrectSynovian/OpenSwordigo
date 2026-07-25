/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054F5C0
 * Mangled: sub_54F5C0
 * Demangled: sub_54F5C0
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
 * Referenced strings: 26
 *   insn=0x000000000054F5C0 string=0x000000000054F5C4 "_"
 *   insn=0x000000000054F5D8 string=0x000000000054F5DC "U"
 *   insn=0x000000000054F5E4 string=0x000000000054F5E8 "b\n"
 *   insn=0x000000000054F5E8 string=0x000000000054F5EC "`"
 *   insn=0x000000000054F5EC string=0x000000000054F5F0 ""
 *   insn=0x000000000054F5F0 string=0x000000000054F5F4 "A"
 *   insn=0x000000000054F5F0 string=0x000000000053BE10 "@"
 *   insn=0x000000000054F5F4 string=0x000000000054F5F8 "`\n"
 *   insn=0x000000000054F5F8 string=0x000000000054F5FC "!@!"
 *   insn=0x000000000054F5FC string=0x000000000054F600 "a"
 *   insn=0x000000000054F600 string=0x000000000054F604 "a"
 *   insn=0x000000000054F604 string=0x000000000059D1C8 "C"
 *   insn=0x000000000054F608 string=0x000000000054F60C "! "
 *   insn=0x000000000054F610 string=0x00000000001FA120 "0'"
 *   insn=0x000000000054F614 string=0x000000000054F618 "a"
 *   insn=0x000000000054F618 string=0x000000000059D1D0 "POSIX"
 *   insn=0x000000000054F61C string=0x000000000054F620 "!@"
 *   insn=0x000000000054F628 string=0x000000000054F63C "vB"
 *   insn=0x000000000054F640 string=0x000000000054F644 "@"
 *   insn=0x000000000054F650 string=0x000000000054F654 "/"
 *   insn=0x000000000054F670 string=0x000000000054F674 "u"
 *   insn=0x000000000054F674 string=0x000000000054F678 "3"
 *   insn=0x000000000054F67C string=0x000000000054F680 "O"
 *   insn=0x000000000054F690 string=0x000000000054F694 "J"
 *   insn=0x000000000054F6A0 string=0x000000000054F6A4 "F"
 *   insn=0x000000000054F6A4 string=0x000000000054F6A8 "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54F5C0(__int64 a1, char *a2, __int64 a3)
{
  __int64 result; // x0

  *(_DWORD *)(a1 + 8) = a3 != 0;
  *(_QWORD *)a1 = off_6B7810;
  *(_QWORD *)(a1 + 16) = sub_53BE10();
  *(_QWORD *)a1 = &off_6B7850;
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

