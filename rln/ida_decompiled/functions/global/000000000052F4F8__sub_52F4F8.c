/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F4F8
 * Mangled: sub_52F4F8
 * Demangled: sub_52F4F8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x000000000052F504 string=0x000000000052F508 "`"
 *   insn=0x000000000052F510 string=0x000000000052F514 "a"
 *   insn=0x000000000052F518 string=0x000000000052F51C "#@"
 *   insn=0x000000000052F51C string=0x000000000052F520 "!"
 *   insn=0x000000000052F524 string=0x000000000052F528 "b"
 *   insn=0x000000000052F528 string=0x000000000052F52C " x`"
 *   insn=0x000000000052F52C string=0x000000000052F530 " "
 *   insn=0x000000000052F534 string=0x000000000052F538 "B"
 *   insn=0x000000000052F540 string=0x000000000052F544 "!"
 *   insn=0x000000000052F544 string=0x000000000052F548 "R@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F4F8(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBDB0);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::time_put<char,std::ostreambuf_iterator<char>>,
               0) != 0;
  }
  return v3;
}

