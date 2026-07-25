/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005514FC
 * Mangled: sub_5514FC
 * Demangled: sub_5514FC
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
 *   insn=0x0000000000551508 string=0x000000000055150C "`"
 *   insn=0x0000000000551514 string=0x0000000000551518 "a"
 *   insn=0x0000000000551518 string=0x000000000055151C ""@"
 *   insn=0x000000000055151C string=0x0000000000551520 "!"
 *   insn=0x0000000000551528 string=0x000000000055152C " x`"
 *   insn=0x0000000000551528 string=0x000000000055155C "[O"
 *   insn=0x000000000055152C string=0x0000000000551530 "`"
 *   insn=0x0000000000551534 string=0x0000000000551538 "B"
 *   insn=0x0000000000551540 string=0x0000000000551544 "!"
 *   insn=0x0000000000551544 string=0x0000000000551548 "R"
 *   insn=0x0000000000551560 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_5514FC(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD288);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

