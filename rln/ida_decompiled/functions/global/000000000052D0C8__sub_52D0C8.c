/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052D0C8
 * Mangled: sub_52D0C8
 * Demangled: sub_52D0C8
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
 *   0x00000000005707C4  sub_5707C4
 *   0x0000000000570964  sub_570964
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x000000000052D0E0 string=0x000000000052D0E4 " "
 *   insn=0x000000000052D0E4 string=0x000000000052D0E8 "a"
 *   insn=0x000000000052D0EC string=0x000000000052D0F0 "!"
 *   insn=0x000000000052D0F8 string=0x000000000052D100 "4"
 *   insn=0x000000000052D0F8 string=0x000000000059D1C8 "C"
 *   insn=0x000000000052D100 string=0x00000000001FA120 "0'"
 *   insn=0x000000000052D108 string=0x000000000059D1D0 "POSIX"
 *   insn=0x000000000052D10C string=0x000000000052D110 "!@"
 *   insn=0x000000000052D140 string=0x000000000052D144 "s"
 *   insn=0x000000000052D16C string=0x000000000052D170 "?"
 *   insn=0x000000000052D180 string=0x000000000052D184 "`\n"
 *   insn=0x000000000052D184 string=0x000000000052D188 "@"
 *   insn=0x000000000052D188 string=0x000000000052D190 "`"
 *   insn=0x000000000052D194 string=0x000000000052D198 "`\n"
 *   insn=0x000000000052D194 string=0x000000000053BE10 "@"
 *   insn=0x000000000052D1BC string=0x000000000052D1C0 "_"
 *   insn=0x000000000052D1D4 string=0x000000000052D1D8 "a"
 *   insn=0x000000000052D1D8 string=0x000000000052D1DC "`\n"
 *   insn=0x000000000052D1DC string=0x000000000052D1E0 "@"
 *   insn=0x000000000052D1E0 string=0x000000000052D1E8 "`"
 *   insn=0x000000000052D1EC string=0x000000000052D1F0 "W"
 *   insn=0x000000000052D1F0 string=0x000000000052D1F4 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52D0C8(_QWORD *a1, char *a2, __int64 a3)
{
  __int64 result; // x0

  sub_570964(a1, a3);
  *a1 = off_6DA300;
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

