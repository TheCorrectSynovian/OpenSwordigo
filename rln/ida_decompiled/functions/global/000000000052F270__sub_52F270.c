/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F270
 * Mangled: sub_52F270
 * Demangled: sub_52F270
 *
 * Callers: 3
 *   0x0000000000520D44  sub_520D44
 *   0x00000000005210E8  sub_5210E8
 *   0x00000000005211BC  sub_5211BC
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 9
 *   insn=0x000000000052F27C string=0x000000000052F280 "`"
 *   insn=0x000000000052F288 string=0x000000000052F28C "a"
 *   insn=0x000000000052F290 string=0x000000000052F294 "#@"
 *   insn=0x000000000052F294 string=0x000000000052F298 "!"
 *   insn=0x000000000052F29C string=0x000000000052F2A0 "b"
 *   insn=0x000000000052F2A0 string=0x000000000052F2A4 " x`"
 *   insn=0x000000000052F2A4 string=0x000000000052F2A8 " "
 *   insn=0x000000000052F2AC string=0x000000000052F2B0 "B"
 *   insn=0x000000000052F2B8 string=0x000000000052F2BC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F270(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBDC0);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::num_put<char,std::ostreambuf_iterator<char>>,
               0) != 0;
  }
  return v3;
}

