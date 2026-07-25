/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551B44
 * Mangled: sub_551B44
 * Demangled: sub_551B44
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x0000000000551B50 string=0x0000000000551B54 "`"
 *   insn=0x0000000000551B54 string=0x0000000000551B5C "]"
 *   insn=0x0000000000551B5C string=0x0000000000551B60 "a"
 *   insn=0x0000000000551B64 string=0x0000000000551B68 "#@"
 *   insn=0x0000000000551B68 string=0x0000000000551B6C "!"
 *   insn=0x0000000000551B70 string=0x0000000000551B74 "b"
 *   insn=0x0000000000551B74 string=0x0000000000551B78 " x`"
 *   insn=0x0000000000551B78 string=0x0000000000551B7C " "
 *   insn=0x0000000000551B80 string=0x0000000000551B84 "B"
 *   insn=0x0000000000551B8C string=0x0000000000551B90 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551B44(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD278);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::messages<wchar_t>,
               0) != 0;
  }
  return v3;
}

