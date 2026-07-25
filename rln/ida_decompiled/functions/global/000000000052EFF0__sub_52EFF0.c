/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052EFF0
 * Mangled: sub_52EFF0
 * Demangled: sub_52EFF0
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x000000000052EFFC string=0x000000000052F000 "`"
 *   insn=0x000000000052F000 string=0x000000000052F008 "25"
 *   insn=0x000000000052F008 string=0x000000000052F00C "a"
 *   insn=0x000000000052F00C string=0x000000000052F010 ""@"
 *   insn=0x000000000052F010 string=0x000000000052F014 "!"
 *   insn=0x000000000052F01C string=0x000000000052F020 " x`"
 *   insn=0x000000000052F020 string=0x000000000052F024 "`"
 *   insn=0x000000000052F028 string=0x000000000052F02C "B"
 *   insn=0x000000000052F034 string=0x000000000052F038 "!"
 *   insn=0x000000000052F054 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52EFF0(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDA8);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_get<char,std::istreambuf_iterator<char>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

