/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054FDC8
 * Mangled: sub_54FDC8
 * Demangled: sub_54FDC8
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
 *   insn=0x000000000054FDD4 string=0x000000000054FDD8 "`"
 *   insn=0x000000000054FDE0 string=0x000000000054FDE4 "a"
 *   insn=0x000000000054FDE4 string=0x000000000054FDE8 ""@"
 *   insn=0x000000000054FDE8 string=0x000000000054FDEC "!"
 *   insn=0x000000000054FDF4 string=0x000000000054FDF8 " x`"
 *   insn=0x000000000054FDF4 string=0x000000000054FE28 "(U"
 *   insn=0x000000000054FDF8 string=0x000000000054FDFC "`"
 *   insn=0x000000000054FE00 string=0x000000000054FE04 "B"
 *   insn=0x000000000054FE0C string=0x000000000054FE10 "!"
 *   insn=0x000000000054FE18 string=0x000000000054FE2C "y"
 *   insn=0x000000000054FE2C string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_54FDC8(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD270);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::collate<wchar_t>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

