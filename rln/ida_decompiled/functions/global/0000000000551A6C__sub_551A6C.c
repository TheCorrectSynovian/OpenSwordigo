/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551A6C
 * Mangled: sub_551A6C
 * Demangled: sub_551A6C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 9
 *   insn=0x0000000000551A78 string=0x0000000000551A7C "`"
 *   insn=0x0000000000551A84 string=0x0000000000551A88 "a"
 *   insn=0x0000000000551A8C string=0x0000000000551A90 "#@"
 *   insn=0x0000000000551A90 string=0x0000000000551A94 "!"
 *   insn=0x0000000000551A98 string=0x0000000000551A9C "b"
 *   insn=0x0000000000551A9C string=0x0000000000551AA0 " x`"
 *   insn=0x0000000000551AA0 string=0x0000000000551AA4 " "
 *   insn=0x0000000000551AA8 string=0x0000000000551AAC "B"
 *   insn=0x0000000000551AB4 string=0x0000000000551AB8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551A6C(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD288);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
               0) != 0;
  }
  return v3;
}

