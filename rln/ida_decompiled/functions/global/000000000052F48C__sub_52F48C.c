/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F48C
 * Mangled: sub_52F48C
 * Demangled: sub_52F48C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 11
 *   insn=0x000000000052F498 string=0x000000000052F49C "`"
 *   insn=0x000000000052F49C string=0x000000000052F4A4 "4"
 *   insn=0x000000000052F4A4 string=0x000000000052F4A8 "a"
 *   insn=0x000000000052F4AC string=0x000000000052F4B0 "#@"
 *   insn=0x000000000052F4B0 string=0x000000000052F4B4 "!"
 *   insn=0x000000000052F4B8 string=0x000000000052F4BC "b"
 *   insn=0x000000000052F4BC string=0x000000000052F4C0 " x`"
 *   insn=0x000000000052F4C0 string=0x000000000052F4C4 " "
 *   insn=0x000000000052F4C8 string=0x000000000052F4CC "B"
 *   insn=0x000000000052F4D4 string=0x000000000052F4D8 "!"
 *   insn=0x000000000052F4D8 string=0x000000000052F4DC "m@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F48C(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBDB8);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::__timepunct<char>,
               0) != 0;
  }
  return v3;
}

