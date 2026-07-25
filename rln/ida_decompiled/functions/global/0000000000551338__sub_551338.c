/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551338
 * Mangled: sub_551338
 * Demangled: sub_551338
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
 *   insn=0x0000000000551344 string=0x0000000000551348 "`"
 *   insn=0x0000000000551348 string=0x0000000000551350 "`"
 *   insn=0x0000000000551350 string=0x0000000000551354 "a"
 *   insn=0x0000000000551354 string=0x0000000000551358 ""@"
 *   insn=0x0000000000551358 string=0x000000000055135C "!"
 *   insn=0x0000000000551364 string=0x0000000000551368 " x`"
 *   insn=0x0000000000551368 string=0x000000000055136C "`"
 *   insn=0x0000000000551370 string=0x0000000000551374 "B"
 *   insn=0x000000000055137C string=0x0000000000551380 "!"
 *   insn=0x000000000055139C string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_551338(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD2B8);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

