/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551634
 * Mangled: sub_551634
 * Demangled: sub_551634
 *
 * Callers: 3
 *   0x00000000005216F0  sub_5216F0
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521A9C  sub_521A9C
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 8
 *   insn=0x000000000055164C string=0x0000000000551650 "a"
 *   insn=0x0000000000551654 string=0x0000000000551658 "#@"
 *   insn=0x0000000000551658 string=0x000000000055165C "!"
 *   insn=0x0000000000551660 string=0x0000000000551664 "b"
 *   insn=0x0000000000551664 string=0x0000000000551668 " x`"
 *   insn=0x0000000000551668 string=0x000000000055166C " "
 *   insn=0x0000000000551678 string=0x000000000055167C "B"
 *   insn=0x000000000055167C string=0x0000000000551680 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551634(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBD28);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::ctype<wchar_t>,
               0) != 0;
  }
  return v3;
}

