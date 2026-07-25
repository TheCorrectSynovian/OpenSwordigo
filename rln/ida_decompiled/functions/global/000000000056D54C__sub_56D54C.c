/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D54C
 * Mangled: sub_56D54C
 * Demangled: sub_56D54C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6A30  .wmemset
 *   0x000000000056554C  sub_56554C
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 11
 *   insn=0x000000000056D54C string=0x000000000056D550 "B"
 *   insn=0x000000000056D558 string=0x000000000056D55C "B"
 *   insn=0x000000000056D560 string=0x000000000056D564 "3"
 *   insn=0x000000000056D57C string=0x000000000056D580 "a"
 *   insn=0x000000000056D590 string=0x000000000056D594 "/"
 *   insn=0x000000000056D594 string=0x000000000056D598 "4"
 *   insn=0x000000000056D5A4 string=0x000000000056D5A8 " "
 *   insn=0x000000000056D5A8 string=0x000000000056D5AC " "
 *   insn=0x000000000056D5AC string=0x000000000056D5D0 "$h3"
 *   insn=0x000000000056D5B8 string=0x00000000001F6A30 "0'"
 *   insn=0x000000000056D5E8 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56D54C(const wchar_t **a1, __int64 a2, __int64 a3, unsigned __int64 a4, wchar_t a5)
{
  __int64 v5; // x2
  __int64 v6; // x19

  v5 = (a3 - a2) >> 2;
  v6 = a2 - (_QWORD)*a1;
  if ( a4 > 0xFFFFFFFFFFFFFFELL - *((_QWORD *)*a1 - 3) + v5 )
    sub_56554C("basic_string::_M_replace_aux");
  sub_56C650(a1, v6 >> 2, v5, a4);
  if ( !a4 )
    return a1;
  if ( a4 != 1 )
  {
    wmemset((wchar_t *)((char *)*a1 + v6), a5, a4);
    return a1;
  }
  *(const wchar_t *)((char *)*a1 + v6) = a5;
  return a1;
}

