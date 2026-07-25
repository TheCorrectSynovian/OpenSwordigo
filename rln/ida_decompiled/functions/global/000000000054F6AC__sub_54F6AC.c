/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054F6AC
 * Mangled: sub_54F6AC
 * Demangled: sub_54F6AC
 *
 * Callers: 25
 *   0x00000000005216F0  sub_5216F0
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521A9C  sub_521A9C
 *   0x0000000000527A84  sub_527A84
 *   0x000000000053E27C  sub_53E27C
 *   0x000000000054F714  sub_54F714
 *   0x000000000054F8CC  sub_54F8CC
 *   0x000000000054FBB0  sub_54FBB0
 *   0x000000000054FE98  sub_54FE98
 *   0x00000000005504F8  sub_5504F8
 *   0x0000000000550C18  sub_550C18
 *   0x0000000000551408  sub_551408
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x00000000005530A4  sub_5530A4
 *   0x00000000005532C0  sub_5532C0
 *   0x0000000000553630  sub_553630
 *   0x0000000000554B9C  sub_554B9C
 *   0x0000000000554F18  sub_554F18
 *   0x0000000000555328  sub_555328
 *   0x0000000000555570  sub_555570
 *   0x0000000000555830  sub_555830
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *   0x00000000005586A4  sub_5586A4
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 9
 *   insn=0x000000000054F6C4 string=0x000000000054F6C8 "a"
 *   insn=0x000000000054F6C8 string=0x000000000054F6CC ""@"
 *   insn=0x000000000054F6CC string=0x000000000054F6D0 "!"
 *   insn=0x000000000054F6D8 string=0x000000000054F6DC " x`"
 *   insn=0x000000000054F6DC string=0x000000000054F6E0 "`"
 *   insn=0x000000000054F6EC string=0x000000000054F6F0 "!"
 *   insn=0x000000000054F6F0 string=0x000000000054F6F4 "B"
 *   insn=0x000000000054F6FC string=0x000000000054F710 "@"
 *   insn=0x000000000054F710 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_54F6AC(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBD28);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::ctype<wchar_t>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

