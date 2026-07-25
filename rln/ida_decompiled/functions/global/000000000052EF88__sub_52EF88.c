/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052EF88
 * Mangled: sub_52EF88
 * Demangled: sub_52EF88
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 11
 *   insn=0x000000000052EF94 string=0x000000000052EF98 "`"
 *   insn=0x000000000052EF98 string=0x000000000052EFA0 "L5"
 *   insn=0x000000000052EFA0 string=0x000000000052EFA4 "a"
 *   insn=0x000000000052EFA4 string=0x000000000052EFA8 ""@"
 *   insn=0x000000000052EFA8 string=0x000000000052EFAC "!"
 *   insn=0x000000000052EFB4 string=0x000000000052EFB8 " x`"
 *   insn=0x000000000052EFB8 string=0x000000000052EFBC "`"
 *   insn=0x000000000052EFC0 string=0x000000000052EFC4 "b"
 *   insn=0x000000000052EFCC string=0x000000000052EFD0 "!"
 *   insn=0x000000000052EFD8 string=0x000000000052EFEC "\t&"
 *   insn=0x000000000052EFEC string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52EF88(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDB0);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_put<char,std::ostreambuf_iterator<char>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

