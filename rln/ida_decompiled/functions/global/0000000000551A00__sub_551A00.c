/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551A00
 * Mangled: sub_551A00
 * Demangled: sub_551A00
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 9
 *   insn=0x0000000000551A0C string=0x0000000000551A10 "`"
 *   insn=0x0000000000551A18 string=0x0000000000551A1C "a"
 *   insn=0x0000000000551A20 string=0x0000000000551A24 "#@"
 *   insn=0x0000000000551A24 string=0x0000000000551A28 "!"
 *   insn=0x0000000000551A2C string=0x0000000000551A30 "b"
 *   insn=0x0000000000551A30 string=0x0000000000551A34 " x`"
 *   insn=0x0000000000551A34 string=0x0000000000551A38 " "
 *   insn=0x0000000000551A3C string=0x0000000000551A40 "B"
 *   insn=0x0000000000551A48 string=0x0000000000551A4C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551A00(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD290);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::__timepunct<wchar_t>,
               0) != 0;
  }
  return v3;
}

