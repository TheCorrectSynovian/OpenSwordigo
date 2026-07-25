/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F348
 * Mangled: sub_52F348
 * Demangled: sub_52F348
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x000000000052F354 string=0x000000000052F358 "`"
 *   insn=0x000000000052F358 string=0x000000000052F360 "\4"
 *   insn=0x000000000052F360 string=0x000000000052F364 "a"
 *   insn=0x000000000052F368 string=0x000000000052F36C "#@"
 *   insn=0x000000000052F36C string=0x000000000052F370 "!"
 *   insn=0x000000000052F374 string=0x000000000052F378 "b"
 *   insn=0x000000000052F378 string=0x000000000052F37C " x`"
 *   insn=0x000000000052F37C string=0x000000000052F380 " "
 *   insn=0x000000000052F384 string=0x000000000052F388 "B"
 *   insn=0x000000000052F390 string=0x000000000052F394 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F348(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBDF0);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::moneypunct<char,false>,
               0) != 0;
  }
  return v3;
}

