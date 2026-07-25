/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005516A0
 * Mangled: sub_5516A0
 * Demangled: sub_5516A0
 *
 * Callers: 2
 *   0x0000000000562010  sub_562010
 *   0x0000000000562BC4  sub_562BC4
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 8
 *   insn=0x00000000005516B8 string=0x00000000005516BC "a"
 *   insn=0x00000000005516C0 string=0x00000000005516C4 "#@"
 *   insn=0x00000000005516C4 string=0x00000000005516C8 "!"
 *   insn=0x00000000005516CC string=0x00000000005516D0 "b"
 *   insn=0x00000000005516D0 string=0x00000000005516D4 " x`"
 *   insn=0x00000000005516D4 string=0x00000000005516D8 " "
 *   insn=0x00000000005516E4 string=0x00000000005516E8 "B"
 *   insn=0x00000000005516E8 string=0x00000000005516EC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5516A0(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD338);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::codecvt<wchar_t,char,mbstate_t>,
               0) != 0;
  }
  return v3;
}

