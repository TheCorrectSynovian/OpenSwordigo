/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F3B4
 * Mangled: sub_52F3B4
 * Demangled: sub_52F3B4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x000000000052F3C0 string=0x000000000052F3C4 "`"
 *   insn=0x000000000052F3C4 string=0x000000000052F3CC "A4"
 *   insn=0x000000000052F3CC string=0x000000000052F3D0 "a"
 *   insn=0x000000000052F3D4 string=0x000000000052F3D8 "#@"
 *   insn=0x000000000052F3D8 string=0x000000000052F3DC "!"
 *   insn=0x000000000052F3E0 string=0x000000000052F3E4 "b"
 *   insn=0x000000000052F3E4 string=0x000000000052F3E8 " x`"
 *   insn=0x000000000052F3E8 string=0x000000000052F3EC " "
 *   insn=0x000000000052F3F0 string=0x000000000052F3F4 "B"
 *   insn=0x000000000052F3FC string=0x000000000052F400 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F3B4(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBDD8);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::money_put<char,std::ostreambuf_iterator<char>>,
               0) != 0;
  }
  return v3;
}

