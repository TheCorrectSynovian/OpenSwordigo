/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551994
 * Mangled: sub_551994
 * Demangled: sub_551994
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x00000000005519A0 string=0x00000000005519A4 "`"
 *   insn=0x00000000005519AC string=0x00000000005519B0 "a"
 *   insn=0x00000000005519B4 string=0x00000000005519B8 "#@"
 *   insn=0x00000000005519B8 string=0x00000000005519BC "!"
 *   insn=0x00000000005519C0 string=0x00000000005519C4 "b"
 *   insn=0x00000000005519C4 string=0x00000000005519C8 " x`"
 *   insn=0x00000000005519C8 string=0x00000000005519CC " "
 *   insn=0x00000000005519D0 string=0x00000000005519D4 "B"
 *   insn=0x00000000005519DC string=0x00000000005519E0 "!"
 *   insn=0x00000000005519E0 string=0x00000000005519E4 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551994(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD2B8);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
               0) != 0;
  }
  return v3;
}

