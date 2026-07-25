/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F204
 * Mangled: sub_52F204
 * Demangled: sub_52F204
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 9
 *   insn=0x000000000052F210 string=0x000000000052F214 "`"
 *   insn=0x000000000052F21C string=0x000000000052F220 "a"
 *   insn=0x000000000052F224 string=0x000000000052F228 "#@"
 *   insn=0x000000000052F228 string=0x000000000052F22C "!"
 *   insn=0x000000000052F230 string=0x000000000052F234 "b"
 *   insn=0x000000000052F234 string=0x000000000052F238 " x`"
 *   insn=0x000000000052F238 string=0x000000000052F23C " "
 *   insn=0x000000000052F240 string=0x000000000052F244 "B"
 *   insn=0x000000000052F24C string=0x000000000052F250 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F204(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBDD0);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::numpunct<char>,
               0) != 0;
  }
  return v3;
}

