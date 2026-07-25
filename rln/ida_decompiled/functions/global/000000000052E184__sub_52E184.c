/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052E184
 * Mangled: sub_52E184
 * Demangled: sub_52E184
 *
 * Callers: 4
 *   0x0000000000520D44  sub_520D44
 *   0x00000000005210E8  sub_5210E8
 *   0x00000000005211BC  sub_5211BC
 *   0x000000000052DBF0  sub_52DBF0
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 11
 *   insn=0x000000000052E190 string=0x000000000052E194 "`"
 *   insn=0x000000000052E19C string=0x000000000052E1A0 "a"
 *   insn=0x000000000052E1A0 string=0x000000000052E1A4 ""@"
 *   insn=0x000000000052E1A4 string=0x000000000052E1A8 "!"
 *   insn=0x000000000052E1B0 string=0x000000000052E1B4 " x`"
 *   insn=0x000000000052E1B0 string=0x000000000052E1E4 "9"
 *   insn=0x000000000052E1B4 string=0x000000000052E1B8 "`"
 *   insn=0x000000000052E1BC string=0x000000000052E1C0 "B"
 *   insn=0x000000000052E1C8 string=0x000000000052E1CC "!"
 *   insn=0x000000000052E1CC string=0x000000000052E1D0 "0E"
 *   insn=0x000000000052E1E8 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52E184(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDC0);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_put<char,std::ostreambuf_iterator<char>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

