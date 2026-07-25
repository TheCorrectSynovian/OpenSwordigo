/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551AD8
 * Mangled: sub_551AD8
 * Demangled: sub_551AD8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x0000000000551AE4 string=0x0000000000551AE8 "`"
 *   insn=0x0000000000551AE8 string=0x0000000000551AF0 "x"
 *   insn=0x0000000000551AF0 string=0x0000000000551AF4 "a"
 *   insn=0x0000000000551AF8 string=0x0000000000551AFC "#@"
 *   insn=0x0000000000551AFC string=0x0000000000551B00 "!"
 *   insn=0x0000000000551B04 string=0x0000000000551B08 "b"
 *   insn=0x0000000000551B08 string=0x0000000000551B0C " x`"
 *   insn=0x0000000000551B0C string=0x0000000000551B10 " "
 *   insn=0x0000000000551B14 string=0x0000000000551B18 "B"
 *   insn=0x0000000000551B20 string=0x0000000000551B24 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551AD8(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD280);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
               0) != 0;
  }
  return v3;
}

