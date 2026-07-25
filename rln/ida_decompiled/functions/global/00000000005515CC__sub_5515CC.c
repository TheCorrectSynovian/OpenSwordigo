/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005515CC
 * Mangled: sub_5515CC
 * Demangled: sub_5515CC
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
 *   insn=0x00000000005515D8 string=0x00000000005515DC "`"
 *   insn=0x00000000005515E4 string=0x00000000005515E8 "a"
 *   insn=0x00000000005515E8 string=0x00000000005515EC ""@"
 *   insn=0x00000000005515EC string=0x00000000005515F0 "!"
 *   insn=0x00000000005515F8 string=0x00000000005515FC " x`"
 *   insn=0x00000000005515F8 string=0x000000000055162C "'O"
 *   insn=0x00000000005515FC string=0x0000000000551600 "`"
 *   insn=0x0000000000551604 string=0x0000000000551608 "B"
 *   insn=0x0000000000551610 string=0x0000000000551614 "!"
 *   insn=0x000000000055161C string=0x0000000000551630 "x"
 *   insn=0x0000000000551630 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_5515CC(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD278);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::messages<wchar_t>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

