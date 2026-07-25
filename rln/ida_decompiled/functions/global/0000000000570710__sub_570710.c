/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570710
 * Mangled: sub_570710
 * Demangled: sub_570710
 *
 * Callers: 14
 *   0x000000000052010C  sub_52010C
 *   0x0000000000520478  sub_520478
 *   0x000000000052C0D8  sub_52C0D8
 *   0x000000000052C570  sub_52C570
 *   0x000000000052CFDC  sub_52CFDC
 *   0x000000000052D0C8  sub_52D0C8
 *   0x000000000052D268  sub_52D268
 *   0x000000000053B7C4  sub_53B7C4
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000054E430  sub_54E430
 *   0x000000000054E8C8  sub_54E8C8
 *   0x000000000054F334  sub_54F334
 *   0x000000000054F420  sub_54F420
 *   0x000000000054F5C0  sub_54F5C0
 *
 * Callees: 2
 *   0x00000000001FA120  .strcmp
 *   0x0000000000565808  sub_565808
 *
 * Referenced strings: 8
 *   insn=0x000000000057071C string=0x0000000000570720 "a"
 *   insn=0x0000000000570720 string=0x0000000000570728 "~&"
 *   insn=0x0000000000570720 string=0x000000000059D1C8 "C"
 *   insn=0x0000000000570728 string=0x000000000057072C "`"
 *   insn=0x0000000000570728 string=0x00000000001FA120 "0'"
 *   insn=0x000000000057072C string=0x0000000000570738 "`"
 *   insn=0x0000000000570738 string=0x0000000000570740 "2"
 *   insn=0x0000000000570738 string=0x000000000059FCB0 "locale::facet::_S_create_c_locale name not valid"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_570710(_QWORD *a1, char *a2)
{
  __int64 result; // x0

  *a1 = 0;
  result = strcmp(a2, "C");
  if ( (_DWORD)result )
    sub_565808("locale::facet::_S_create_c_locale name not valid");
  return result;
}

