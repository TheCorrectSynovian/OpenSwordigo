/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F2DC
 * Mangled: sub_52F2DC
 * Demangled: sub_52F2DC
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
 * Referenced strings: 10
 *   insn=0x000000000052F2E8 string=0x000000000052F2EC "`"
 *   insn=0x000000000052F2EC string=0x000000000052F2F4 "w4"
 *   insn=0x000000000052F2F4 string=0x000000000052F2F8 "a"
 *   insn=0x000000000052F2FC string=0x000000000052F300 "#@"
 *   insn=0x000000000052F300 string=0x000000000052F304 "!"
 *   insn=0x000000000052F308 string=0x000000000052F30C "b"
 *   insn=0x000000000052F30C string=0x000000000052F310 " x`"
 *   insn=0x000000000052F310 string=0x000000000052F314 " "
 *   insn=0x000000000052F318 string=0x000000000052F31C "B"
 *   insn=0x000000000052F324 string=0x000000000052F328 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F2DC(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBDC8);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::num_get<char,std::istreambuf_iterator<char>>,
               0) != 0;
  }
  return v3;
}

