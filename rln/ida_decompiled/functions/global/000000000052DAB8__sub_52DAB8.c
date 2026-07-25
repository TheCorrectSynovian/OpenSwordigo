/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052DAB8
 * Mangled: sub_52DAB8
 * Demangled: sub_52DAB8
 *
 * Callers: 2
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000056007C  sub_56007C
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 9
 *   insn=0x000000000052DAD0 string=0x000000000052DAD4 "a"
 *   insn=0x000000000052DAD4 string=0x000000000052DAD8 ""@"
 *   insn=0x000000000052DAD8 string=0x000000000052DADC "!"
 *   insn=0x000000000052DAE4 string=0x000000000052DAE8 " x`"
 *   insn=0x000000000052DAE8 string=0x000000000052DAEC "`"
 *   insn=0x000000000052DAF8 string=0x000000000052DAFC "!"
 *   insn=0x000000000052DAFC string=0x000000000052DB00 "BTB"
 *   insn=0x000000000052DB08 string=0x000000000052DB1C "=+"
 *   insn=0x000000000052DB1C string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52DAB8(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD330);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::codecvt<char,char,mbstate_t>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

