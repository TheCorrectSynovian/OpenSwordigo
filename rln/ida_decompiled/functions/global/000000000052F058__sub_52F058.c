/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F058
 * Mangled: sub_52F058
 * Demangled: sub_52F058
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x000000000052F064 string=0x000000000052F068 "`"
 *   insn=0x000000000052F070 string=0x000000000052F074 "a"
 *   insn=0x000000000052F074 string=0x000000000052F078 ""@"
 *   insn=0x000000000052F078 string=0x000000000052F07C "!"
 *   insn=0x000000000052F084 string=0x000000000052F088 " x`"
 *   insn=0x000000000052F088 string=0x000000000052F08C "`"
 *   insn=0x000000000052F090 string=0x000000000052F094 "B"
 *   insn=0x000000000052F09C string=0x000000000052F0A0 "!"
 *   insn=0x000000000052F0A0 string=0x000000000052F0A4 "{A"
 *   insn=0x000000000052F0BC string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52F058(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDA0);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::messages<char>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

