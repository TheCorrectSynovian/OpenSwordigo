/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551928
 * Mangled: sub_551928
 * Demangled: sub_551928
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x0000000000551934 string=0x0000000000551938 "`"
 *   insn=0x0000000000551940 string=0x0000000000551944 "a"
 *   insn=0x0000000000551948 string=0x000000000055194C "#@"
 *   insn=0x000000000055194C string=0x0000000000551950 "!"
 *   insn=0x0000000000551954 string=0x0000000000551958 "b"
 *   insn=0x0000000000551958 string=0x000000000055195C " x`"
 *   insn=0x000000000055195C string=0x0000000000551960 " "
 *   insn=0x0000000000551964 string=0x0000000000551968 "B"
 *   insn=0x0000000000551970 string=0x0000000000551974 "!"
 *   insn=0x0000000000551974 string=0x0000000000551978 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551928(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD2B0);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
               0) != 0;
  }
  return v3;
}

