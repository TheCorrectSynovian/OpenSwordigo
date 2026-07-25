/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F5D0
 * Mangled: sub_52F5D0
 * Demangled: sub_52F5D0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 9
 *   insn=0x000000000052F5DC string=0x000000000052F5E0 "`"
 *   insn=0x000000000052F5E8 string=0x000000000052F5EC "a"
 *   insn=0x000000000052F5F0 string=0x000000000052F5F4 "#@"
 *   insn=0x000000000052F5F4 string=0x000000000052F5F8 "!"
 *   insn=0x000000000052F5FC string=0x000000000052F600 "b"
 *   insn=0x000000000052F600 string=0x000000000052F604 " x`"
 *   insn=0x000000000052F604 string=0x000000000052F608 " "
 *   insn=0x000000000052F60C string=0x000000000052F610 "B"
 *   insn=0x000000000052F618 string=0x000000000052F61C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F5D0(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBDA0);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::messages<char>,
               0) != 0;
  }
  return v3;
}

