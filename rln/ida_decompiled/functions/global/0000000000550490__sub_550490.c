/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000550490
 * Mangled: sub_550490
 * Demangled: sub_550490
 *
 * Callers: 1
 *   0x00000000005504F8  sub_5504F8
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 12
 *   insn=0x000000000055049C string=0x00000000005504A0 "`"
 *   insn=0x00000000005504A0 string=0x00000000005504A8 "\n"
 *   insn=0x00000000005504A8 string=0x00000000005504AC "a"
 *   insn=0x00000000005504AC string=0x00000000005504B0 ""@"
 *   insn=0x00000000005504B0 string=0x00000000005504B4 "!"
 *   insn=0x00000000005504BC string=0x00000000005504C0 " x`"
 *   insn=0x00000000005504BC string=0x00000000005504F0 "vS"
 *   insn=0x00000000005504C0 string=0x00000000005504C4 "`"
 *   insn=0x00000000005504C8 string=0x00000000005504CC "B"
 *   insn=0x00000000005504D4 string=0x00000000005504D8 "!"
 *   insn=0x00000000005504D8 string=0x00000000005504DC "m"
 *   insn=0x00000000005504F4 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_550490(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD2C0);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::moneypunct<wchar_t,true>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

