/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052ED44
 * Mangled: sub_52ED44
 * Demangled: sub_52ED44
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
 *   insn=0x000000000052ED50 string=0x000000000052ED54 "`"
 *   insn=0x000000000052ED5C string=0x000000000052ED60 "a"
 *   insn=0x000000000052ED60 string=0x000000000052ED64 ""@"
 *   insn=0x000000000052ED64 string=0x000000000052ED68 "!"
 *   insn=0x000000000052ED70 string=0x000000000052ED74 " x`"
 *   insn=0x000000000052ED70 string=0x000000000052EDA4 "I"
 *   insn=0x000000000052ED74 string=0x000000000052ED78 "`"
 *   insn=0x000000000052ED7C string=0x000000000052ED80 "B"
 *   insn=0x000000000052ED88 string=0x000000000052ED8C "!"
 *   insn=0x000000000052ED8C string=0x000000000052ED90 "@B"
 *   insn=0x000000000052EDA8 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52ED44(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDD8);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_put<char,std::ostreambuf_iterator<char>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

