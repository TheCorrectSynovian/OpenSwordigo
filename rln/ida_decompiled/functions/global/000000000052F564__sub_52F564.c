/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F564
 * Mangled: sub_52F564
 * Demangled: sub_52F564
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x000000000052F570 string=0x000000000052F574 "`"
 *   insn=0x000000000052F57C string=0x000000000052F580 "a"
 *   insn=0x000000000052F584 string=0x000000000052F588 "#@"
 *   insn=0x000000000052F588 string=0x000000000052F58C "!"
 *   insn=0x000000000052F590 string=0x000000000052F594 "b"
 *   insn=0x000000000052F594 string=0x000000000052F598 " x`"
 *   insn=0x000000000052F598 string=0x000000000052F59C " "
 *   insn=0x000000000052F5A0 string=0x000000000052F5A4 "B"
 *   insn=0x000000000052F5AC string=0x000000000052F5B0 "!"
 *   insn=0x000000000052F5B0 string=0x000000000052F5B4 "7@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F564(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBDA8);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::time_get<char,std::istreambuf_iterator<char>>,
               0) != 0;
  }
  return v3;
}

