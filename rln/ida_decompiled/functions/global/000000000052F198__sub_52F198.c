/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F198
 * Mangled: sub_52F198
 * Demangled: sub_52F198
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x000000000052F1A4 string=0x000000000052F1A8 "`"
 *   insn=0x000000000052F1B0 string=0x000000000052F1B4 "a"
 *   insn=0x000000000052F1B8 string=0x000000000052F1BC "#@"
 *   insn=0x000000000052F1BC string=0x000000000052F1C0 "!"
 *   insn=0x000000000052F1C4 string=0x000000000052F1C8 "b"
 *   insn=0x000000000052F1C8 string=0x000000000052F1CC " x`"
 *   insn=0x000000000052F1CC string=0x000000000052F1D0 " "
 *   insn=0x000000000052F1D4 string=0x000000000052F1D8 "B"
 *   insn=0x000000000052F1E0 string=0x000000000052F1E4 "!"
 *   insn=0x000000000052F1E4 string=0x000000000052F1E8 "*A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F198(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBD98);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::collate<char>,
               0) != 0;
  }
  return v3;
}

