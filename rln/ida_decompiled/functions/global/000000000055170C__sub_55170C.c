/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055170C
 * Mangled: sub_55170C
 * Demangled: sub_55170C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x0000000000551718 string=0x000000000055171C "`"
 *   insn=0x000000000055171C string=0x0000000000551724 "k"
 *   insn=0x0000000000551724 string=0x0000000000551728 "a"
 *   insn=0x000000000055172C string=0x0000000000551730 "#@"
 *   insn=0x0000000000551730 string=0x0000000000551734 "!"
 *   insn=0x0000000000551738 string=0x000000000055173C "b"
 *   insn=0x000000000055173C string=0x0000000000551740 " x`"
 *   insn=0x0000000000551740 string=0x0000000000551744 " "
 *   insn=0x0000000000551748 string=0x000000000055174C "B"
 *   insn=0x0000000000551754 string=0x0000000000551758 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55170C(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD270);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::collate<wchar_t>,
               0) != 0;
  }
  return v3;
}

