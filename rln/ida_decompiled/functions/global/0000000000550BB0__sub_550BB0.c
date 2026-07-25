/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000550BB0
 * Mangled: sub_550BB0
 * Demangled: sub_550BB0
 *
 * Callers: 1
 *   0x0000000000550C18  sub_550C18
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x0000000000550BBC string=0x0000000000550BC0 "`"
 *   insn=0x0000000000550BC0 string=0x0000000000550BC8 "B"
 *   insn=0x0000000000550BC8 string=0x0000000000550BCC "a"
 *   insn=0x0000000000550BCC string=0x0000000000550BD0 ""@"
 *   insn=0x0000000000550BD0 string=0x0000000000550BD4 "!"
 *   insn=0x0000000000550BDC string=0x0000000000550BE0 " x`"
 *   insn=0x0000000000550BE0 string=0x0000000000550BE4 "`"
 *   insn=0x0000000000550BE8 string=0x0000000000550BEC "B"
 *   insn=0x0000000000550BF4 string=0x0000000000550BF8 "!"
 *   insn=0x0000000000550C14 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_550BB0(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD2C8);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::moneypunct<wchar_t,false>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

