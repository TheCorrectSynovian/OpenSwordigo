/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054FD60
 * Mangled: sub_54FD60
 * Demangled: sub_54FD60
 *
 * Callers: 2
 *   0x0000000000562010  sub_562010
 *   0x0000000000562BC4  sub_562BC4
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x000000000054FD78 string=0x000000000054FD7C "a"
 *   insn=0x000000000054FD7C string=0x000000000054FD80 ""@"
 *   insn=0x000000000054FD80 string=0x000000000054FD84 "!"
 *   insn=0x000000000054FD8C string=0x000000000054FD90 " x`"
 *   insn=0x000000000054FD8C string=0x000000000054FDC0 "BU"
 *   insn=0x000000000054FD90 string=0x000000000054FD94 "`"
 *   insn=0x000000000054FDA0 string=0x000000000054FDA4 "!"
 *   insn=0x000000000054FDA4 string=0x000000000054FDA8 "B"
 *   insn=0x000000000054FDA8 string=0x000000000054FDAC "9"
 *   insn=0x000000000054FDC4 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_54FD60(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FD338);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::codecvt<wchar_t,char,mbstate_t>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

