/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052DB20
 * Mangled: sub_52DB20
 * Demangled: sub_52DB20
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
 *   insn=0x000000000052DB2C string=0x000000000052DB30 "`"
 *   insn=0x000000000052DB30 string=0x000000000052DB38 "f:"
 *   insn=0x000000000052DB38 string=0x000000000052DB3C "a"
 *   insn=0x000000000052DB3C string=0x000000000052DB40 ""@"
 *   insn=0x000000000052DB40 string=0x000000000052DB44 "!"
 *   insn=0x000000000052DB4C string=0x000000000052DB50 " x`"
 *   insn=0x000000000052DB50 string=0x000000000052DB54 "`"
 *   insn=0x000000000052DB58 string=0x000000000052DB5C "b"
 *   insn=0x000000000052DB64 string=0x000000000052DB68 "!"
 *   insn=0x000000000052DB70 string=0x000000000052DB84 "#+"
 *   insn=0x000000000052DB84 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52DB20(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBD98);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::collate<char>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

