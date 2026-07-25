/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551850
 * Mangled: sub_551850
 * Demangled: sub_551850
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
 * Referenced strings: 10
 *   insn=0x000000000055185C string=0x0000000000551860 "`"
 *   insn=0x0000000000551868 string=0x000000000055186C "a"
 *   insn=0x0000000000551870 string=0x0000000000551874 "#@"
 *   insn=0x0000000000551874 string=0x0000000000551878 "!"
 *   insn=0x000000000055187C string=0x0000000000551880 "b"
 *   insn=0x0000000000551880 string=0x0000000000551884 " x`"
 *   insn=0x0000000000551884 string=0x0000000000551888 " "
 *   insn=0x000000000055188C string=0x0000000000551890 "B"
 *   insn=0x0000000000551898 string=0x000000000055189C "!"
 *   insn=0x000000000055189C string=0x00000000005518A0 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551850(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD2A0);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
               0) != 0;
  }
  return v3;
}

