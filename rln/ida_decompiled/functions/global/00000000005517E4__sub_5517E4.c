/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005517E4
 * Mangled: sub_5517E4
 * Demangled: sub_5517E4
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
 *   insn=0x00000000005517F0 string=0x00000000005517F4 "`"
 *   insn=0x00000000005517F4 string=0x00000000005517FC "5"
 *   insn=0x00000000005517FC string=0x0000000000551800 "a"
 *   insn=0x0000000000551804 string=0x0000000000551808 "#@"
 *   insn=0x0000000000551808 string=0x000000000055180C "!"
 *   insn=0x0000000000551810 string=0x0000000000551814 "b"
 *   insn=0x0000000000551814 string=0x0000000000551818 " x`"
 *   insn=0x0000000000551818 string=0x000000000055181C " "
 *   insn=0x0000000000551820 string=0x0000000000551824 "B"
 *   insn=0x000000000055182C string=0x0000000000551830 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5517E4(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD298);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
               0) != 0;
  }
  return v3;
}

