/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052EE14
 * Mangled: sub_52EE14
 * Demangled: sub_52EE14
 *
 * Callers: 6
 *   0x000000000052EE7C  sub_52EE7C
 *   0x0000000000533030  sub_533030
 *   0x0000000000533278  sub_533278
 *   0x0000000000533538  sub_533538
 *   0x0000000000534518  sub_534518
 *   0x0000000000534684  sub_534684
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x000000000052EE20 string=0x000000000052EE24 "`"
 *   insn=0x000000000052EE2C string=0x000000000052EE30 "a"
 *   insn=0x000000000052EE30 string=0x000000000052EE34 ""@"
 *   insn=0x000000000052EE34 string=0x000000000052EE38 "!"
 *   insn=0x000000000052EE40 string=0x000000000052EE44 " x`"
 *   insn=0x000000000052EE44 string=0x000000000052EE48 "`"
 *   insn=0x000000000052EE4C string=0x000000000052EE50 "B"
 *   insn=0x000000000052EE58 string=0x000000000052EE5C "!"
 *   insn=0x000000000052EE64 string=0x000000000052EE78 "f&"
 *   insn=0x000000000052EE78 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52EE14(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDB8);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::__timepunct<char>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

