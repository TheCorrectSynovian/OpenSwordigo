/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054E8C8
 * Mangled: sub_54E8C8
 * Demangled: sub_54E8C8
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001FA120  .strcmp
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053F19C  sub_53F19C
 *   0x000000000053F400  sub_53F400
 *   0x0000000000570710  sub_570710
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x000000000054E8C8 string=0x000000000054E8CC "_"
 *   insn=0x000000000054E8CC string=0x000000000054E8D0 "b"
 *   insn=0x000000000054E8E4 string=0x000000000054E8E8 "B"
 *   insn=0x000000000054E8FC string=0x000000000054E900 "'"
 *   insn=0x000000000054E900 string=0x000000000054E904 "A"
 *   insn=0x000000000054E908 string=0x000000000054E90C "!@""
 *   insn=0x000000000054E90C string=0x000000000054E910 "a"
 *   insn=0x000000000054E910 string=0x000000000054E914 "a"
 *   insn=0x000000000054E914 string=0x000000000059D1C8 "C"
 *   insn=0x000000000054E91C string=0x00000000001FA120 "0'"
 *   insn=0x000000000054E920 string=0x000000000054E924 "a"
 *   insn=0x000000000054E924 string=0x000000000059D1D0 "POSIX"
 *   insn=0x000000000054E928 string=0x000000000054E92C "!@"
 *   insn=0x000000000054E954 string=0x000000000054E958 "n"
 *   insn=0x000000000054E968 string=0x000000000054E96C "v"
 *   insn=0x000000000054E9A4 string=0x000000000054E9A8 "?"
 *   insn=0x000000000054E9B0 string=0x000000000054E9B4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54E8C8(__int64 a1, char *a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v6; // [xsp+38h] [xbp+38h] BYREF

  *(_DWORD *)(a1 + 8) = a3 != 0;
  *(_QWORD *)a1 = &off_6DB0E0;
  *(_QWORD *)(a1 + 16) = 0;
  sub_53F19C(a1);
  *(_QWORD *)a1 = off_6B7890;
  result = strcmp(a2, "C");
  if ( (_DWORD)result )
  {
    result = strcmp(a2, "POSIX");
    if ( (_DWORD)result )
    {
      sub_570710((int)&v6, a2);
      sub_53F19C(a1);
      return sub_570744(&v6);
    }
  }
  return result;
}

