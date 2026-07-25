/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000550428
 * Mangled: sub_550428
 * Demangled: sub_550428
 *
 * Callers: 3
 *   0x00000000005216F0  sub_5216F0
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521A9C  sub_521A9C
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x0000000000550434 string=0x0000000000550438 "`"
 *   insn=0x0000000000550438 string=0x0000000000550440 "$"
 *   insn=0x0000000000550440 string=0x0000000000550444 "a"
 *   insn=0x0000000000550444 string=0x0000000000550448 ""@"
 *   insn=0x0000000000550448 string=0x000000000055044C "!"
 *   insn=0x0000000000550454 string=0x0000000000550458 " x`"
 *   insn=0x0000000000550458 string=0x000000000055045C "`"
 *   insn=0x0000000000550460 string=0x0000000000550464 "B"
 *   insn=0x000000000055046C string=0x0000000000550470 "!"
 *   insn=0x000000000055048C string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_550428(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD2A0);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

