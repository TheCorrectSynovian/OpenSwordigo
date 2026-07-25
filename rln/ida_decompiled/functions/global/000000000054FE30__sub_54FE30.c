/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054FE30
 * Mangled: sub_54FE30
 * Demangled: sub_54FE30
 *
 * Callers: 1
 *   0x000000000054FE98  sub_54FE98
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x000000000054FE3C string=0x000000000054FE40 "`"
 *   insn=0x000000000054FE48 string=0x000000000054FE4C "a"
 *   insn=0x000000000054FE4C string=0x000000000054FE50 ""@"
 *   insn=0x000000000054FE50 string=0x000000000054FE54 "!"
 *   insn=0x000000000054FE5C string=0x000000000054FE60 " x`"
 *   insn=0x000000000054FE60 string=0x000000000054FE64 "`"
 *   insn=0x000000000054FE68 string=0x000000000054FE6C "B"
 *   insn=0x000000000054FE74 string=0x000000000054FE78 "!"
 *   insn=0x000000000054FE80 string=0x000000000054FE94 "_"
 *   insn=0x000000000054FE94 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_54FE30(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD2A8);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::numpunct<wchar_t>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

