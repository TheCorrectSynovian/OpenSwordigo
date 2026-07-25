/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551564
 * Mangled: sub_551564
 * Demangled: sub_551564
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
 *   insn=0x0000000000551570 string=0x0000000000551574 "`"
 *   insn=0x000000000055157C string=0x0000000000551580 "a"
 *   insn=0x0000000000551580 string=0x0000000000551584 ""@"
 *   insn=0x0000000000551584 string=0x0000000000551588 "!"
 *   insn=0x0000000000551590 string=0x0000000000551594 " x`"
 *   insn=0x0000000000551590 string=0x00000000005515C4 "AO"
 *   insn=0x0000000000551594 string=0x0000000000551598 "`"
 *   insn=0x000000000055159C string=0x00000000005515A0 "B"
 *   insn=0x00000000005515A8 string=0x00000000005515AC "!"
 *   insn=0x00000000005515AC string=0x00000000005515B0 "8"
 *   insn=0x00000000005515C8 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_551564(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD280);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

