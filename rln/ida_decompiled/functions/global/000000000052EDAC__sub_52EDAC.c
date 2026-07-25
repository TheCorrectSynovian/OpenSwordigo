/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052EDAC
 * Mangled: sub_52EDAC
 * Demangled: sub_52EDAC
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
 *   insn=0x000000000052EDB8 string=0x000000000052EDBC "`"
 *   insn=0x000000000052EDC4 string=0x000000000052EDC8 "a"
 *   insn=0x000000000052EDC8 string=0x000000000052EDCC ""@"
 *   insn=0x000000000052EDCC string=0x000000000052EDD0 "!"
 *   insn=0x000000000052EDD8 string=0x000000000052EDDC " x`"
 *   insn=0x000000000052EDD8 string=0x000000000052EE0C "/"
 *   insn=0x000000000052EDDC string=0x000000000052EDE0 "`"
 *   insn=0x000000000052EDE4 string=0x000000000052EDE8 "B"
 *   insn=0x000000000052EDF0 string=0x000000000052EDF4 "!"
 *   insn=0x000000000052EDF4 string=0x000000000052EDF8 "&B"
 *   insn=0x000000000052EE10 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52EDAC(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDE0);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_get<char,std::istreambuf_iterator<char>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

