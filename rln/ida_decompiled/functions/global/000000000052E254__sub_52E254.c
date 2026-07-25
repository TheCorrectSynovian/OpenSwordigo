/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052E254
 * Mangled: sub_52E254
 * Demangled: sub_52E254
 *
 * Callers: 1
 *   0x000000000052E2BC  sub_52E2BC
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x000000000052E260 string=0x000000000052E264 "`"
 *   insn=0x000000000052E26C string=0x000000000052E270 "a"
 *   insn=0x000000000052E270 string=0x000000000052E274 ""@"
 *   insn=0x000000000052E274 string=0x000000000052E278 "!"
 *   insn=0x000000000052E280 string=0x000000000052E284 " x`"
 *   insn=0x000000000052E284 string=0x000000000052E288 "`"
 *   insn=0x000000000052E28C string=0x000000000052E290 "B"
 *   insn=0x000000000052E298 string=0x000000000052E29C "!"
 *   insn=0x000000000052E2A4 string=0x000000000052E2B8 "V)"
 *   insn=0x000000000052E2B8 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52E254(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDE8);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::moneypunct<char,true>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

