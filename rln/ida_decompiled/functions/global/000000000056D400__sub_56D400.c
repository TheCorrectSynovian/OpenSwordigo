/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D400
 * Mangled: sub_56D400
 * Demangled: sub_56D400
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6A30  .wmemset
 *   0x000000000056554C  sub_56554C
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 6
 *   insn=0x000000000056D424 string=0x000000000056D428 """
 *   insn=0x000000000056D444 string=0x000000000056D448 " "
 *   insn=0x000000000056D450 string=0x000000000056D454 "w%"
 *   insn=0x000000000056D454 string=0x00000000001F6A30 "0'"
 *   insn=0x000000000056D484 string=0x000000000056D48C "0"
 *   insn=0x000000000056D484 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56D400(const wchar_t **a1, size_t a2, wchar_t a3)
{
  wchar_t *v6; // x0

  if ( a2 > 0xFFFFFFFFFFFFFFELL )
    sub_56554C("basic_string::_M_replace_aux");
  sub_56C650(a1, 0, *((_QWORD *)*a1 - 3), a2);
  if ( !a2 )
    return a1;
  v6 = (wchar_t *)*a1;
  if ( a2 != 1 )
  {
    wmemset(v6, a3, a2);
    return a1;
  }
  *v6 = a3;
  return a1;
}

