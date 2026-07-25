/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005503C0
 * Mangled: sub_5503C0
 * Demangled: sub_5503C0
 *
 * Callers: 4
 *   0x00000000005216F0  sub_5216F0
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521A9C  sub_521A9C
 *   0x000000000054FE98  sub_54FE98
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x00000000005503CC string=0x00000000005503D0 "`"
 *   insn=0x00000000005503D0 string=0x00000000005503D8 ">"
 *   insn=0x00000000005503D8 string=0x00000000005503DC "a"
 *   insn=0x00000000005503DC string=0x00000000005503E0 ""@"
 *   insn=0x00000000005503E0 string=0x00000000005503E4 "!"
 *   insn=0x00000000005503EC string=0x00000000005503F0 " x`"
 *   insn=0x00000000005503F0 string=0x00000000005503F4 "`"
 *   insn=0x00000000005503F8 string=0x00000000005503FC "B"
 *   insn=0x0000000000550404 string=0x0000000000550408 "!"
 *   insn=0x0000000000550424 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_5503C0(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD298);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

