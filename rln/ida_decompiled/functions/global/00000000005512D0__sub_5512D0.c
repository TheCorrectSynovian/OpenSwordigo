/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005512D0
 * Mangled: sub_5512D0
 * Demangled: sub_5512D0
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
 *   insn=0x00000000005512DC string=0x00000000005512E0 "`"
 *   insn=0x00000000005512E0 string=0x00000000005512E8 "z"
 *   insn=0x00000000005512E8 string=0x00000000005512EC "a"
 *   insn=0x00000000005512EC string=0x00000000005512F0 ""@"
 *   insn=0x00000000005512F0 string=0x00000000005512F4 "!"
 *   insn=0x00000000005512FC string=0x0000000000551300 " x`"
 *   insn=0x0000000000551300 string=0x0000000000551304 "`"
 *   insn=0x0000000000551308 string=0x000000000055130C "B"
 *   insn=0x0000000000551314 string=0x0000000000551318 "!"
 *   insn=0x0000000000551320 string=0x0000000000551334 "7"
 *   insn=0x0000000000551334 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_5512D0(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD2B0);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

