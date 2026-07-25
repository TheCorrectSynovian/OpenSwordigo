/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052E7EC
 * Mangled: sub_52E7EC
 * Demangled: sub_52E7EC
 *
 * Callers: 1
 *   0x000000000052E854  sub_52E854
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x000000000052E7F8 string=0x000000000052E7FC "`"
 *   insn=0x000000000052E7FC string=0x000000000052E804 "37"
 *   insn=0x000000000052E804 string=0x000000000052E808 "a"
 *   insn=0x000000000052E808 string=0x000000000052E80C ""@"
 *   insn=0x000000000052E80C string=0x000000000052E810 "!"
 *   insn=0x000000000052E818 string=0x000000000052E81C " x`"
 *   insn=0x000000000052E81C string=0x000000000052E820 "`"
 *   insn=0x000000000052E824 string=0x000000000052E828 "B"
 *   insn=0x000000000052E830 string=0x000000000052E834 "!"
 *   insn=0x000000000052E850 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52E7EC(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDF0);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::moneypunct<char,false>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

