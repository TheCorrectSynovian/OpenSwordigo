/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052DB88
 * Mangled: sub_52DB88
 * Demangled: sub_52DB88
 *
 * Callers: 2
 *   0x00000000002616A4  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x000000000052DBF0  sub_52DBF0
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 11
 *   insn=0x000000000052DB94 string=0x000000000052DB98 "`"
 *   insn=0x000000000052DB98 string=0x000000000052DBA0 "L:"
 *   insn=0x000000000052DBA0 string=0x000000000052DBA4 "a"
 *   insn=0x000000000052DBA4 string=0x000000000052DBA8 ""@"
 *   insn=0x000000000052DBA8 string=0x000000000052DBAC "!"
 *   insn=0x000000000052DBB4 string=0x000000000052DBB8 " x`"
 *   insn=0x000000000052DBB8 string=0x000000000052DBBC "`"
 *   insn=0x000000000052DBC0 string=0x000000000052DBC4 "b"
 *   insn=0x000000000052DBCC string=0x000000000052DBD0 "!"
 *   insn=0x000000000052DBD8 string=0x000000000052DBEC "\t+"
 *   insn=0x000000000052DBEC string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52DB88(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDD0);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::numpunct<char>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

